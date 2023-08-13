// Author: Melissa Froh
// Date: 07/09/2023
// Project: Project 2 Skeleton

// This file contains the body of the function parseName. That function consumes all alphanumeric 
// characters until the next whitespace and returns the name that those characters form. It also checks if the first
// character of a variable is an underscore.

#include <cctype>
#include <sstream>
#include <string>

using namespace std;

#include "parse.h"

string parseName(stringstream& in) {
    char alnum;
    string name = "";

    in >> ws;
    if(in.peek() == '_'){
        throw std::string("Error: First character is underscore");
    }
    while (isalnum(in.peek()) || (in.peek() == '_')) {
        in >> alnum;
        name += alnum;
    }
    return name;
}
