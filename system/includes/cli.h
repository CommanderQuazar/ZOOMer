//
// Created by Tobey Ragain (CommanderQuazar) on 5/28/21.
// Copyright (c) 2021 Argon Galactic, Inc.
// All Rights Reserved
//

#ifndef ZOOMER_OSX_CLI_H
#define ZOOMER_OSX_CLI_H

#define MAX_URL_SIZE 300
#define MAX_NAME_SIZE 15
#define MAX_SCHEDULE_NAME_SIZE 25
#define MAX_MEETINGS 100
#define MAX_SESSION_MEETINGS 1050
#define MAX_SELECT 3
#define MAX_SELECT_SINGLE 2
#define WEEK_DAYS 7
#define MAX_SCHEDULES 25
#define INT_TO_CHAR(x, y) x = y - '0'
#define REMOVE_NEW_LINE(x) x[strcspn(x, "\n")] = 0

#define HOUR 1
#define MINUTES 0
#define NAME_MAXLEN 84

#define ARGON_FULL_LOGO_PATH "/Users/tobeyragain/Argon Galactic/Projects/ZOOMer/system/icons/argon_full_ascii.txt"
#define ZOOMER_TILE_ICON "/Users/tobeyragain/Argon Galactic/Projects/ZOOMer/system/icons/zoomer_icon_ascii_small.txt"

#include "../includes/errors.h"
#include "../includes/dependencies.h"

// Terminal colors
#define KNRM  "\x1B[0m"
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[34m"
#define KMAG  "\x1B[35m"
#define KCYN  "\x1B[36m"
#define KWHT  "\x1B[37m"

extern int schedule_index;      //Holds the index of the current session
extern int POS;                 //Holds the current weekday position

int meetings[MAX_SCHEDULES][WEEK_DAYS];     //Holds total days for each day
struct token * scheduleList[MAX_SCHEDULES]; //Hold a max of 25 schedules

void createMainMenu(void);
void sortDay(struct token * dayHead);
void graphicsLoader(char filename[100]);
void printPrompt(int weekDay, int cur_meeting_num);
void summeryActions(struct token * session_head);
void appendToEnd(struct token * day_list, struct token * newNode);
void push_meetings(struct token * day_head, struct token * to_repeat);
void clearScreen(void);
void pressToExit(void);
void savedMover(struct token * list_to_adjust[], int total_schedules);
int getTime(int i);
int i_checker(int * arr_meeting_ids, int total);
char * getStrWeek_D(int weekDay);
char * getErrorStr(error e_error);
char selector(const char * options, size_t numberOfOptions);
int iterativeBinarySearch(const int array[], int start_index, int end_index, int element);
int errorHandler(struct token * sorted_session);
int checkNull(struct token * session);
struct token * find_meeting(struct token * sorted_session, int total_meetings);

#endif //ZOOMER_OSX_CLI_H
