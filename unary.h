// Author: Melissa Froh
// Date: 07/09/2023
// Project: Project 2 Skeleton

// This file contains the class definition of the Negation class, which is a subclass of SubExpression,
// which in turn is a subclass of the Expression. Because both of its functions are one line functions,
// they are implemented as inline functions. Its constructor initializes the left and right subexpressions
// it inherits from SubExpression by calling the constructor of the SubExpression class. Because
// it is an indirect subclass of Expression it must implement the evaluate function, which it does
// by returning the result of the negation of the expression.

class Negation: public SubExpression {
public:
    Negation(Expression* left): SubExpression(left, 0) {
    }
    double evaluate()  {
        return (- left->evaluate());
    }
};
