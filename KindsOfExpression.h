//
// Created by Naama on 25/12/2018.
//

#ifndef UNTITLED2_KINDSOFEXPRESSION_H
#define UNTITLED2_KINDSOFEXPRESSION_H


class KindsOfExpression {

};


#include "BinaryExpression.h"

// expression for ">="
class BigEqual : public BinaryExpression{
public:
    BigEqual(Expression* ex1, Expression* ex2) : BinaryExpression(ex1, ex2) {

    }
    // calculate if "<="
    // returns 1 if true and 0 if false
    virtual double calculate() {
        bool temp =  left->calculate() >= right->calculate();
        if(temp) {
            return 1;
        }
        return 0;
    }
};


// expression for ">"
class Bigger : public BinaryExpression{
public:
    Bigger(Expression* ex1, Expression* ex2) : BinaryExpression(ex1, ex2) {

    }
    // calculate if <
    // returns 1 if true and 0 if false
    virtual double calculate() {
        bool temp =  left->calculate() > right->calculate();
        if(temp) {
            return 1;
        }
        return 0;
    }
};


// expression for "/"
class Div :public BinaryExpression{
public:
    Div(Expression* ex1, Expression* ex2) : BinaryExpression(ex1, ex2) {

    }
    // divides the expression
    virtual double calculate() {
        // if we try to divide by 0
        if (right->calculate() == 0) {
            throw 1;
        }
        return left->calculate() / right->calculate();
    }

};

// expression for "=="
class Equal : public BinaryExpression{
public:
    Equal(Expression* ex1, Expression* ex2) : BinaryExpression(ex1, ex2) {

    }

    // calculate if ==
    // returns 1 if true and 0 if false
    virtual double calculate() {
        bool temp =  left->calculate() == right->calculate();
        if(temp) {
            return 1;
        }
        return 0;
    }
};

// expression for "-"
class Minus : public BinaryExpression{
public:
    Minus(Expression* ex1, Expression* ex2) : BinaryExpression(ex1, ex2) {

    }
    // deduct the expressions
    virtual double calculate() {
        return left->calculate() - right->calculate();
    }

};

// expression for "*"
class Mul : public BinaryExpression{
public:
    Mul(Expression* ex1, Expression* ex2) : BinaryExpression(ex1, ex2) {

    }
    // mult the expression
    virtual double calculate() {
        return left->calculate() * right->calculate();
    }

};

// expression for "!="
class NotEqual : public BinaryExpression{
public:
    NotEqual(Expression* ex1, Expression* ex2) : BinaryExpression(ex1, ex2) {

    }

    // calculate if !=
    // returns 1 if true and 0 if false
    virtual double calculate() {
        bool temp =  left->calculate() != right->calculate();
        if(temp) {
            return 1;
        }
        return 0;
    }
};

// expression for a number
class Number : public Expression{
    double number;
public:
    Number(double num) {
        this->number = num;
    }

    double calculate() {
        return this->number;
    }

};

// expression for "+"
class Plus : public BinaryExpression{
public:
    Plus(Expression* ex1, Expression* ex2) : BinaryExpression(ex1, ex2) {

    }
    // adds the expressions
    virtual double calculate() {
        return left->calculate() + right->calculate();
    }
};


// expression for "<="
class SmallEqual : public BinaryExpression{
public:
    SmallEqual(Expression* ex1, Expression* ex2) : BinaryExpression(ex1, ex2) {

    }

    // calculate if <=
    // returns 1 if true and 0 if false
    virtual double calculate() {
        bool temp =  left->calculate() <= right->calculate();
        if(temp) {
            return 1;
        }
        return 0;
    }
};

// expression for "<"
class Smaller : public BinaryExpression{
public:
    Smaller(Expression* ex1, Expression* ex2) : BinaryExpression(ex1, ex2) {

    }
    // calculate if <
    // returns 1 if true and 0 if false
    virtual double calculate() {
        bool temp =  left->calculate() < right->calculate();
        if(temp) {
            return 1;
        }
        return 0;
    }
};


#endif //UNTITLED2_KINDSOFEXPRESSION_H
