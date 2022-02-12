//
// Created by Tobey Ragain (CommanderQuazar) on 5/28/21.
// Copyright (c) 2021 Argon Galactic, Inc.
// All Rights Reserved2
//

/* system Version 3 */

#include "dependencies.h"
#include "runtime-functionality.h"
#include "errors.h"
#include "cli.h"
#include "mem-get.h"

int POS = 0;

/*-------------------------------SORTING FUNCTIONALITY-------------------------------*/

/*
 * Swaps the data values of two token nodes
 */
static void swap(struct token * a, struct token * b)
{
    struct token temp;

    temp.meeting_start_time = a->meeting_start_time;
    temp.meeting_end_time   = a->meeting_end_time;
    temp.name               = a->name;
    temp.URL                = a->URL;

    a->meeting_start_time   = b->meeting_start_time;
    a->meeting_end_time     = b->meeting_end_time;
    a->name                 = b->name;
    a->URL                  = b->URL;

    b->meeting_start_time   = temp.meeting_start_time;
    b->meeting_end_time     = temp.meeting_end_time;
    b->name                 = temp.name;
    b->URL                  = temp.URL;
}

/*
 * Sorts a single day via bubble sort in assessing order of start times
 */
void sortDay(struct token * dayHead)
{
    int swapped;
    struct token *ptr1;
    struct token *lptr = NULL;

    /* Checking for empty list */
    if (dayHead == NULL || dayHead->next == NULL)
        return;

    do
    {
        swapped = 0;
        ptr1 = dayHead;
        while (ptr1->next != lptr)
        {
            if (HOUR_TO_SEC(ptr1->meeting_start_time.tm_hour) + MIN_TO_SEC(ptr1->meeting_start_time.tm_min) >
                HOUR_TO_SEC(ptr1->next->meeting_start_time.tm_hour) +
                MIN_TO_SEC(ptr1->next->meeting_start_time.tm_min))
            {
                swap(ptr1, ptr1->next);
                swapped = 1;
            }
            ptr1 = ptr1->next;
        }
        lptr = ptr1;
    }
    while (swapped);
}

/*-------------------------------SORTING FUNCTIONALITY END-------------------------------*/

/*-------------------------------SECONDARY SUPPORT FUNCTIONS-------------------------------*/

/*
 * Loads ZOOMer and AG logo in program head
 */
void graphicsLoader(char filename[100])
{
    FILE *fptr;
    char c;

    // Open file
    fptr = fopen(filename, "r");
    if (fptr == NULL)
    {
        printf("ERROR - Cannot open file \n");
        exit(0);
    }

    // Read contents from file
    c = fgetc(fptr);
    while (c != EOF)
    {
        printf ("%c", c);
        c = fgetc(fptr);
    }

    fclose(fptr);
}

/*
 * Prints the prompt that displays the weekday and the current meeting #
 */
void printPrompt(int weekDay, int cur_meeting_num)
{

    char * str_week_day = NULL;

    switch(weekDay)
    {
        case 1:
            str_week_day = "Monday";
            break;
        case 2:
            str_week_day = "Tuesday";
            break;
        case 3:
            str_week_day = "Wednesday";
            break;
        case 4:
            str_week_day = "Thursday";
            break;
        case 5:
            str_week_day = "Friday";
            break;
        case 6:
            str_week_day = "Saturday";
            break;
        case 0:
            str_week_day = "Sunday";
            break;
        default:
            exit(44);
    }
    printf("(%s)(%i/100) ", str_week_day, cur_meeting_num);
}

/*
 * Returns a string value based off a 0-6 value range
 */
char * getStrWeek_D(int weekDay)
{
    char * str_week_day = NULL;

    switch(weekDay)
    {
        case 1:
            str_week_day = "Monday";
            break;
        case 2:
            str_week_day = "Tuesday";
            break;
        case 3:
            str_week_day = "Wednesday";
            break;
        case 4:
            str_week_day = "Thursday";
            break;
        case 5:
            str_week_day = "Friday";
            break;
        case 6:
            str_week_day = "Saturday";
            break;
        case 7:
            str_week_day = "Sunday";
            break;
        case 0:
            str_week_day = "Sunday";
            break;
        default:
            exit(33);
    }
    return str_week_day;
}

/*
 * Returns a string based the error enum
 */
char * getErrorStr(error e_error)
{
    char * str_error = NULL;

    switch(e_error)
    {
        case start_before_end:
            str_error = "Cannot start before end";
            break;
        case equal_start_end_times:
            str_error = "Cannot have equal start & stop times";
            break;
        case equal_meetings:
            str_error = "Cannot launch two meeting simultaneously";
            break;
        case meeting_overlap:
            str_error = "Multiple meetings overlap another";
            break;
        default:
            exit(55);
    }
    return str_error;
}

/*
 * Gets the time for meetings, if none int gets loops
 * FLAGS:
 * Hour is 1, if over 24 loops
 * Min is 0, if over 59 loops
 */
int getTime(int flag)
{
    char *p, s[100];
    int n;

    while (fgets(s, sizeof(s), stdin))
    {
        n = strtol(s, &p, 10);
        if (p == s || *p != '\n')
            printf("Please enter an integer: ");
        else if (flag == 1 && n > 24)
            printf("Please enter a valid time: ");
        else if(flag == 0 && n > 59)
            printf("Please enter a valid time: ");
        else break;
    }
    printf("\n");
    return n;
}

/*
 * Searches through valid meeting ids to verify option is legal
 */
int i_checker(int * arr_meeting_ids, int total)
{
    int meeting_id_selc;
    while(1)
    {
        printf("Enter Choice: ");
        scanf("%i", &meeting_id_selc);

        if(iterativeBinarySearch(arr_meeting_ids, 1, total, meeting_id_selc))
            return meeting_id_selc;
        printf("Invalid, try again.\n");
    }
}

/*
 * Function looks through an arr of options and once it gets stdin compares to possible options
 * Repeats if stdin is ont found in option arr
 */

char selector(const char * options, size_t numberOfOptions)
{
    char userChoice;
    while(1)
    {
        fflush(stdin);
        printf("%sEnter Choice: ", KNRM);
        fgets(&userChoice, MAX_SELECT, stdin);

        for(int i = 0; i < numberOfOptions; i++)
        {
            fflush(stdout);
            if(options[i] == userChoice)
                return userChoice;
        }
        printf("%sInvalid Option, try again\n", KRED);
    }
}

/*-------------------------------END SECONDARY SUPPORT FUNCTIONS-------------------------------*/

/*-------------------------------UTILITY FUNCTIONS-------------------------------*/

/*
 * Searches over an array of meeting ids to find if inputted id is within scope
 */
int iterativeBinarySearch(const int array[], int start_index, int end_index, int element)
{
    while (start_index <= end_index)
    {
        int middle = start_index + (end_index- start_index )/2;
        if (array[middle] == element)
            return 1;
        if (array[middle] < element)
            start_index = middle + 1;
        else
            end_index = middle - 1;
    }
    return 0;
}

/*
 * Takes a pointer to a day and adds the new node to the end
 * Sorts once appended
 */
void appendToEnd(struct token * day_list, struct token * newNode)
{
    struct token * temp = day_list;
    while(temp != NULL)
    {
        if(temp->next == NULL)
        {
            temp->next = newNode;
            break;
        }
        temp = temp->next;
    }
    sortDay(day_list);
}

/*
 * Check if full session has not meetings
 * Return true is no meetings are found
 */

int checkNull(struct token * session)
{
    for(int i = 0; i < 7; i++)
    {
        struct token * temp = session;
        if(temp->next != NULL)
            return 0;
        session = session->Child;
    }
    return 1;
}

/*
 * Adds all meetings under to_repeat into the specified day header
 */
void push_meetings(struct token * day_head, struct token * to_repeat)
{
    if(day_head->meeting_start_time.tm_wday == to_repeat->meeting_start_time.tm_wday)
        return;

    //Checks weather meetings have already been added if so remove them
    if(day_head->next != NULL)
        deallocateDay(day_head->next, day_head->meeting_start_time.tm_wday, schedule_index);

    struct token * new_head = NULL;

    while(to_repeat->next != NULL)
    {
        to_repeat = to_repeat->next;

        struct token * new_node = allocateMeeting(
                to_repeat->name, to_repeat->URL,
                to_repeat->meeting_start_time.tm_hour,
                to_repeat->meeting_start_time.tm_min,
                to_repeat->meeting_end_time.tm_hour,
                to_repeat->meeting_end_time.tm_min,
                day_head->meeting_start_time.tm_wday);

        new_node->next = new_head;
        new_head = new_node;
    }
    day_head->next = new_head;
    sortDay(day_head);
}

/*
 * Clear logic for MacOS/Unix and Win10
 */
void clearScreen(void)
{
    #if defined(__linux__) || defined(__unix__) || defined(__APPLE__)
        system("clear");
    #endif

    #if defined(_WIN32) || defined(_WIN64)
        system("cls");
    #endif
}

/*
 * Function returns a meeting based on the meeting id entered by the user
 */
struct token * find_meeting(struct token * sorted_session, int total_meetings)
{
    int meeting_id, totalArr[MAX_SESSION_MEETINGS], counter = 0, meeting_id_count = 1;
    struct token * meetingToEdit = NULL;
    bool isFound = 0;

    //Assigns all possible meeting ids
    for(int i = 1; i <= total_meetings; i++)
        totalArr[i] = i;

    printf("To edit a meeting, select it's meeting ID.\n");
    meeting_id = i_checker(totalArr, total_meetings);

    //Find meeting to edit from the id
    while(counter++ != WEEK_DAYS)
    {
        struct token * temp = sorted_session;
        temp = temp->next;  //Offset
        while(temp != NULL || !isFound)
        {
            if(temp == NULL)
                break;
            //Checks if the meeting pass matches the m_id
            if(meeting_id_count++ == meeting_id)
            {
                meetingToEdit = temp;
                isFound = 1;
                break;
            }
            temp = temp->next;
        }
        sorted_session = sorted_session->Child;
    }
    return meetingToEdit;
}

/*
 * Once return is entered function returns
 */
void pressToExit(void)
{
    printf("Press Return to Exit\n");
    do
    {
        char userChoice;
        fgets(&userChoice, MAX_SELECT, stdin);
        if(userChoice == '\n')
            return;
    }
    while(1);
}

/*
 * Moves any list that are behind a deallocated schedule forward
 */
void savedMover(struct token * list_to_adjust[], int total_schedules)
{
    for (int i = 0; i < total_schedules; ++i)
    {
        if(list_to_adjust[i] == NULL && i != total_schedules)
        {
            for (int j = i; j < total_schedules; ++j)
                list_to_adjust[i] = list_to_adjust[i + 1];
            return;
        }
    }
}

/*-------------------------------END UTILITY FUNCTIONS-------------------------------*/
