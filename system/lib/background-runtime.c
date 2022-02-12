// MIT License
//
// Copyright (c) 2022 Tobey Ragain
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.


/* system Version 3 */

/*
 * This file is the entry point for the cpp and Qt interface.
 * Takes a Session tree and starts the program with the defined values
 * Only when a sigkill signal is passed by cpp/Qt interface dose the programme end
 */

#include "../includes/dependencies.h"
#include "../includes/runtime-functionality.h"


#pragma clang diagnostic push
#pragma ide diagnostic ignored "EndlessLoop"

#define MOVE_ONE_DAY 1
#define MOVE_TWO_DAYS 2
#define END_OF_DAY_H 23
#define END_OF_DAY_M 59
#define END_OF_DAY_S 59

bool isChildNULL = false;
bool nextIsNull = false;


// Holds the current day composed of meetings
struct token *day_holder = NULL;

void * program_runtime(struct token *sorted_session, bool soundOn)
{
    getcurrentTimeAndDate(NO_SLEEP);

    while (1)
    {
        getcurrentTimeAndDate(NO_SLEEP);
        int meetingMover = 0;

        /*----------------------------------move_session_header_for_date_and_time---------------------------------------*/
        //Moves across list to find the current day of the week
        day_holder = getDayWeek(sorted_session, currentTimeAndDate->tm_wday);

        //Move the meeting includes to point to the meeting at corresponds to the current time
        do
        {
            meetingMover = 0;   //Reset
            //Checks if next day is NULL - currently child is NULL because meeting day_holder is not linked
            if (getDayMover(sorted_session, currentTimeAndDate->tm_wday, 2)->next == NULL ||
                getDayMover(sorted_session, currentTimeAndDate->tm_wday, 1)->next == NULL)
                isChildNULL = true;
            else
                isChildNULL = false;

            //If all of the meetings have passed || day is NULL
            if (day_holder->next == NULL)
            {
                sleep(HOUR_TO_SEC(24) - HOUR_TO_SEC(currentTimeAndDate->tm_hour) -
                      (MIN_TO_SEC(currentTimeAndDate->tm_min)) - currentTimeAndDate->tm_sec - 2);   //Sleeps till the end of the day <TEMPORARY>

                //If the next meeting is NULL
                //Cannot check if next day is NULL because day_holder is not pointing to a includes
                if (isChildNULL)
                {
                    day_holder = getDayMover(sorted_session, currentTimeAndDate->tm_wday, MOVE_TWO_DAYS);

                    //If next day is NULL move to next day
                    while (day_holder->next == NULL)
                    {

                        //Keep moving by one until non-null day is found
                        day_holder = getDayMover(sorted_session, currentTimeAndDate->tm_wday, ++meetingMover);
                    }
                    day_holder = day_holder->next;  //Moves off day includes
                    break;
                }
                //Moves to next non-null day
                else
                {
                    day_holder = getDayMover(sorted_session, currentTimeAndDate->tm_wday, MOVE_ONE_DAY);
                    day_holder = day_holder->next;  //Moves off day includes
                    break;
                }
            }

            //Moves to next meeting within a day
            if (day_holder->next != NULL)
                day_holder = day_holder->next;

        }
        while (compareTime(day_holder, currentTimeAndDate));

        nextIsNull = false;
        /*------------------------------------------------------------------------------------------------------------*/
        do
        {
            getcurrentTimeAndDate(SLEEPS);

            //First checks if the next day is the week includes, if not true checks if the next day is empty
            if (getDayMover(sorted_session, currentTimeAndDate->tm_wday, 1)->next == NULL)
                nextIsNull = true;
            else
                nextIsNull = false;

            //Checks if the current days date matches the current time and date
            if (day_holder->meeting_start_time.tm_hour == currentTimeAndDate->tm_hour &&
                day_holder->meeting_start_time.tm_min == currentTimeAndDate->tm_min   &&
                day_holder->meeting_start_time.tm_sec == currentTimeAndDate->tm_sec   &&
                day_holder->meeting_start_time.tm_wday == currentTimeAndDate->tm_wday)
            {
                //When loaded in from cpp program sec will be set to 0
                open_meeting(day_holder, soundOn);
            }
            //Checks if the current days date matches the current time and date
            else if (day_holder->meeting_end_time.tm_hour == currentTimeAndDate->tm_hour &&
                     day_holder->meeting_end_time.tm_min == currentTimeAndDate->tm_min   &&
                     day_holder->meeting_end_time.tm_sec == currentTimeAndDate->tm_sec   &&
                     day_holder->meeting_end_time.tm_wday == currentTimeAndDate->tm_wday)
            {
                end_meeting(soundOn);
                do
                {
                    //Next meeting
                    if (day_holder->next != NULL)
                    {
                        day_holder = day_holder->next;
                        break;
                    }
                    //If next day is empty, skip over it - If multiple empty days continue till not NULL day is found
                    else if(nextIsNull)
                    {
                        meetingMover = 0;   //Reset
                        day_holder = getDayMover(sorted_session, currentTimeAndDate->tm_wday, MOVE_TWO_DAYS);

                        //If next day is NULL move to next day
                        while (day_holder->next == NULL)
                        {
                            //Keep moving by one until non-null day is found
                            day_holder = getDayMover(sorted_session, currentTimeAndDate->tm_wday, ++meetingMover);
                        }
                        day_holder = day_holder->next;  //Moves off day includes
                        nextIsNull = false;
                        break;
                    }
                    //If no more meetings // 24h crossover
                    else if (day_holder->next == NULL ||
                             (currentTimeAndDate->tm_hour == END_OF_DAY_H &&
                              currentTimeAndDate->tm_min == END_OF_DAY_M &&
                              currentTimeAndDate->tm_sec == END_OF_DAY_S))
                    {
                        day_holder = getDayMover(sorted_session, currentTimeAndDate->tm_wday, 1);   //Next day
                        day_holder = day_holder->next;  //Moves off day includes
                        break;
                    }
                } while (1);
            }
        } while (1);
    }
}

#pragma clang diagnostic pop

