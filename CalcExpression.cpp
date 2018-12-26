//
// Created by Naama on 24/12/2018.
//

#include <list>
#include <stack>
#include <map>
#include "CalcExpression.h"
#include "KindsOfExpression.h"

// The function checks if the char is a number
bool CalcExpression::isInteger(char &c) {
    return (c >= '0') && (c <= '9');
}

// The algo of shunting yard
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
        if (isInteger(input[i]) || input[i] == '.') {
            num += input[i];
            if (input[i + 1] == '\0' || !(isInteger(input[i + 1]) || input[i + 1] == '.' )) {
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

// The function gets the string as postfix and calculates the expression
string CalcExpression::fromPostfix(string &s) {
    // to get the string as a vector
    vector<string> str = fromStringToVec(s);
    // get the expression as an expression
    Expression* e = fromPostfixToDouble(str);
    // calculate the expression
    double val = e->calculate();
    // return as string
    return to_string(val);
}

//The function gets a vector and turns it into an expression
Expression *CalcExpression::fromPostfixToDouble(vector<string> &s) {
    Expression* result;
    string temp = s.back();
    s.pop_back();
    // check if the the current string is a number
    if (isInteger(temp[0])) {
        return new Number(stod(temp));
    }
    // get the correct operator and get his left and right
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

    // return the expression
    return result;
}

// The function gets a postfix clculation and returns it as a vector
vector<string> CalcExpression::fromStringToVec(string &s) {
    vector<string> exp;
    // go over the string
    for (int i =0; i <s.length();){
        // check if it is a number
        if(this->isInteger(s[i])){
            string temp = "";
            for (;i <s.length(); i++){
                // get the full number - untill the e
                if (s[i] == 'e'){
                    i++;
                    break;
                }
                temp += s[i];
            }
            exp.push_back(temp);
        } else {
            // get the operator
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
    // turn around
    while (not exp.empty()){
        result.push_back(exp.back());
        exp.pop_back();
    }
    return result;
}

// The function takes care of a minus
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

// The function checks if the expression containes a letter
bool CalcExpression::containesLetter(string s) {
    for(int i = 0; i < s.length(); i++) {
        if ((s[i] >= 'A' && s[i] < 'Z') || (s[i] >= 'a' && s[i] < 'z' )  ) {
            return true;
        }
    }
    return false;
}
// The function gets the vector of the orders and go over it
// and if there is an expression it calculates it
vector<string> CalcExpression::calcExpression(vector<string> v) {
    vector<string> afterCalc;
    int j = 0;
    string tempChar;
    string temp;

    for(vector<string>::const_iterator i = v.begin(); i != v.end(); ++i) {
        j++;
        temp = *i;
        // check if doesnt have a var i the expression and that it needs to be calculated
        if (!containesLetter(temp)) {
            if (temp.find('+') != string::npos || temp.find('-') != string::npos ||
                temp.find('*') != string::npos || temp.find('/') != string::npos ||
                temp.find('<') != string::npos || temp.find('>') != string::npos ||
                temp.find("<=") != string::npos || temp.find(">=") != string::npos
                || temp.find("==") != string::npos || temp.find("!=") != string::npos) {
                // take care of minus
                temp = changeUnari(temp);
                // get the expression as postfix
                temp = Algo(temp);
                // calculate the expression
                temp = fromPostfix(temp);
            }
        }
        afterCalc.push_back(temp);
    }
    return afterCalc;

}

