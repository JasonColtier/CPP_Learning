//
// Created by User on 17/10/2022.
//

//comment découpler des inputs de leur implémentation ?

#include <iostream>
#include "Basic/Inputhandler.h"
#include "Advanced/InputhandlerAdvanced.h"
#include "Advanced/Actor.h"
#include "Advanced/CommandAdvanced.h"//si on avait un player controller ce serait lui qui aurait cet include

using namespace std;

int main(){

    cout<<"begin commandPattern "<<endl;
    cout<<"Press ZQSD inputs to test"<<endl;

    //le système simple d'input
    Inputhandler* inputhandler = new Inputhandler();

    //advanced
    InputhandlerAdvanced* inputhandlerAdvanced = new InputhandlerAdvanced();
    Actor* actor = new Actor;

    char inputPressed;
    while (cin>> inputPressed){
        inputhandler->HandleInputs(inputPressed);

        //advanced
        CommandAdvanced* cmd = inputhandlerAdvanced->HandleInputs(inputPressed);
        cmd->Execute(actor);
    }



}