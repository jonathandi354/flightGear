//
// Created by Naama on 24/12/2018.
//

#include <list>
#include <stack>
#include <map>
#include "CalcExpression.h"
#include "Number.h"
#include "Plus.h"
#include "Mul.h"
#include "Minus.h"
#include "Div.h"
#include "Smaller.h"
#include "Bigger.h"
#include "SmallEqual.h"
#include "BigEqual.h"
#include "Equal.h"
#include "NotEqual.h"

bool CalcExpression::isInteger(char &c) {
    return (c >= '0') && (c <= '9');
}

string CalcExpression::Algo(string input) {
    map<string, int> m;
    m["=="] = -1;
    m["!="] = -1;
    m["<"] = 0;
    m[">"] = 0;
    m["<="] = 0;
    m[">="] = 0;
    m["+"] = 1;
    m["-"] = 1;
    m["*"] = 2;
    m["/"] = 2;
    //m["("] = 0;
    //m[")"] = 0;
    list<string> queue;
    string op;
    //list<char> stack;
    stack<string> s;
    //auto itS = stack.end();
    int i = 0;
    string num = "";
    string temp;
    while (input[i] != '\0') {
        if (isInteger(input[i])) {
            num += input[i];
            if (input[i + 1] == '\0' || !isInteger(input[i + 1])) {
                num += "e";

                queue.push_back(num);
                num = "";
            }
        } else {
            if (input[i] == '(') {
                temp = "";
                temp += input[i];

                s.push(temp);

            } else {
                if (input[i] == ')') {
                    while (s.top() != "(") {
                        op += s.top();

                        queue.push_back(op);
                        s.pop();
                        op = "";

                    }
                    s.pop();

                } else {
                    while (!s.empty() && m[s.top()] >= m[string(1,input[i])]) {
                        op += s.top();

                        queue.push_back(op);
                        s.pop();
                        op = "";

                    }
                    temp = "";
                    temp += input[i];
                    if (!isInteger(input[i+1]) && input[i+1] != '(' && input[i+1] != '(') {
                        temp+=input[i+1];
                        i++;
                    }
                    s.push(temp);

                }
            }

        }
        i++;
    }

    while (!s.empty()) {
        op += s.top();
        queue.push_back(op);
        s.pop();
        op = "";

    }

    auto itQ = queue.end();
    itQ--;
    string result = "";
    for (int j = 0; j < queue.size(); j++) {
        result += *(itQ);
        itQ--;
    }
    return result;
}

string CalcExpression::fromPostfix(string &s) {
    vector<string> str = fromStringToVec(s);
    Expression* e = fromPostfixToDouble(str);
    double val = e->calculate();
    return to_string(val);
}

Expression *CalcExpression::fromPostfixToDouble(vector<string> &s) {
    Expression* result;
    string temp = s.back();
    s.pop_back();
    if (isInteger(temp[0])) {
        return new Number(stod(temp));
    }
    Expression* right = fromPostfixToDouble(s);
    Expression* left = fromPostfixToDouble(s);
    if (temp == "+") {
        result = new Plus(left, right);
    } else if (temp == "-") {
        result = new Minus(left, right);
    } else if (temp == "*") {
        result = new Mul(left, right);
    } else if (temp == "/") {
        result = new Div(left, right);
    } else if (temp == "<") {
        result = new Smaller(left, right);
    } else if (temp == ">") {
        result = new Bigger(left, right);
    } else if (temp == "<=") {
        result = new SmallEqual(left, right);
    } else if (temp == ">=") {
        result = new BigEqual(left, right);
    } else if (temp == "==") {
        result = new Equal(left, right);
    } else if (temp == "!=") {
        result = new NotEqual(left, right);
    }

    return result;
}

vector<string> CalcExpression::fromStringToVec(string &s) {
    vector<string> exp;
    for (int i =0; i <s.length();){
        if(this->isInteger(s[i])){
            string temp = "";
            for (;i <s.length(); i++){
                if (s[i] == 'e'){
                    i++;
                    break;
                }
                temp += s[i];
            }
            exp.push_back(temp);
        } else {
            string temp = "";
            temp += s[i];
            if (s[i+1] == '=') {
                i++;
                temp += s[i];
            }
            exp.push_back(temp);
            i++;
        }
    }
    vector<string> result;
    while (not exp.empty()){
        result.push_back(exp.back());
        exp.pop_back();
    }
    return result;
}

string CalcExpression::changeUnari(string &s) {
    if (s.find('-') != string::npos) {
        int i = 0;
        while (i < s.length()) {
            if (s[i] == '-') {
                if ( i == 0 ||!isInteger(s[i-1])) {
                    s.insert(i, "0");
                }
            }
            i++;
        }
    }
    return s;
}

bool CalcExpression::containesLetter(string s) {
    for(int i = 0; i < s.length(); i++) {
        if ((s[i] >= 'A' && s[i] < 'Z') || (s[i] >= 'a' && s[i] < 'z') ) {
            return true;
        }
    }
    return false;
}

vector<string> CalcExpression::calcExpression(vector<string> v) {
    vector<string> afterCalc;
    int j = 0;
    string tempChar;
    string temp;

    for(vector<string>::const_iterator i = v.begin(); i != v.end(); ++i) {
        j++;
        temp = *i;
        if (!containesLetter(temp)) {
            if (temp.find('+') != string::npos || temp.find('-') != string::npos ||
                temp.find('*') != string::npos || temp.find('/') != string::npos ||
                temp.find('<') != string::npos || temp.find('>') != string::npos ||
                temp.find("<=") != string::npos || temp.find(">=") != string::npos
                || temp.find("==") != string::npos || temp.find("!=") != string::npos) {
                temp = changeUnari(temp);
                temp = Algo(temp);
                temp = fromPostfix(temp);
            }
        }
        afterCalc.push_back(temp);
    }
    return afterCalc;

}
