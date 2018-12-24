//
// Created by jonat on 12/13/2018.
//

#ifndef PROJECT_PARSER_H
#define PROJECT_PARSER_H

#include <map>
#include <string>
#include <list>
#include "Command.h"
#include "Var.h"
#include <vector>
#include "OpenDataServer.h"
#include "Connect.h"
#include "print.h"
#include "sleepComm.h"
#include "whileLoop.h"
#include "Assign.h"
#include "IfCondition.h"
#include "Exit.h"
using namespace std;
class Parser {
public:
    map<string, Command* > commands;
    vector<string> arr_of_commands;
    DataControl* data;
public:
    Parser(vector<string> arr);
    void run();

};
#endif //PROJECT_PARSER_H
