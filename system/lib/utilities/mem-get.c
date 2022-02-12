//
// Created by Tobey Ragain (CommanderQuazar) on 6/11/21.
// Copyright (c) 2021 Argon Galactic, Inc.
// All Rights Reserved
//

/* system Version 3 */

#include "../includes/mem-get.h"

/*
 * Allocates seven nodes and create a circular linked list to represent a standard week
 */
struct token * allocate_session(char * session_name)
{
    int total_wk_days = 6, counter = 0, wk_day = 1;
    struct token * head = (struct token *) malloc(sizeof(struct token));
    struct token * prevDay = NULL, * new_day = NULL;

    head->meeting_start_time.tm_wday = wk_day;
    prevDay = head;

    //Allocates all 7 days of the week
    while(total_wk_days > counter++)
    {
        new_day = (struct token *) malloc(sizeof(struct token));
        new_day->name = (char *)malloc(strlen(session_name));
        //Copies over to the new node
        strcpy(new_day->name, session_name);

        //Sunday is set to 0
        if(wk_day++ == WEEK_DAYS - 1)
            new_day->meeting_start_time.tm_wday = 0;
        else
            new_day->meeting_start_time.tm_wday = wk_day;

        new_day->next = NULL;

        prevDay->Child = new_day;
        prevDay = new_day;
    }

    //Links to make circular
    prevDay->Child = head;
    return head;
}

/*
 * Allocates and assigns data to individual meeting
 * Returns new token as meeting
 */
struct token * allocateMeeting(char * name, char * url, int start_h, int start_m,
                               int end_h, int end_m, int dayOfWeek)
{
    int weekIndex;
    struct token * new_node = (struct token *) malloc(sizeof(struct token));

    //Allocates space
    new_node->name = (char *)malloc(strlen(name));
    new_node->URL = (char *)malloc(strlen(url));

    //Copies over to the new node
    strcpy(new_node->name, name);
    strcpy(new_node->URL, url);

    //Assigns times
    new_node->meeting_start_time.tm_hour = start_h;
    new_node->meeting_start_time.tm_min = start_m;
    new_node->meeting_end_time.tm_hour = end_h;
    new_node->meeting_end_time.tm_min = end_m;

    new_node->meeting_end_time.tm_wday = dayOfWeek;
    new_node->meeting_start_time.tm_wday = dayOfWeek;

    new_node->next = NULL;
    new_node->Child = NULL;

    //Create an index value
    DAY_TO_INDEX(dayOfWeek, weekIndex)

    meetings[schedule_index][weekIndex]++;

    return new_node;
}

/*
 * Deallocates all heap memory from node
 */
void deallocateMeeting(struct token * meeting, int day_index, int current_schedule)
{
    meetings[current_schedule][day_index]--;
    free(meeting->URL);
    free(meeting->name);
    free(meeting);
}

/*
 * Deallocates all heap memory loaded for a single day
 *Composed of individual meetings
 */
void deallocateDay(struct token * meeting, int weekIndex, int current_schedule)
{
    int w_day;
    //Removes days from meetings arr
    DAY_TO_INDEX(weekIndex, w_day)
    struct token * temp = meeting;
    while(temp != NULL)
    {
        deallocateMeeting(temp, w_day, current_schedule);
        temp = temp->next;
    }
}

/*
 * Deallocates all memory loaded for a session
 */
void deallocateFullSchedule(struct token * sorted_session, int current_schedule, int * total)
{
    int count = 0;
    while(count++ != WEEK_DAYS)
    {
        struct token * temp = sorted_session;
        // If not meetings have been allocated
        if(temp->next == NULL)
        {
            free(temp->name);
            free(temp);     //Frees the weekday header
        }
        else
        {
            //Temp moves off weekday header
            deallocateDay(temp->next, sorted_session->meeting_start_time.tm_wday, current_schedule);
            free(temp->name);
            free(temp);     //Frees the weekday header
        }
        sorted_session = sorted_session->Child;
    }
    *total -= 1;
}