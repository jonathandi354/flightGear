

#include "Lexer.h"
#include "Parser.h"

#include <iostream>
using namespace std;



int main() {
    //hi
    Lexer* l = new Lexer("hi.txt");

    vector<string> arr = l->lex();
    Parser* p = new Parser(arr);


    p->run();

    /*CalcExpression* cl = new CalcExpression();
    string s1 = "connect";
    string s2 = "172.18.35.92";
    string s3 = "5402";
    vector<string> v;
    v.push_back(s1);
    v.push_back(s2);
    v.push_back(s3);
    DataControl* d = new DataControl(v, cl);
    Connect* c = new Connect(d);
    c->execute(0);
    string msg = "set /controls/engines/current-engine/throttle 1";
    string msg1 = "set /controls/flight/rudder -1";
    c->send(msg1.c_str());*/







    return 0;
}