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

#include "../includes/dependencies.h"
#include "../includes/runtime-functionality.h"
#include "../includes/errors.h"
#include "../includes/cli.h"
#include "../includes/mem-get.h"
#include "../includes/process-ops.h"

bool isSound = 1;
int schedule_index = 0;
int total_schedules = 0;

#define ZOOMER_TILE_ICON "../system/icons/zoomer_icon_ascii_small.txt"

/*
 * Creates a table composed of all list found in a session pointer
 * If sorted session head is NULL displays table head and no meetings
 */
void createSessionTable(struct token * sorted_session)
{
    clearScreen();
    int counter = 0, list_counter = 0;
    bool isNull = 1;
    printf("%s                                Schedule Table\n", KNRM);
    printf("%s+------------------------------------------------------------------------------+\n", KNRM);
    printf("%s| Meeting ID           Name             Start Time       End Time          Day |\n", KNRM);
    printf("%s+------------------------------------------------------------------------------+", KNRM);

    while(counter++ < 7)
    {
        struct token * temp = sorted_session;

        // If a NULL day is encountered skip printing next line
        if(temp->next != NULL)
            printf("\n");

        temp = temp->next;
        while(temp != NULL)
        {
            isNull = 0;
            list_counter++;
            printf("%s%5i%22s", KGRN, list_counter, temp->name);
            printf("%16i:",  temp->meeting_start_time.tm_hour);
            // If the minute value is a single digit add 0 to account for table offset
            if(temp->meeting_start_time.tm_min <= 9)
                printf("0");

            printf("%i", temp->meeting_start_time.tm_min);

            printf("%14i:",  temp->meeting_end_time.tm_hour);
            // If the minute value is a single digit add 0 to account for table offset
            if(temp->meeting_end_time.tm_min <= 9)
                printf("0");

            printf("%i", temp->meeting_end_time.tm_min);

            printf("%16s\n", getStrWeek_D(temp->meeting_start_time.tm_wday));

            temp = temp->next;
        }
        sorted_session = sorted_session->Child;
    }
    if(isNull)
        printf("\n%40sNo Meetings\n", KRED);

    printf("%s+------------------------------------------------------------------------------+", KNRM);
}

/*-------------------------------NEW SCHEDULE FUNCTIONS-------------------------------*/

/*
 * From an pre existing meeting the user can reenter any information
 * in the meeting
 */
void editMeeting(struct token * sorted_session, int total)
{
    clearScreen();
    if(checkNull(sorted_session))
    {
        printf("%sNo meetings.\n", KRED);
        sleep(1);
        return;
    }

    createSessionTable(sorted_session);
    struct token * meetingToEdit = find_meeting(sorted_session, total);

    //Gets new values
    fflush(stdin);
    char meeting_name[MAX_NAME_SIZE], url[MAX_URL_SIZE];
    int start_time_h, start_time_m, end_time_h, end_time_m;

    printf("Enter the meeting name.\n");
    printf("New name: ");
    fgets(meeting_name, MAX_NAME_SIZE, stdin);

    //Removes new line char
    REMOVE_NEW_LINE(meeting_name);
    printf("\n");

    printf("Enter the meeting URL.\n");
    printf("New URL: ");
    fflush(stdin);
    fgets(url, MAX_URL_SIZE, stdin);
    printf("\n");

    printf("Enter meeting start time (24h)\n");
    printf("Hour: ");
    start_time_h = getTime(HOUR);

    printf("Min: ");
    start_time_m = getTime(MINUTES);

    printf("Enter meeting end time (24h)\n");
    printf("Hour: ");
    end_time_h = getTime(HOUR);

    printf("Min: ");
    end_time_m = getTime(MINUTES);

    //Frees allocated heap memory
    free(meetingToEdit->name);
    free(meetingToEdit->URL);

    //Reallocates memory
    meetingToEdit->name = (char *)malloc(strlen(meeting_name));
    meetingToEdit->URL = (char *)malloc(strlen(url));

    //Copies over to the new node
    strcpy(meetingToEdit->name, meeting_name);
    strcpy(meetingToEdit->URL, url);

    //Assigns times
    meetingToEdit->meeting_start_time.tm_hour = start_time_h;
    meetingToEdit->meeting_start_time.tm_min = start_time_m;
    meetingToEdit->meeting_end_time.tm_hour = end_time_h;
    meetingToEdit->meeting_end_time.tm_min = end_time_m;

    //Checks if edit made any errors
    sortDay(sorted_session);
    errorHandler(sorted_session);
}

// Creates a new meeting within a session
void createMeeting(struct token * sorted_session)
{
    char url[MAX_URL_SIZE], name[MAX_NAME_SIZE], week_c;
    int start_min, start_hr, end_min, end_hr, week_i;
    const char arrWKd[WEEK_DAYS] = {'1', '2', '3', '4', '5', '6', '0'};
    size_t size = sizeof(arrWKd)/sizeof(arrWKd[0]);

    printf("\nWhat day do you want to add the meeting too?\n"
           "Monday (1) Tuesday (2) Wednesday (3) Thursday (4) "
           "Friday (5) Saturday (6) Sunday (0)\n\n");
    week_c = selector(arrWKd, size);

    //Gets an integer value
    INT_TO_CHAR(week_i, week_c);

    // Checks if new meeting is over the max amount of meetings per day
    if(meetings[schedule_index][week_i] > MAX_MEETINGS)
    {
        printf("Cannot add anymore meetings.\n");
        return;
    }

    printf("Enter the meeting name.\n");
    printf("New name: ");
    fgets(name, MAX_NAME_SIZE, stdin);

    //Removes new line char
    REMOVE_NEW_LINE(name);
    printf("\n");

    printf("Enter the meeting URL.\n");
    printf("New URL: ");
    fflush(stdin);
    fgets(url, MAX_URL_SIZE, stdin);
    printf("\n");

    printf("Enter meeting start time (24h)\n");
    printf("Hour: ");
    start_hr = getTime(HOUR);

    printf("Min: ");
    start_min = getTime(MINUTES);

    printf("Enter meeting end time (24h)\n");
    printf("Hour: ");
    end_hr = getTime(HOUR);

    printf("Min: ");
    end_min = getTime(MINUTES);

    //Gets new node + linked data
    struct token * new_node = allocateMeeting(name, url, start_hr, start_min, end_hr, end_min, week_i);

    if(week_i == 0)
        week_i = 7;

    int counter = 1;
    struct token * temp = sorted_session;

    //Find day to add to (OPTIMISE)
    while(counter++ != week_i)
        temp = temp->Child;

    appendToEnd(temp, new_node);
}

/*
 * Removes a specific meeting from within a certain schedule
 * Deallocates all data related to the meeting and returns
 */
void removeMeeting(struct token * sorted_session, int total)
{
    clearScreen();
    if(checkNull(sorted_session))
    {
        printf("%sNo meetings.%s\n", KRED, KNRM);
        sleep(1);
        return;
    }
    createSessionTable(sorted_session);

    int meeting_id, totalArr[MAX_SESSION_MEETINGS];

    //Assigns all possible meeting ids
    for(int i = 1; i <= total; i++)
        totalArr[i] = i;

    printf("\nEnter the ID of the meeting you want to delete.\n");
    meeting_id = i_checker(totalArr, total);

    //Find meeting to edit from the id
    int counter = 0, id_counter = 1;

    while(counter++ != WEEK_DAYS)
    {
        struct token * temp = sorted_session, * prev = NULL;
        while(temp->next != NULL)
        {
            //Checks if ID represents a header
            if(id_counter == meeting_id && prev == NULL)
            {
                //Linked rest of meeting with head
                if(meetings[schedule_index][counter] > 1)
                {
                    prev = temp;
                    temp = temp->next;

                    prev->next = temp->next;
                    deallocateMeeting(temp, counter, schedule_index);
                    temp = NULL;
                    return;
                } else
                {
                    deallocateMeeting(temp->next, counter, schedule_index);
                    temp->next = NULL;
                    return;
                }
            }
            else if(id_counter == meeting_id)
            {
                prev = temp;
                temp = temp->next;

                prev->next = temp->next;
                deallocateMeeting(temp, (counter - 1), schedule_index);
                temp->next = NULL;
                return;
            }

            id_counter++;
            prev = temp;
            temp = temp->next;
        }
        sorted_session = sorted_session->Child;
    }
}

/*
 * Launching point for CRUD operating on a schedule
 */
void schedule_CRUD(struct token * sorted_session, int current_schedule)
{
    clearScreen();
    int total_m = 0;
    const char choices[4] = {'1', '2', '3', '4'};
    char userChoice;
    size_t size = sizeof(choices)/sizeof(choices[0]);
    createSessionTable(sorted_session);

    //Gets total number of meetings in a session
    for (int i = 0; i < 7; ++i)
        total_m += meetings[current_schedule][i];

    printf("\nSchedule Editor\n");
    printf("1. Edit a Meeting\n2. Create New Meeting\n3. Delete Meeting\n4. Go Back\n\n");
    userChoice = selector(choices, size);

    switch(userChoice)
    {
        case '1':
            editMeeting(sorted_session, total_m);
            break;
        case '2':
            createMeeting(sorted_session);
            break;
        case '3':
            removeMeeting(sorted_session, total_m);
            break;
        case '4':
            return;
        default:
            exit(22);
    }
}

/*
 * Repeats a certain day to the other specified days
 * Takes a copy and allocates new space, then assigns each to the day
 */
void repeater(struct token * sorted_session)
{
    clearScreen();
    if(checkNull(sorted_session))
    {
        printf("%sNo meetings.\n", KRED);
        sleep(1);
        return;
    }

    createSessionTable(sorted_session);

    int arrRe[WEEK_DAYS], userReChoice_i, counter = 0;
    char userReChoice_c;
    const char day_choices[WEEK_DAYS] = {'1', '2', '3', '4', '5', '6', '0'};
    size_t size = sizeof(day_choices)/sizeof(day_choices[0]);
    struct token * day_to_repeat = NULL;

    printf("\nEnter the day you would like to repeat.\n"
           "Monday (1) Tuesday (2) Wednesday (3) Thursday (4) "
           "Friday (5) Saturday (6) Sunday (0)\n");

    userReChoice_c = selector(day_choices, size);
    INT_TO_CHAR(userReChoice_i, userReChoice_c);

    //Find day to repeat
    struct token * iter_re = sorted_session;
    for (int i = 0; i < userReChoice_i; i++)
    {
        day_to_repeat = iter_re;
        iter_re = iter_re->Child;
    }

    if(day_to_repeat->next == NULL)
    {
        printf("%sCannot repeat empty day.\n", KRED);
        sleep(1);
        return;
    }

    //Set all values to false
    for (int i = 0; i < WEEK_DAYS + 1; ++i) arrRe[i] = 0;
    printf("\n");

    while (counter++ != WEEK_DAYS)
    {
        char userRepeat;
        printf("Would you like to repeat the selected day on %s\n", getStrWeek_D(counter));
        printf("Press any key if yes, return if no: ");
        fflush(stdin);
        fgets(&userRepeat, MAX_SELECT, stdin);

        if(userRepeat != '\n')
            arrRe[counter] += 1;
    }

    counter = 0;
    while(counter++ != WEEK_DAYS)
    {
        if(arrRe[counter] == 1)
            push_meetings(sorted_session, day_to_repeat);
        sorted_session = sorted_session->Child;
    }
}

/*
 * Allows for the user to manually launch a URL from a saved schedule
 * Only other way to launch is to wait for the launch time of the meeting
 */
void manuelURLLauncher(struct token * sorted_session, int current_schedule)
{
    clearScreen();
    createSessionTable(sorted_session);

    int total_m = 0;

    //Gets total number of meetings in a session
    for (int i = 0; i < 7; ++i)
        total_m += meetings[current_schedule][i];

    //Find meeting to launch
    struct token * meetingToOpen = find_meeting(sorted_session, total_m);
    open_meeting(meetingToOpen, 1);
}

/*
 * Saves meeting to head to scheduleList array (in current index)
 * Then creates a run process
 */

void saveAndRun(struct token * sorted_session)
{
    scheduleList[schedule_index++] = sorted_session;
    total_schedules++;

    if(backend_process != 0)
        killBackendProcess();

    createBackendProcess(sorted_session, isSound);
}

/*
 * Saves meeting to head to scheduleList array (in current index)
 * Then exits to the main menu
 */
void saveAndExit(struct token * sorted_session)
{
    scheduleList[schedule_index++] = sorted_session;
    total_schedules++;
}

/*
 * Adds ALL meeting for an entire day
 */
struct token * addMeetings(int week_t)
{
    clearScreen();
    fflush(stdin);
    struct token * head = NULL;
    char meeting_name[MAX_NAME_SIZE], url[MAX_URL_SIZE];
    int start_time_h, start_time_m, end_time_h, end_time_m;
    int total_meetings = 1;

    //Data getter block
    do
    {
        printf("Press return to move to next day\n");
        printf("Enter the meeting name\n");
        printPrompt(week_t, total_meetings);
        fgets(meeting_name, MAX_URL_SIZE, stdin);
        fflush(stdin);

        // If user enters a return value function returns
        if(!strcmp(meeting_name, "\n"))
        {
            sortDay(head);
            meetings[schedule_index][POS++] = total_meetings - 1;
            return head;
        }

        //Removes new line char
        meeting_name[strcspn(meeting_name, "\n")] = 0;

        printf("Enter the meeting URL.\n");
        printPrompt(week_t, total_meetings);
        fgets(url, MAX_URL_SIZE, stdin);
        fflush(stdin);

        printf("Enter meeting start time (24h)\n");
        printf("Hour: ");
        start_time_h = getTime(HOUR);

        printf("Min: ");
        start_time_m = getTime(MINUTES);

        printf("Enter meeting end time (24h)\n");
        printf("Hour: ");
        end_time_h = getTime(HOUR);

        printf("Min: ");
        end_time_m = getTime(MINUTES);

        struct token * new_node = allocateMeeting(meeting_name, url, start_time_h, start_time_m,
                end_time_h, end_time_m, week_t);

        //Connects to list
        new_node->next = head;
        head = new_node;

    }
    while(total_meetings++ != MAX_MEETINGS);

    sortDay(head);
    meetings[schedule_index][POS++] = total_meetings - 1;
    return head;
}

/*
 * Displays actions for ones a schedule has been finished being error checked
 */
void summeryActions(struct token * session_head)
{
    clearScreen();
    char choiceArr[5] = {'1', '2', '3', '4', '5'}, userChoice;
    size_t size = sizeof(choiceArr)/sizeof(choiceArr[0]);

    errorHandler(session_head);

    clearScreen();
    while(1)
    {
        createSessionTable(session_head);
        printf("\nSummery\n");
        printf("1. Edit Schedule\n2. Repeater\n3. Save & Run \n4. Save & Exit\n5. Return to Main Menu\n\n");
        userChoice = selector(choiceArr, size);

        // Once choice has been verified, checks input against options
        switch (userChoice)
        {
            case '1':   //Edit schedule
                schedule_CRUD(session_head, schedule_index);
                continue;
            case '2':   //Repeat a day
                repeater(session_head);
                break;
            case '3':   //Save and run
                saveAndRun(session_head);
                return;
            case '4':   //Save an exit
                saveAndExit(session_head);
                return;
            case '5':   //Back to main menu
                deallocateFullSchedule(session_head, schedule_index, &total_schedules);
                return;
            default:
                exit(77);
        }
    }
}

/*
 * Displays all errors found in the eArr array
 * Creating a table with the meeting id, name day of meeting
 * and the error that was flagged.
 */
void displayErrors(struct token * eArr[], error eCodes[], int total_errors)
{
    int counter = 0, errIndex = 0;

    printf("                                   %sErrors Found%s\n", KRED, KNRM);
    printf("+-----------------------------------------------------------------------------------+\n");
    printf("| Meeting ID          Name              Day                      Error              |\n");
    printf("+-----------------------------------------------------------------------------------+");

    while(counter++ != total_errors)
    {
        printf("\n%s%5i%23s%17s", KRED, counter, eArr[errIndex]->name, getStrWeek_D(eArr[errIndex]->meeting_start_time.tm_wday));
        printf("%10s%18s\n", KRED, getErrorStr(eCodes[errIndex++]));
    }
    printf("%s+-----------------------------------------------------------------------------------+\n", KNRM);
    printf("\nError(s) have been flagged in your schedule.\n\n");

}

/*
 * Takes a sorted schedule and checks for known error within the list
 * If any error are present asks user to resolve error or return to main menu
 * If user returns to main menu all data is deallocated
 */
int errorHandler(struct token * sorted_session)
{
    bool hasError = 0;
    //Loops until no errors are found or user quits to MM
    while(1)
    {
        int errorIndex = 0;
        struct token * errorArr[500];
        error errorCodes[500];

        for(int r = 0; r < WEEK_DAYS; r++)
        {
            struct token * temp = sorted_session;

            //If the day is NULL skip skips NULL meeting includes
            if(meetings[schedule_index][r] == 0)
            {
                sorted_session = sorted_session->Child;
                continue;
            }

            //Loops through each meeting
            for(int z = 0; z < meetings[schedule_index][r] + 1; z++)
            {
                if(temp->next != NULL)
                    temp = temp->next;
                else
                    continue;

                int s_sec = HOUR_TO_SEC(temp->meeting_start_time.tm_hour) + MIN_TO_SEC(temp->meeting_start_time.tm_min);
                int e_sec = HOUR_TO_SEC(temp->meeting_end_time.tm_hour) + MIN_TO_SEC(temp->meeting_end_time.tm_min);

                //Checks to make sure meeting dose not end before start
                if(s_sec == e_sec)
                {
                    errorArr[errorIndex] = temp;
                    errorCodes[errorIndex++] = equal_start_end_times;
                    hasError = 1;
                }

                if(s_sec > e_sec)
                {
                    errorArr[errorIndex] = temp;
                    errorCodes[errorIndex++] = start_before_end;
                    hasError = 1;
                }

                if(temp->next != NULL)
                {
                    int s_sec_next = HOUR_TO_SEC(temp->next->meeting_start_time.tm_hour) + MIN_TO_SEC(temp->next->meeting_start_time.tm_min);
                    int e_sec_next = HOUR_TO_SEC(temp->next->meeting_end_time.tm_hour) + MIN_TO_SEC(temp->next->meeting_end_time.tm_min);

                    //Checks if one meeting end time is less than the previous one
                    if(e_sec > e_sec_next || e_sec > s_sec_next)
                    {
                        errorArr[errorIndex] = temp->next;
                        errorCodes[errorIndex++] = meeting_overlap;
                        hasError = 1;
                    }
                    //Checks if two meeting start at the same time
                    else if(s_sec == s_sec_next)
                    {
                        errorArr[errorIndex] = temp->next;
                        errorCodes[errorIndex++] = equal_meetings;
                        hasError = 1;
                    }
                }
            }
            sorted_session = sorted_session->Child;
        }

        //If errors are found, user can edit or return to main menu
        //Once new values are inputted errorHandler recalls to recheck the session
        if(hasError)
        {
            clearScreen();
            char userChoice;
            const char options[2] = {'1', '2'};
            size_t size = sizeof(options)/sizeof(options[0]);

            displayErrors(errorArr, errorCodes, errorIndex);
            printf("1. Edit errors\n");
            printf("2. Leave to main menu\n");
            printf("\n");
            userChoice = selector(options, size);

            //Editor
            if(userChoice == '1')
            {
                printf("Reenter data for flagged meeting(s).\n");
                for(int i = 0; i < errorIndex; i++)
                {
                    printf("Enter meeting start time (24h) (%s)\n", errorArr[i]->name);
                    printf("Hour: ");
                    errorArr[i]->meeting_start_time.tm_hour = getTime(HOUR);

                    printf("Min: ");
                    errorArr[i]->meeting_start_time.tm_min = getTime(MINUTES);

                    printf("Enter meeting end time (24h) (%s)\n", errorArr[i]->name);
                    printf("Hour: ");
                    errorArr[i]->meeting_end_time.tm_hour = getTime(HOUR);

                    printf("Min: ");
                    errorArr[i]->meeting_end_time.tm_min = getTime(MINUTES);
                }

                //Loops again to recheck new meetings
                hasError = 0;
                continue;
            }

            //Return to main menu
            else
            {
                const char leaveArr[4] = {'y', 'Y', 'n', 'N'};
                char choice;
                size_t size_la = sizeof(leaveArr)/sizeof(leaveArr[0]);

                clearScreen();
                printf("Are you sure you want to exit, all data will be lost. (y/n)\n");
                choice = selector(leaveArr, size_la);

                switch(choice)
                {
                    case  'y':
                        deallocateFullSchedule(sorted_session, schedule_index, &total_schedules);
                        createMainMenu();
                        break;
                    case 'Y':
                        deallocateFullSchedule(sorted_session, schedule_index, &total_schedules);
                        createMainMenu();
                        break;
                    case 'n':
                        errorHandler(sorted_session);
                        break;
                    case 'N':
                        errorHandler(sorted_session);
                        break;
                    default:
                        exit(88);

                }
            }
        } break;    //If not errors are found breaks and returns bool
    } return hasError;
}

/*
 * Creates a new schedule from scratch
 * Each day is allocated individually and linked to the day of the week
 * Each schedule has a name that is assigned to each day header
 */
void createNewSchedule(void)
{
    clearScreen();
    if(total_schedules > MAX_SCHEDULES)
    {
        printf("You have reached the maximum amount of schedules."
               "\nTo free up space consider removing saved schedules.\n");
        return;
    }

    fflush(stdin);

    char session_name[MAX_NAME_SIZE];
    int counter = 0;

    printf("+-----------------------------------------------------------------------------+\n");
    printf("|                                 New Schedule                                |\n"
           "|                 Press q anytime to quit to the main menu                    |\n");
    printf("+-----------------------------------------------------------------------------+\n\n");

    printf("Enter a name for your new schedule: ");
    fgets(session_name, MAX_SCHEDULE_NAME_SIZE, stdin);
    REMOVE_NEW_LINE(session_name);
    fflush(stdin);

    //Holds the circular linked list generated by function
    struct token * session_head = allocate_session(session_name);

    while(counter++ != WEEK_DAYS)
    {
        session_head->next = addMeetings(session_head->meeting_start_time.tm_wday);
        session_head = session_head->Child;
    }
    errorHandler(session_head);
    //Summery table + flagged errors

    //If no meeting have been entered return to main menu
    summeryActions(session_head);
}

/*-------------------------------NEW SCHEDULE FUNCTIONS-------------------------------*/

/*
 * First prompt displays all saved schedules if none are saved, displayed non
 * Once a schedule has been selected a user can either edit, remove or add a meeting,
 * delete a schedule, run the schedule, manually launch a meeting url, or return to MM
 */
void viewSchedule(void)
{
    clearScreen();
    int numOfOps = 5;
    char userChoice;
    const char choices[5] = {'1', '2', '3', '4', '5'};

    printf("+-------------List of Saved Schedules-------------+\n");
    if(scheduleList[0] == NULL)
    {
        printf("%s                No saved schedules %s\n", KRED, KNRM);
        printf("\nPress return to exit.");
        do
        {
            fgets(&userChoice, MAX_SELECT, stdin);
        }
        while(userChoice != '\n');
        return;
    }
    int id = -1;
    while(total_schedules != ++id)
        printf("%i. %s\n", (id + 1), scheduleList[id]->Child->name);

    //Compile schedule ids
    int mapped_ids[MAX_SCHEDULES], selected_id;
    for (int i = 0; i < (id + 1); ++i)
        mapped_ids[i] = i;

    //Find schedule id
    printf("\nTo select a schedule, enter it's id.\n\n");
    selected_id = i_checker(mapped_ids, (id + 1));

    while(1)
    {
        clearScreen();
        printf("+-------------Schedule-------------+\n");
        printf("\n1. Edit Schedule\n2. Run Schedule\n3. Delete Schedule\n4. Manuel URL Launcher\n5. Return Home\n\n");
        userChoice = selector(choices, numOfOps);

        switch(userChoice)
        {
            case '1':   //Edit Schedule
                schedule_CRUD(scheduleList[(selected_id - 1)], (selected_id - 1));
                break;
            case '2':   //Run schedule
                //Checks weather a process is already running
                if(backend_process != 0)
                {
                    printf("\n%sA schedule is already running%s\n", KRED, KNRM);
                    pressToExit();
                    return;
                }
                createBackendProcess(scheduleList[(selected_id - 1)], isSound);
                return;
            case '3':   //Remove schedule
                deallocateFullSchedule(scheduleList[(selected_id - 1)], (selected_id - 1), &total_schedules);
                scheduleList[(selected_id - 1)] = NULL;
                savedMover(scheduleList, total_schedules);
                return;
            case '4':   //Manuel URL launcher
                manuelURLLauncher(scheduleList[(selected_id - 1)], (selected_id - 1));
                break;
            case '5':
                return;
            default:
                exit(11);
        }
    }
}

/*
 * Displays a how to write up on using ZOOMer and its functions
 */
void displayHelpPrompt(void)
{
    FILE * help_file;
    char filePath[NAME_MAXLEN] = "../system/help_dialog.txt";
    char s, in;

    if(!(help_file = fopen(filePath, "r")))
    {
        printf("Can't open this for reading\n");
        fclose(help_file);
        exit(59);
    }

    while((s = fgetc(help_file)) != EOF)
        printf("%c", s);

    /* A very weird SIGABT occures when the function pressToExit() is implemented */
    fflush(stdin);
    printf("To return to the main menu press return.\n");
    fgets(&in, MAX_SELECT, stdin);
    if(in == '\n')
        return;

    fclose(help_file);
}

/*
 * Displays meeting information (if running)
 * If running user can kill the backend from here
 */
void displayStats(void)
{
    clearScreen();
    printf("Status: %s\n", (backend_process != 0) ? "Running" : "Not Running");
    printf("-----------------------------\n");

    if(backend_process != 0)
    {
        const char choices[2] = {'1', '2'};
        char userChoice;
        size_t size = sizeof(choices)/sizeof(choices[0]);
        printf("1. Kill Running Meeting\n2. Return to Main Menu\n\n");

        userChoice = selector(choices, size);

        switch(userChoice)
        {
            case '1':
                killBackendProcess();
                break;
            case '2':
                return;
            default:
                exit(67);
        }
    }
    else
        pressToExit();
}

/*
 * Get a custom user sound (start and stop)
 */
void getSound(void)
{
    char soundToggler;
    printf("Press return to toggle sound alerts.\n");
    fflush(stdin);
    fgets(&soundToggler, MAX_SELECT, stdin);

    if(soundToggler == '\n')
    {
        isSound = !isSound;
        return;
    } else
        return;
}

/*
 * Gets the users choice from the main menu
 */
void getMainMenuChoice(void)
{
    while(1)
    {
        clearScreen();
        fflush(stdin);
        const char choices[6] = {'1', '2', '3', '4', '5', 'q'};
        char MMUserChoice;
        size_t size = sizeof(choices)/sizeof(choices[0]);


        graphicsLoader(ZOOMER_TILE_ICON);

        printf("%s+------------------------------------------------------------------------------+\n", KNRM);
        printf("|                                  Main Menu                                   |\n");
        printf("+------------------------------------------------------------------------------+\n");
        printf("1. Create New Schedule\n2. View Saved Schedules\n3. Stats\n4. Sound (%s)\n"
               "5. Help\nPress q at any time to quit\n\n", ((isSound) ? "ON" : "OFF"));

        MMUserChoice = selector(choices, size);

        switch (MMUserChoice)
        {
            case '1':
                createNewSchedule();
                break;
            case '2':
                viewSchedule();
                break;
            case '3':
                displayStats();
                break;
            case '4':
                getSound();
                break;
            case '5':
                displayHelpPrompt();
                break;
            case 'q':
                printf("%sQuitting...\n%s", KRED, KNRM);
                if(backend_process != 0)
                    killBackendProcess();
                return;
            default:
                exit(99);
        }
    }
}

/*
 * Loads the main menu/title graphics
 */
void createMainMenu(void)
{
    getMainMenuChoice();
    exit(0);
}


