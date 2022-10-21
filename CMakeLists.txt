cmake_minimum_required(VERSION 3.19)
project(CPP_Learning)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(Exercices/DesignPatternTraining/CommandPattern)

add_executable(CPP_Learning
        Exercices/Questions/QuestionSimples.cpp
        Exercices/Questions/AnkiPlayground.cpp
        )
