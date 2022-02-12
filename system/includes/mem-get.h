//
// Created by Tobey Ragain on 6/11/21.
// Copyright (c) 2021 Argon Galactic, Inc.
// All Rights Reserved
//

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
