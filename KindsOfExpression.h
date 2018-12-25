//
// Created by Naama on 25/12/2018.
//

#ifndef UNTITLED2_KINDSOFEXPRESSION_H
#define UNTITLED2_KINDSOFEXPRESSION_H


class KindsOfExpression {

};


#include "BinaryExpression.h"

class BigEqual : public BinaryExpression{
public:
    BigEqual(Expression* ex1, Expression* ex2) : BinaryExpression(ex1, ex2) {

    }
    virtual double calculate() {
        bool temp =  left->calculate() >= right->calculate();
        if(temp) {
            return 1;
        }
        return 0;
    }
};


class Bigger : public BinaryExpression{
public:
    Bigger(Expression* ex1, Expression* ex2) : BinaryExpression(ex1, ex2) {

    }
    virtual double calculate() {
        bool temp =  left->calculate() > right->calculate();
        if(temp) {
            return 1;
        }
        return 0;
    }
};



class Div :public BinaryExpression{
public:
    Div(Expression* ex1, Expression* ex2) : BinaryExpression(ex1, ex2) {

    }
    virtual double calculate() {
        if (right->calculate() == 0) {
            throw 1;
        }
        return left->calculate() / right->calculate();
    }


};

class Equal : public BinaryExpression{
public:
    Equal(Expression* ex1, Expression* ex2) : BinaryExpression(ex1, ex2) {

    }
    virtual double calculate() {
        bool temp =  left->calculate() == right->calculate();
        if(temp) {
            return 1;
        }
        return 0;
    }
};

class Minus : public BinaryExpression{
public:
    Minus(Expression* ex1, Expression* ex2) : BinaryExpression(ex1, ex2) {

    }
    virtual double calculate() {
        return left->calculate() - right->calculate();
    }

};

class Mul : public BinaryExpression{
public:
    Mul(Expression* ex1, Expression* ex2) : BinaryExpression(ex1, ex2) {

    }
    virtual double calculate() {
        return left->calculate() * right->calculate();
    }

};


class NotEqual : public BinaryExpression{
public:
    NotEqual(Expression* ex1, Expression* ex2) : BinaryExpression(ex1, ex2) {

    }
    virtual double calculate() {
        bool temp =  left->calculate() != right->calculate();
        if(temp) {
            return 1;
        }
        return 0;
    }
};

class Plus : public BinaryExpression{
public:
    Plus(Expression* ex1, Expression* ex2) : BinaryExpression(ex1, ex2) {

    }
    virtual double calculate() {
        return left->calculate() + right->calculate();
    }

};

class SmallEqual : public BinaryExpression{
public:
    SmallEqual(Expression* ex1, Expression* ex2) : BinaryExpression(ex1, ex2) {

    }
    virtual double calculate() {
        bool temp =  left->calculate() <= right->calculate();
        if(temp) {
            return 1;
        }
        return 0;
    }
};

class Smaller : public BinaryExpression{
public:
    Smaller(Expression* ex1, Expression* ex2) : BinaryExpression(ex1, ex2) {

    }
    virtual double calculate() {
        bool temp =  left->calculate() < right->calculate();
        if(temp) {
            return 1;
        }
        return 0;
    }
};


#endif //UNTITLED2_KINDSOFEXPRESSION_H
