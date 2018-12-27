

#include "Lexer.h"
#include "Parser.h"

#include <iostream>
using namespace std;



int main(int argc,char* argv[]) {
    //hi
    char* file_name = argv[1];
    Lexer* l = new Lexer(file_name);

    vector<string> arr = l->lex();
    Parser* p = new Parser(arr);


    p->run();









    return 0;
}