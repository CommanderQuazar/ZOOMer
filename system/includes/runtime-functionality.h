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

