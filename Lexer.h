//
// Created by Naama on 22/12/2018.
//

#ifndef UNTITLED2_LEXER_H
#define UNTITLED2_LEXER_H
#include <iostream>
#include <string>
#include <vector>
#include "Number.h"
#include <list>
#include "Div.h"
#include "Plus.h"
#include "Minus.h"
#include "Mul.h"
#include "CalcExpression.h"
#include <fstream>
#include <vector>
using namespace std;

class Lexer {
    string file_name;
    CalcExpression calc;
public:
    Lexer(string file_name) {
        this->file_name = file_name;
        this->calc = CalcExpression();
    }
    vector<string> lex();



private:
    vector<string> splitbyspace(string s);

    string removeSpaces(string s);
    string changeComma(string& s);





};



#endif //UNTITLED2_LEXER_H
