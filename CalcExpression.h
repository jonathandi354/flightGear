//
// Created by Naama on 24/12/2018.
//

#ifndef UNTITLED2_CALCEXPRESSION_H
#define UNTITLED2_CALCEXPRESSION_H
#include <string>
#include <vector>
#include "Expression.h"

#include "KindsOfExpression.h"
using namespace std;

class CalcExpression {
    bool isInteger(char &c);
    string Algo(string input);
    string fromPostfix(string& s);
    Expression* fromPostfixToDouble(vector<string>& s);
    vector<string> fromStringToVec(string& s);
    string changeUnari(string& s);
    bool containesLetter(string s);

public:
    // The function that calculates the expression
    CalcExpression() {

    }
    vector<string> calcExpression(vector<string> v);



};


#endif //UNTITLED2_CALCEXPRESSION_H
