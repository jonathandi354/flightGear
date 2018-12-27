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
    // an expression with 2 parameters
    BinaryExpression(Expression* ex1, Expression* ex2) {
        this->left = ex1;
        this->right = ex2;
    }
    // The function that calculates the expression
    virtual double calculate() {

    }
    virtual ~BinaryExpression() {
        delete this->left;
        delete this->right;

    }


};


#endif //UNTITLED2_BINARYEXPRESSION_H
