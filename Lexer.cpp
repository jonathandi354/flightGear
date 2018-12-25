//
// Created by Naama on 22/12/2018.
//


#include <map>
#include <stack>
#include "Lexer.h"
#include "KindsOfExpression.h"


vector<string> Lexer::splitbyspace(string s) {
    string temp = "";
    vector<string> array;
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





///////////////////////////////////// about -x
string Lexer::removeSpaces(string s) {
    string spaces;
    char temp;
    for(std::string::iterator it = s.begin(); it != s.end(); ++it) {
        temp = *it;
        if (*it == '+' || *it == '*' || *it == '/'
            || *it == '!' || *it == '<' || *it == '>') {
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
        } else if (*it == '=') {
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


vector<string> Lexer::lex() {
    ifstream file;
    file.open(file_name);

    string line;
    string temp;
    vector<string> after_lex;
    while (getline(file, line)) {
        temp = removeSpaces(line);
        cout << temp << endl;
        for (string s: splitbyspace(temp)) {
            after_lex.push_back(s);
        }
    }
    after_lex = this->calc.calcExpression(after_lex);
    return after_lex;

}





