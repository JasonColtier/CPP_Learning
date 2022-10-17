//
// Created by User on 17/10/2022.
//

#include "Inputhandler.h"
#include "JumpCommand.h"

void Inputhandler::HandleInputs(char input) {
    cout<<"handeling input "<<input<<endl;

    if(input == 'z'){
        zButtonBinding->Execute();
    }

}

Inputhandler::Inputhandler() {
    zButtonBinding = new JumpCommand();

}


