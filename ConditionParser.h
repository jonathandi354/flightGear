//
// Created by jonathan on 22/12/18.
//

#ifndef PROJECT_CONDITIONPARSER_H
#define PROJECT_CONDITIONPARSER_H

#include "DataControl.h"
#include "Command.h"
class ConditionParser : public Command {
protected:
    map<string, Command*> commands;
    DataControl* data;
public:
    ConditionParser(map<string, Command*>& commands, DataControl* data) {
        this->commands = commands;
        this->data = data;
    }
    ConditionParser( DataControl* data) {

        this->data = data;
    }
    void setCommands(map<string, Command*>& commands) {
        this->commands = commands;
    }

    virtual int execute(int index) {
        return 0;
    }

};
#endif //PROJECT_CONDITIONPARSER_H
