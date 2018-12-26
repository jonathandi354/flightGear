//
// Created by Naama on 20/12/2018.
//

#ifndef UNTITLED2_EXPRESSION_H
#define UNTITLED2_EXPRESSION_H


class Expression {
public:
    virtual double calculate() = 0;

};

class UnaryExpression : public Expression {
protected:
    double ex;
public:
    // expression with one parameter
    UnaryExpression(double ex) {
        this->ex = ex;
    }
    // expression with 2 parameters
    virtual double calculate() {
    }
};


#endif //UNTITLED2_EXPRESSION_H
