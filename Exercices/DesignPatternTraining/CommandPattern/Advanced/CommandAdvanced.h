//
// Created by User on 17/10/2022.
//

#ifndef CPP_LEARNING_COMMANDADVANCED_H
#define CPP_LEARNING_COMMANDADVANCED_H

#include <iostream>
#include "Actor.h"
using namespace std;

class CommandAdvanced {

public:
    ~CommandAdvanced() = default;
    virtual void Execute(Actor*) = 0;
    virtual void Undo() = 0;

protected:
    Actor* actorRef;
};



#endif //CPP_LEARNING_COMMANDADVANCED_H
