// Author: Melissa Froh
// Date: 07/09/2023
// Project: Project 2 Skeleton

// This file contains the class definition of the Remainder class, which is a subclass of SubExpression,
// which in turn is a subclass of the Expression. Because both of its functions are one line functions,
// they are implemented as inline functions. Its constructor initializes the left and right subexpressions
// it inherits from SubExpression by calling the constructor of the SubExpression class. Because
// it is an indirect subclass of Expression it must implement the evaluate function, which it does
// by returning the remainder of the division of the values of the two subexpressions.

class Remainder: public SubExpression {
public:
    Remainder(Expression* left, Expression* right): SubExpression(left, right) {
    }
    double evaluate() {
        return (int)left->evaluate() % (int)right->evaluate();
    }
};
