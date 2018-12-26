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
    UnaryExpression(double ex) {
        this->ex = ex;
    }
    virtual double calculate() {
    }
};


#endif //UNTITLED2_EXPRESSION_H
