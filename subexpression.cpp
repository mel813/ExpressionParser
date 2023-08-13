// Author: Melissa Froh
// Date: 07/09/2023
// Project: Project 2 Skeleton

// This file contains the body of the functions contained in The SubExpression class, which includes
// the constructors that initialize the parts of the subexpressions and the static function parse
// parses the subexpression. The expressions include unary, binary, tertiary, and quaternary expression.

#include <iostream>
#include <sstream>
using namespace std;

#include "expression.h"
#include "subexpression.h"
#include "operand.h"
#include "plus.h"
#include "minus.h"
#include "multiply.h"
#include "division.h"
#include "remainder.h"
#include "exponentiation.h"
#include "minimum.h"
#include "maximum.h"
#include "average.h"
#include "unary.h"
#include "ternary.h"
#include "quaternary.h"

SubExpression::SubExpression(Expression* left, Expression* right) {
    this->left = left;
    this->right = right;

}

SubExpression::SubExpression(Expression* left, Expression* right, Expression *last) {
    this->left = left;
    this->right = right;
    this->last = last;

}

SubExpression::SubExpression(Expression* left, Expression* right, Expression *middle, Expression *last) {
    this->left = left;
    this->right = right;
    this->middle = middle;
    this->last = last;

}

Expression* SubExpression::parse(stringstream& in) {
    Expression *left;
    Expression *right;
    Expression *middle;
    Expression *last;
    char operation, paren;

    left = Operand::parse(in);
    in >> operation;

    right = Operand::parse(in);

    if (operation == '?') {
        last = Operand::parse(in);
        in >> paren;
        return new Ternary(left, right, last);
    } else if (operation == '#') {
        middle = Operand::parse(in);
        last = Operand::parse(in);
        in >> paren;
        return new Quaternary(left,right, middle, last);

    }

    in >> paren;
    switch (operation) {
        case '+':
            return new Plus(left, right);
        case '-':
            return new Minus(left, right);
        case '*':
            return new Multiply(left, right);
        case '/':
            return new Divide(left, right);
        case '%':
            return new Remainder(left, right);
        case '^':
            return new Exponentiation(left, right);
        case '<':
            return new Minimum(left, right);
        case '>':
            return new Maximum(left, right);
        case '&':
            return new Average(left, right);
        case '~':
            return new Negation(left);

    }
    return 0;
}