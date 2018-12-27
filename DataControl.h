//
// Created by jonat on 12/16/2018.
//

#ifndef PROJECT_DATACONTROL_H
#define PROJECT_DATACONTROL_H

#include <vector>
#include <string>
#include <map>
#include "Command.h"
#include <algorithm>
#include "CalcExpression.h"
using namespace std;
class DataControl {
    vector<string> arr;
    map<string, double > symbols;
    map<int, float> values;
    map<string, string> binded;
    map<string, int>places;
    CalcExpression* calc;


public:
    DataControl(vector<string> arr, CalcExpression* calc) {
        this->arr = arr;
        this->calc = calc;
        setMap();
    }
    vector<string>& getArr() {
        return arr;
    }
    map<string, double >& getSymbol() {
        return symbols;
    }
    map<int, float>& getValues() {
        return values;
    }
    map<string, string>& getBinded() {
        return binded;
    }
    map<string, int>& getPlaces() {
        return places;
    }
    double calculate(string str);
    double getValueOfVar(string var);
    void setMap();
    ~DataControl() {
        delete calc;
    }

};
#endif //PROJECT_DATACONTROL_H
