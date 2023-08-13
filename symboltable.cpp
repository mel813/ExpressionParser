// Author: Melissa Froh
// Date: 07/09/2023
// Project: Project 2 Skeleton

// This file contains the body of the functions contained in The SymbolTable class. The insert function 
// inserts a new variable symbol and its value into the symbol table and the lookUp function returns
// that value of the supplied variable symbol name.

#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#include "symboltable.h"
#include "variableinitializationexception.h"
void SymbolTable::init() {
    if (elements.size() > 0) {
        for (int i = elements.size(); i > 0; i--) {
            elements.pop_back();
        }
    }
}
void SymbolTable::insert(string variable, double value) {
    const Symbol& symbol = Symbol(variable, value);
    auto match = std::find_if(elements.begin(), elements.end(),
                              [&variable] (const Symbol& symbol) {return symbol.variable == variable;});
    if(match != elements.end()){ //if match in symbol table found throw error, duplicate variable used
        throw variableinitializationexception("Variable was initialized multiple times in this statement");
    }
    elements.push_back(symbol);
}

double SymbolTable::lookUp(string variable) const {
    for (int i = 0; i < elements.size(); i++)
        if (elements[i].variable == variable)
             return elements[i].value;
        throw variableinitializationexception("Variable was never initialized");
}

