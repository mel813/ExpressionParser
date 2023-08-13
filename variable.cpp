// Author: Melissa Froh
// Date: 07/09/2023
// Project: Project 2 Skeleton

// This file contains the body of the function contained in The Variable class. The evaluate function 
// looks up te value of a variable in the symbol table and returns that value.

#include <string>
#include <vector>
using namespace std;

#include "expression.h"
#include "operand.h"
#include "variable.h"
#include "symboltable.h"
extern SymbolTable symbolTable;

double Variable::evaluate() {
    return symbolTable.lookUp(name);
}