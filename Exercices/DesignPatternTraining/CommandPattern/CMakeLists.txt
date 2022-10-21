cmake_minimum_required(VERSION 3.19)
project(CommandPattern)

set(CMAKE_CXX_STANDARD 14)

add_executable(CommandPattern
        main.cpp
        Basic/CommandBasic.h
        Basic/JumpCommand.cpp
        Basic/JumpCommand.h
        Basic/Inputhandler.cpp
        Basic/Inputhandler.h
        Advanced/CommandAdvanced.h
        Advanced/InputhandlerAdvanced.h
        Advanced/InputhandlerAdvanced.cpp
        Advanced/JumpCommandAdvanced.cpp
        Advanced/JumpCommandAdvanced.h
        )
