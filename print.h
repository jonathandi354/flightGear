//
// Created by jonathan on 22/12/18.
//

#ifndef PROJECT_PRINT_H
#define PROJECT_PRINT_H

#include <iostream>
#include "Command.h"
#include "DataControl.h"
class print : public Command {
    DataControl* data;
public:
    print (DataControl* data) {
        this->data = data;
    }

    int execute(int index) {
        auto it = data->getArr().begin();

        for (int i = 0; i < index; i++) {
            ++it;
        }

        cout << data->calculate(*(it + 1)) << endl;
        return index + 1;
    }
};
#endif //PROJECT_PRINT_H
