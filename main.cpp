/*
Write a program that performs as a very simple calculator. Your calculator
should be able to handle the four basic math operations — add, subtract,
multiply, and divide — on two input values. Your program should prompt
the user to enter three arguments: two double values and a character to
represent an operation. If the entry arguments are 35.6, 24.1, and '+', the
program output should be The sum of 35.6 and 24.1 is 59.7. In Chapter 6
we look at a much more sophisticated simple calculator.

Modify the “mini calculator” from exercise 5 to accept (just) single-digit
numbers written as either digits or spelled out.
*/
#include "header.h"
int main() {
    string n1, n2, op;
    cout << "Enter two numbers (single digit, number or word) and then a character (+, -, *, or /) for operation: ";
    getline(cin, n1, ' ');
    getline(cin, n2, ' ');
    getline(cin, op);
    cout << calculate(n1, n2, op);
    return 0;
}