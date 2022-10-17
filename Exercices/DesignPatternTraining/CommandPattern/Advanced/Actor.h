//
// Created by User on 17/10/2022.
//

#ifndef COMMANDPATTERN_ACTOR_H
#define COMMANDPATTERN_ACTOR_H


#include <iostream>

class Actor {

public:
    void Jump(){
        std::cout<<"Actor jump !"<<std::endl;
    }
    void Crouch(){
        std::cout<<"Actor crouch !"<<std::endl;
    }
};


#endif //COMMANDPATTERN_ACTOR_H
