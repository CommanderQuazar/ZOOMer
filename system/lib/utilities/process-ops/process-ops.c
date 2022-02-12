//
// Created by Tobey Ragain (CommanderQuazar) on 6/11/21.
// Copyright (c) 2021 Argon Galactic, Inc.
// All Rights Reserved
//

/* system Version 3 */

#include "../includes/process-ops.h"
#include "../includes/runtime-functionality.h"

/*
 * Creates a process for the backend to run on
 */
void createBackendProcess(struct token * sorted_session, int isSound)
{
    backend_process = fork();

    if(backend_process == 0)
        program_runtime(sorted_session, isSound);
    else
        return;
}

/*
 * Kills the backend runtime function
 * as well as the parent cli process
 */
void killBackendProcess()
{
    kill(backend_process, SIGINT);
    kill(getppid(), SIGINT);
    backend_process = 0;
}