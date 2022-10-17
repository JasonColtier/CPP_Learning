//
// Created by User on 17/10/2022.
//

#ifndef CPP_LEARNING_INPUTHANDLERADVANCED_H
#define CPP_LEARNING_INPUTHANDLERADVANCED_H

#include <iostream>
#include "deque"
using namespace std;

class CommandAdvanced;

class InputhandlerAdvanced {

public:

    InputhandlerAdvanced();

    CommandAdvanced* HandleInputs(char input);

private:
    CommandAdvanced* zButtonBinding;

    deque<CommandAdvanced*> commands;

    void Undo();
};


#endif //CPP_LEARNING_INPUTHANDLERADVANCED_H
