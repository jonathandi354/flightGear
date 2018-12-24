

#include "Lexer.h"
#include "Parser.h"

#include <iostream>
using namespace std;



int main() {
    Lexer* l = new Lexer("hi.txt");

    /*vector<string> arr = l->lex();
    Parser* p = new Parser(arr);
    string s = "a+5";

    p->run();
    p->data->calculate(s);*/

    string s1 = "connect";
    string s2 = "192.168.1.116";
    string s3 = "5402";
    vector<string> v;
    v.push_back(s1);
    v.push_back(s2);
    v.push_back(s3);
    DataControl* d = new DataControl(v);
    Connect* c = new Connect(d);
    c->execute(0);
    string msg = "set /controls/engines/current-engine/throttle 1";
    string msg1 = "set /controls/flight/rudder 0";
    c->send(msg.c_str());







    return 0;
}