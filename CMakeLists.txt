cmake_minimum_required(VERSION 3.17.5)
project(ZOOMer C)

set(CMAKE_C_STANDARD 11)

include_directories(system/includes)
include_directories(system/lib)
include_directories(system/src)
include_directories(system/icons)


set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} …")


add_executable(
        ZOOMer
        system/includes/dependencies.h
        system/includes/errors.h
        system/includes/runtime-functionality.h
        system/lib/background-runtime.c
        system/lib/command-line-interface.c
        system/lib/utilities/runtime-functionality.c
        system/lib/utilities/time-date.c
        system/src/cli_init.c
        system/lib/utilities/cli-lib.c
        system/includes/cli.h
        system/includes/token.h
        system/lib/utilities/process-ops/process-ops.c
        system/includes/process-ops.h
        system/lib/utilities/mem-get.c
        system/includes/mem-get.h)