//
// Created by Tobey Ragain on 6/2/21.
// Copyright (c) 2021 Argon Galactic, Inc.
// All Rights Reserved
//

#ifndef ZOOMER_OSX_TOKEN_H
#define ZOOMER_OSX_TOKEN_H

#include "../includes/dependencies.h"

//Main node for meeting org
struct token {
    struct tm meeting_start_time;
    struct tm meeting_end_time;
    char * URL;
    char * name;
    struct token *next;
    struct token *Child;
};

#endif //ZOOMER_OSX_TOKEN_H
