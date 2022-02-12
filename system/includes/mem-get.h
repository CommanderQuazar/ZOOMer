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


#ifndef ZOOMER_OSX_MEM_GET_H
#define ZOOMER_OSX_MEM_GET_H

#include "../includes/cli.h"
#include "../includes/token.h"

#define DAY_TO_INDEX(a, b)\
if(a == 0)       \
    b = 6;       \
else             \
    b = --a;

struct token * allocate_session(char * session_name);
struct token * allocateMeeting(char * name, char * url, int start_h, int start_m,
                               int end_h, int end_m, int dayOfWeek);
void deallocateMeeting(struct token * meeting, int day_index, int current_schedule);
void deallocateFullSchedule(struct token * sorted_session, int current_schedule, int * total);
void deallocateDay(struct token * meeting, int weekIndex, int current_schedule);

#endif //ZOOMER_OSX_MEM_GET_H
