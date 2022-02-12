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

/*
 * Function takes a session and a weekday number and returns the day
 * associated with the day number.
 */
struct token * getDayWeek(struct token *sorted_session, int dayToGet)
{
    struct token * tempSession = sorted_session;
    //Runs until it has found the day
    while (tempSession->meeting_start_time.tm_wday != dayToGet)
        tempSession = tempSession->Child;

    return tempSession;
}

/*
 * Used to move over a certain amount of days and returns the final day
 */
struct token * getDayMover(struct token *sorted_session, int currentDay, int daysToMoveOver)
        {
    struct token * tempSession = sorted_session;
    int counter = 0;
    //Moves to find current day
    while (tempSession->meeting_start_time.tm_wday != currentDay)
        tempSession = tempSession->Child;

    //Moves n days forward
    while (counter++ != daysToMoveOver)
        tempSession = tempSession->Child;
    return tempSession;
}

int strToInt(char * str)
{
    return ((str[0]-0x30)*1000)+((str[1]-0x30)*100)+((str[2]-0x30)*10)+((str[3]-0x30));
}

/*
 * Program finds arg specified PID of a program
 * Finds processes for linux, win10 and macOS
 */
int getPidByName(char *task_name)
{
    #if defined(__linux__) || defined(__unix__) || defined(__APPLE__)
        DIR * dir;
        struct dirent * ptr;
        FILE * fp;
        char filepath[50];//The size is arbitrary, can hold the path of cmdline file
        char cur_task_name[50];//The size is arbitrary, can hold to recognize the command line text
        char buf[BUF_SIZE];
        dir = opendir("/proc"); //Open the path to the
        if (NULL != dir) {
            while ((ptr = readdir(dir)) != NULL) //Loop reads each file/folder in the path
            {
                //If it reads "." or ".." Skip, and skip the folder name if it is not read
                if ((strcmp(ptr->d_name, ".") == 0) || (strcmp(ptr->d_name, "..") == 0))
                    continue;

                if (DT_DIR != ptr->d_type)
                    continue;

                sprintf(filepath, "/proc/%s/status", ptr->d_name);//Generates the path to the file to be read
                fp = fopen(filepath, "r");//Open the file

                if (NULL != fp) {
                    if (fgets(buf, BUF_SIZE - 1, fp) == NULL)
                    {
                        fclose(fp);
                        continue;
                    }
                    sscanf(buf, "%*s %s", cur_task_name);

                    //Print the name of the path (that is, the PID of the process) if the file content meets the requirement
                    if (!strcmp(task_name, cur_task_name))
                        return strToInt(ptr->d_name);

                    fclose(fp);
                }
            } closedir(dir);//Shut down the path
        } return 0;
    #endif
}

/* Opens the browser and launches the meeting URL */
//system commands line (bash)
char * openBrowserCmd(char * meeting_url)
{
    #if defined(__linux__) || defined(__unix__) || defined(__APPLE__)
        char * open_url_cmd = "open ";    //Command//

    #endif

    #if defined(_WIN32) || defined(_WIN64)
        char * open_url_cmd = "start ";      //Command//
    #endif

    char * result = NULL;

    //Allocates memory
    char * target = malloc(strlen(open_url_cmd) + strlen(meeting_url) + 1);

    //Copies into target
    strcpy(target, open_url_cmd);
    strcat(target, meeting_url);

    result = target;
    return result;
}

/* Takes the URL and runs meetings, boots zoom if closed from previous meeting */
void open_meeting(struct token *currentMeeting, bool soundOn)
{
    #if defined(__linux__) || defined(__unix__) || defined(__APPLE__)
        if (soundOn)
            system("say launching virtual meeting");
        char *open_cmd = openBrowserCmd(currentMeeting->URL);
        system(open_cmd);
    #endif

    #if defined(_WIN32) || defined(_WIN64)
        if(soundOn)
            system("PowerShell -Command \"Add-Type –AssemblyName System.Speech; (New-Object System.Speech.Synthesis.SpeechSynthesizer).Speak('Launching Virtual Meeting');\"");

        char * open_cmd = openBrowserCmd(currentMeeting->URL);
        system(open_cmd);
    #endif
        free(open_cmd);
}

/* Kills zoom process to end meeting if the PID is found (non 0)*/
void end_meeting(bool soundOn)
{
    #if defined(__linux__) || defined(__unix__) || defined(__APPLE__)
    if (soundOn)
        system("say closing virtual meeting");

    pid_t my_pid = getPidByName("zoom.us");
    if (my_pid != 0)
        kill(my_pid, SIGKILL);
    #endif

    #if defined(_WIN32) || defined(_WIN64)
        if(soundOn)
            system("PowerShell -Command \"Add-Type –AssemblyName System.Speech; (New-Object System.Speech.Synthesis.SpeechSynthesizer).Speak('Closing Virtual Meeting');\"");

        system("taskkill /im zoom.exe");
    #endif
}
