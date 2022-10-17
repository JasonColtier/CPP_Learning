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
    //un binding sur la touche Z
    CommandAdvanced* zButtonBinding;

    //on garde les commandes en mémoire pour pouvoir les annuler !
    deque<CommandAdvanced*> commands;

    //annule la dernière commande
    void Undo();
};


#endif //CPP_LEARNING_INPUTHANDLERADVANCED_H
