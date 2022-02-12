//
// Created by Tobey Ragain (CommanderQuazar) on 6/11/21.
// Copyright (c) 2021 Argon Galactic, Inc.
// All Rights Reserved
//

#ifndef ZOOMER_OSX_THREAD_OPS_H
#define ZOOMER_OSX_THREAD_OPS_H

#include "../includes/token.h"
#include "../includes/dependencies.h"

pid_t backend_process;

void createBackendProcess(struct token * sorted_session, int isSound);
void killBackendProcess();

#endif //ZOOMER_OSX_THREAD_OPS_H
