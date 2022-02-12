//
// Created by Tobey Ragain (CommanderQuazar) on 1/9/21.
// Copyright (c) 2021 Argon Galactic, Inc.
// All Rights Reserved
//

/* system Version 3 */

/* Some notes on the storage structure:
 * A includes will start off the linked list and will point to the weekdays int he current
 * session. Sunday (final node in the session) will bypass the includes and point directly to
 * Monday (first node after the includes) which creates a more smooth and resource efficient
 * transition from Sunday to Monday nodes.
 */

#ifndef HEADER_TESTER_FUNCS_H
#define HEADER_TESTER_FUNCS_H

#define NO_SLEEP 0
#define SLEEPS 1

#define MIN_TO_SEC(m) m * 60
#define HOUR_TO_SEC(h) h * MIN_TO_SEC(60)
#define BUF_SIZE 2022


#include "../includes/token.h"

//Functions
void * program_runtime(struct token *, bool);
void getcurrentTimeAndDate(int x);
void open_meeting(struct token *currentMeeting, bool soundOn);
void end_meeting(bool soundOn);
char *openBrowserCmd(char * meeting_url);
bool compareTime(struct token * meetingStartTime, struct tm * currentTime);
struct token *getDayWeek(struct token * sorted_session, int dayToGet);
struct token *getDayMover(struct token * sorted_session, int currentDay, int daysToMoveOver);



#endif //HEADER_TESTER_FUNCS_H

