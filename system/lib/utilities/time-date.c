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

#include "dependencies.h"
#include "runtime-functionality.h"

//TIME SECTION

/*
 * Gets current system time
 * Reads time into currentTimeAndDate in structure_layout
 * If option 1 is passed program sleeps 1 second
 * If option 0 is passed program goes through regular execution
 */
void getcurrentTimeAndDate(int x)
{
    time_t rawTime;
    time(&rawTime);
    currentTimeAndDate = localtime(&rawTime);
    if (x == 1)
        sleep(1);
}

/*
 * Function takes a meetings node and the current time
 * Them compares the two times
 * If the meeting start time is greater than the current time it returns (false)
 * If the meeting start time is less than the current time it returns (ture)
 */

bool compareTime(struct token * meetingStartTime, struct tm * currentTime)
{
    double t1 = HOUR_TO_SEC(meetingStartTime->meeting_start_time.tm_hour) +
                MIN_TO_SEC(meetingStartTime->meeting_start_time.tm_min);
    double t2 = HOUR_TO_SEC(currentTime->tm_hour) + MIN_TO_SEC(currentTime->tm_min);

    double sec_dif = t1 - t2;

    if (sec_dif < 0 || sec_dif == 0)
        return true;
    else
        return false;

}
