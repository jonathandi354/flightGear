//
// Created by jonat on 12/14/2018.
//

#include "Lexer.h"

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

vector<string> Lexer::lex() {
    ifstream file;
    file.open(file_name);
    string line;
    vector<string> after_lex;
    while (getline(file, line)) {
        for (string s: splitbyspace(line)) {
            after_lex.push_back(s);
        }
    }
    return after_lex;

}