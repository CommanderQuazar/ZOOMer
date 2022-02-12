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