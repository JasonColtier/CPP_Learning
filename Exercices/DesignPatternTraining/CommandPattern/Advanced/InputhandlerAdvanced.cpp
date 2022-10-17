//
// Created by User on 17/10/2022.
//

#include "InputhandlerAdvanced.h"
#include "JumpCommandAdvanced.h"

CommandAdvanced* InputhandlerAdvanced::HandleInputs(char input) {
    cout<<"handeling input "<<input<<endl;

    if(input == 'z'){
        commands.push_front(zButtonBinding);
        return commands.front();
    }

    if(input == 's'){
        Undo();
    }
}

InputhandlerAdvanced::InputhandlerAdvanced() {
    zButtonBinding = new JumpCommandAdvanced();
}

void InputhandlerAdvanced::Undo() {
    auto cmd = commands.front();
    cmd->Undo();
}


