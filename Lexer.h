//
// Created by jonat on 12/14/2018.
//

#ifndef PROJECT_LEXER_H
#define PROJECT_LEXER_H
#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <fstream>
#include <vector>
using namespace std;

class Lexer {
    string file_name;
public:
    Lexer(string file_name) {
        this->file_name = file_name;
    }
    vector<string> lex();

private:
    vector<string> splitbyspace(string s);
};
#endif //PROJECT_LEXER_H
