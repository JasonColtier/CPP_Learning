//
// Created by User on 17/10/2022.
//

#ifndef CPP_LEARNING_COMMANDBASIC_H
#define CPP_LEARNING_COMMANDBASIC_H

#include <iostream>
using namespace std;

class CommandBasic {

public:
    ~CommandBasic() = default;
    virtual void Execute() = 0;
};


#endif //CPP_LEARNING_COMMANDBASIC_H
