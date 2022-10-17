//
// Created by User on 17/10/2022.
//

#ifndef CPP_LEARNING_JUMPCOMMANDADVANCED_H
#define CPP_LEARNING_JUMPCOMMANDADVANCED_H

#include "CommandAdvanced.h"

class JumpCommandAdvanced : public CommandAdvanced {

    void Execute(Actor* actor) override;
    void Undo() override;
};


#endif //CPP_LEARNING_JUMPCOMMANDADVANCED_H
