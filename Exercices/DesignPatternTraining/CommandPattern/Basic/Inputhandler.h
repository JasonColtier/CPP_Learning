//
// Created by User on 17/10/2022.
//

#ifndef CPP_LEARNING_INPUTHANDLER_H
#define CPP_LEARNING_INPUTHANDLER_H

#include <iostream>
using namespace std;

class CommandBasic;

class Inputhandler {

public:

    Inputhandler();

    void HandleInputs(char input);

private:
    CommandBasic* zButtonBinding;
    CommandBasic* qButtonBinding;
    CommandBasic* sButtonBinding;
    CommandBasic* dButtonBinding;
};


#endif //CPP_LEARNING_INPUTHANDLER_H
