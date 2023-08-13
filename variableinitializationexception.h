// Author: Melissa Froh
// Date: 07/09/2023
// Project: Project 2 Skeleton

// This file contains the definition for the exception class which handles the initialization errors from the
// input file. The exception is passed an error message describing the error when thrown.

#ifndef VARIABLE_INITIALIZATION_EXCEPTION_H
#define VARIABLE_INITIALIZATION_EXCEPTION_H

#include <stdexcept>
#include <string>
using namespace std;

// Custom exception class for reporting uninitialized and multiple initialization errors
class variableinitializationexception : public std::exception {
private:
    char *message;

public:
    variableinitializationexception(char *msg) : message(msg) {}

    char *what() {
        return message;
    }
};
#endif // VARIABLE_INITIALIZATION_EXCEPTION_H
