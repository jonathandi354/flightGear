//
// Created by jonathan on 22/12/18.
//

#ifndef PROJECT_SLEEP_H
#define PROJECT_SLEEP_H

#include <unistd.h>
#include "Command.h"
#include "DataControl.h"

class sleepComm : public Command{
    DataControl* data;
public:
    sleepComm(DataControl* data) {
        this->data = data;
    }
    int execute(int index) {
        auto it = data->getArr().begin();

        for (int i = 0; i < index; i++) {
            ++it;
        }
        int sleepFor = stoi(*(it + 1));
        usleep(1000*sleepFor);
        return index + 1;
    }

};
#endif //PROJECT_SLEEP_H
