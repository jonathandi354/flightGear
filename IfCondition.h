//
// Created by jonathan on 23/12/18.
//

#ifndef PROJECT_IFCONDITION_H
#define PROJECT_IFCONDITION_H

#include "ConditionParser.h"

class IfCondition : public ConditionParser {
public:

    IfCondition(map<string, Command *> &commands, DataControl *data) : ConditionParser(commands, data) {

    }

    virtual int execute(int index) {
        auto it = data->getArr().begin();
        int j = index;
        for (int i = 0; i < index; i++) {
            ++it;
        }
        it++;
        double condition = data->calculate(*(it));
        //double condition = 1;
        it++;
        j += 2;
        int count = 0;
        int t;
        Command *c;
        int start = j;
        while (condition) {

            c = NULL;
            if (*it == "{") {
                count++;
            }
            if (commands.count(*it) == 1) {
                t = j;
                j = commands[*it]->execute(j);

                for (; t < j; t++) {
                    it++;
                }
            } else {
                if (*it == "}") {
                    count--;
                }
                j++;
                it++;
            }

            if (count == 0) {
                break;
            }


        }
        return j;

    }

};

#endif //PROJECT_IFCONDITION_H
