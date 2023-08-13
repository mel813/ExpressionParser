// Author: Melissa Froh
// Date: 07/09/2023
// Project: Project 2 Skeleton

// This file contains the class definition of the SubExpression class, which is a subclass of Expression.
// Because it does not implement the abstract function evaluate, it is an abstract class. SubExpression
// objects are represented with the left and right subexpressions. The body of its constructor and the
// static (class) function parse are defined in subexpression.cpp. It contains an overloaded constructor to handle
// the different types of expressions such as binary, tertiary and quaternary.

class SubExpression: public Expression {
public:
    SubExpression(Expression* left, Expression* right);
    SubExpression(Expression* left, Expression* right, Expression* middle);
    SubExpression(Expression* left, Expression* right, Expression* middle, Expression* last);
    static Expression* parse(stringstream& in);

public:
    Expression* left;
    Expression* right;
    Expression* middle;
    Expression* last;
};