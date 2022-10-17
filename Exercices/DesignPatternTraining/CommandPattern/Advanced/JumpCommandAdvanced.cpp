//
// Created by User on 17/10/2022.
//

#include "JumpCommandAdvanced.h"


void JumpCommandAdvanced::Execute(Actor *actor) {
    actorRef = actor;
    actor->Jump();
}

void JumpCommandAdvanced::Undo() {
    if (actorRef)
        actorRef->Crouch();
}
