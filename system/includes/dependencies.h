//
// Created by Tobey Ragain (CommanderQuazar) on 1/13/2021.
// Copyright (c) 2021 Argon Galactic, Inc.
// All Rights Reserved
//

/* system Version 3 */
/* File stores all includes files for master program */

#ifndef ZOOMER_INCLUDES_H
#define ZOOMER_INCLUDES_H

//DEPENDENCIES//
#include <time.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

#if defined(__linux__) || defined(__unix__) || defined(__APPLE__)
    #include <sys/types.h>
    #include <dirent.h>
#endif

#if defined(_WIN32) || defined(_WIN64)
    #include <windows.h>
    #include <tlhelp32.h>
#endif

#include <stdlib.h>
#include <signal.h>
#include <stdbool.h>

struct tm * currentTimeAndDate;


#endif //ZOOMER_INCLUDES_H

