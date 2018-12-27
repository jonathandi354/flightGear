//
// Created by jonat on 12/13/2018.
//

#include "Parser.h"
#include <iostream>
Parser::Parser(vector<string> arr) {
    arr_of_commands = arr;
    CalcExpression* calc = new CalcExpression();
    DataControl* data = new DataControl(arr, calc);
    this->data = data;
    int countvar = 1;
    int countass = 1;
    int countpr = 1;
    int countsl = 1;
    int countw = 1;
    int countif = 1;
    int countex = 1;
    //create all the commands
    for (auto it = arr.begin(); it != arr.end(); it++) {

        if (*it == "var" && countvar == 1) {
            commands["var"] = new Var(data);
            countvar--;
        }
        if (*it == "openDataServer") {
            commands["openDataServer"] = new OpenDataServer(data);
        }
        if (*it == "connect") {
            commands["connect"] = new Connect(data);
        }
        if (*it == "=" && countass == 1) {
            commands["="] = new Assign(data, dynamic_cast<Connect*> (commands["connect"]));
            countass--;
        }
        if (*it == "print" && countpr == 1) {
            commands["print"] = new print(data);
            countpr--;
        }
        if (*it == "sleep" && countsl == 1) {
            commands["sleep"] = new sleepComm(data);
            countsl--;
        }
        if (*it == "while" && countw == 1) {
            commands["while"] = new WhileLoop(commands, data);
            countw--;
        }
        if (*it == "if" && countif == 1) {
            commands["if"] = new IfCondition(commands, data);
            countif--;
        }
        if (*it == "exit" && countex == 1) {
            commands["exit"] = new Exit();
            countex--;
        }


    }
    //commands["exit"] = new Exit();
    if (commands.count("while") == 1){
        dynamic_cast<ConditionParser*>(commands["while"])->setCommands(commands);
    }
    if (commands.count("if") == 1){
        dynamic_cast<ConditionParser*>(commands["if"])->setCommands(commands);
    }

}
void Parser::run() {

    auto it = arr_of_commands.begin();
    int i = 0;
    int j;
    vector<string> subV;
    Command* c;
    while (i < arr_of_commands.size() ){
        //if a string is a command - execute
        if (commands.count(*it) == 1) {
            c = commands[*it];
        } else {
            c = NULL;
        }

        j = i;
        if (c != NULL) {
            i = c->execute(i);

            for (; j < i; j++) {
                it++;
            }
        } else {
            i++;
            it++;
        }


    }
    delete data;
    for (auto it = commands.begin(); it != commands.end(); it++) {
        delete it->second;
    }
    //commands["exit"]->execute(i);
    //cout << data->getSymbol()["a"] << endl;

}
