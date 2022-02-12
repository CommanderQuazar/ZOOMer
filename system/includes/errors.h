//
// Created by Tobey Ragain (CommanderQuazar) on 1/9/21.
// Copyright (c) 2021 Argon Galactic, Inc.
// All Rights Reserved
//

/* system Version 3 */
/* Holds possible error states */

#ifndef ZOOMER_SESSION_ERRORS_H
#define ZOOMER_SESSION_ERRORS_H

/* Enum of possible system and Session error */
/* Used to determine CLI user messages */
typedef enum {
    no_errors_found,
    start_before_end,
    equal_start_end_times,
    equal_meetings,
    meeting_overlap
} error;


#endif //ZOOMER_SESSION_ERRORS_H