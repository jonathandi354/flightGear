//
// Created by jonathan on 24/12/18.
//

#ifndef PROJECT_EXIT_H
#define PROJECT_EXIT_H

#include "Command.h"

class Exit : public Command {
public:
    int execute(int index) {
        exit(1);
    }
};
#endif //PROJECT_EXIT_H
