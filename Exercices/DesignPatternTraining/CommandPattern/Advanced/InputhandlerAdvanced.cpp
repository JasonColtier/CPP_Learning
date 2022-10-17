//
// Created by User on 17/10/2022.
//

#include "InputhandlerAdvanced.h"
#include "JumpCommandAdvanced.h"

CommandAdvanced* InputhandlerAdvanced::HandleInputs(char input) {
    cout<<"handeling advanced input "<<input<<endl;

    if(input == 'z'){
        commands.push_front(zButtonBinding);
    }

    //hard coded mais pourrait être une commande aussi !
    if(input == 's'){
        Undo();
        return nullptr;
    }

    return commands.front();

}

InputhandlerAdvanced::InputhandlerAdvanced() {
    zButtonBinding = new JumpCommandAdvanced();
}

void InputhandlerAdvanced::Undo() {
    auto cmd = commands.front();
    if(cmd)
    cmd->Undo();

    //il faudrait bouger l'index de la commande actuelle pour permettre des "redo" également
}


