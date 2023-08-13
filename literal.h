// Author: Melissa Froh
// Date: 07/09/2023
// Project: Project 2 Skeleton

// This file contains the definition of the Literal class, whose representation consists of the value
// of the literal. Because both of its functions are one line functions, they are implemented as inline 
// functions. The constructor saves the value of the literal. Because this class is a subclass of Operand
// which in turn is a subclass of Expression, it must implement the function evaluate, which returns the
// value that corresponds to the literal.

class Literal: public Operand {
public:
    Literal(double value) {
        this->value = value;
    }
    double evaluate() {
        return value;
    }
private:
    double value;
};