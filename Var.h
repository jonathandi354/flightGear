//
// Created by jonat on 12/15/2018.
//

#ifndef PROJECT_VAR_H
#define PROJECT_VAR_H

#include <map>
#include "Command.h"
#include "DataControl.h"
class Var : public Command {
    DataControl* data;
public:
    Var(DataControl* data) {
        this->data = data;
    }
    virtual int execute(int index) {
        auto it = data->getArr().begin();
        for (int i = 0; i < index; i++) {
            it++;
        }
        data->getSymbol().insert(pair<string, double> (*(++it), NULL));
        return index + 1;
    }


};
#endif //PROJECT_VAR_H
