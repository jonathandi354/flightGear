//
// Created by Naama on 22/12/2018.
//


#include <map>
#include <stack>
#include "Lexer.h"
#include "KindsOfExpression.h"

// the function splits according to spaces the string into a vector
vector<string> Lexer::splitbyspace(string s) {
    string temp = "";
    vector<string> array;
    // to know when the char is space
    for (int i = 0; i <= s.size(); i++) {
        if ((s[i] != ' ' && i != s.size()) && (s[i] != '\t')) {
            if (s[i] != '"') {
                temp += s[i];
            }
        } else {
            if (temp != "") {
                array.push_back(temp);
                temp = "";
            }
        }
    }
    return array;
}





// the function gets a string and remove the not needed spaces
string Lexer::removeSpaces(string s) {
    string spaces;
    char temp;
    // go over the string
    for(std::string::iterator it = s.begin(); it != s.end(); ++it) {
        temp = *it;
        // check if the char is an operator
        if (*it == '+' || *it == '*' || *it == '/'
            || *it == '!' || *it == '<' || *it == '>') {
            // take of the spaces before the operator if there are
            it--;
            if (*it == ' ') {
                spaces.pop_back();
            }
            it++;
            // if the operator is 2 chars
            if (*(it + 1) == '=') {
                it++;
                temp = *it;
            }
            it++;
            // take of the spaces after the operator if there are
            if (*it != ' ') {
                it--;
            }

            // taje care of spaces before "(" and ")"
        } else if (*it == '(') {
            it++;
            if (*it != ' ') {
                it--;
            }

        } else if (*it == ')') {
            it--;
            if (*it == ' ') {
                spaces.pop_back();
            }
            it++;
            // take care of spaces before "-" sine can be also unary
        } else if (*it == '-') {
            it--;
            if (*it == ' ' && *(it -1) != '=' && *(it -1) != '(') {
                spaces.pop_back();
            }
            it++;
            it++;
            if (*it != ' ') {
                it--;
            }
            // take care of the expression == to not mix with =
        } else if (*it == '=') {
            // the expression is == and we take spaces of before and after
            if (*(it + 1) == '=') {
                it--;
                if (*it == ' ') {
                    spaces.pop_back();
                }
                it++;
                if (*(it + 1) == '=') {
                    it++;
                    temp = *it;
                }
                it++;
                if (*it != ' ') {
                    it--;
                }
            }
        }
        spaces += temp;

    }
    return spaces;
}

// The lexer of the programme
// It reads information from the file and returns a vector of the expression
vector<string> Lexer::lex() {
    // open the file
    ifstream file;
    file.open(file_name);

    string line;
    string temp;
    vector<string> after_lex;
    // go over every line of the file
    while (getline(file, line)) {
        // remove the spaces of each line
        temp = removeSpaces(line);
        for (string s: splitbyspace(temp)) {
            // get the line split by spaces and add it to the vector of all the orders
            after_lex.push_back(s);
        }
    }
    // go over all the orders and calculate the expression that need to be
    after_lex = this->calc.calcExpression(after_lex);
    return after_lex;

}





