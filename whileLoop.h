//
// Created by jonathan on 22/12/18.
//

#ifndef PROJECT_WHILELOOP_H
#define PROJECT_WHILELOOP_H

#include "ConditionParser.h"
class WhileLoop : public ConditionParser {
public:

    WhileLoop(map<string, Command*>& commands, DataControl* data) : ConditionParser(commands, data){

    }
    WhileLoop(DataControl* data) : ConditionParser(data) {

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
        j+=2;
        int count = 0;
        int t;
        Command* c;
        int start = j;
        int result;
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
                it -= (j - start);
                result = j;
                j = start;
                //condition = 0;
                condition = data->calculate(*(it));
            }



        }
        return result;

    }
};
#endif //PROJECT_WHILELOOP_H
