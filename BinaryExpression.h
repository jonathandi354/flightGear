//
// Created by Naama on 20/12/2018.
//

#ifndef UNTITLED2_BINARYEXPRESSION_H
#define UNTITLED2_BINARYEXPRESSION_H


#include "Expression.h"

class BinaryExpression : public Expression {
protected:
    Expression* left;
    Expression* right;
public:
    BinaryExpression(Expression* ex1, Expression* ex2) {
        this->left = ex1;
        this->right = ex2;
    }
    virtual double calculate() {

    }


};


#endif //UNTITLED2_BINARYEXPRESSION_H
