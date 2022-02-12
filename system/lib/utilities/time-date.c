//
// Created by Tobey Ragain (CommanderQuazar) on 1/9/21.
// Copyright (c) 2021 Argon Galactic, Inc.
// All Rights Reserved
//

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
