// Author: Melissa Froh
// Date: 07/09/2023
// Project: Project 2 Skeleton

// This file contains the class definition of the Variable class. The variable is represented by its
// name, which the constructor initializes. Because this class is a subclass of Operand which in turn is
// a subclass of Expression, it must implement the function evaluate, whose body is defined in variable.cpp.

class Variable: public Operand {
public:
    Variable(string name) {
        this->name = name;
    }
    double evaluate();
private:
    string name;
};