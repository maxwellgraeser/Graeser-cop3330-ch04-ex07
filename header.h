/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Maxwell Graeser
 */

#include <iostream>
#include <string>
using namespace std;

string calculate(string number1, string number2, string operand) {
    // declarations
    double hold1, hold2, result;
    string res;
    string wordArr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    string numArr[10] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};

    // get number version
    for (int i = 0; i < 10; i ++) {
        if (number1 == wordArr[i] || number1 == numArr[i]) hold1 = 1.0 * i;
        if (number2 == wordArr[i] || number2 == numArr[i]) hold2 = 1.0 * i;
    }

    // operands
    if (operand == "+") {
        result = hold1 + hold2;
        res = to_string(result);
        return "The sum of " + number1 + " and " + number2 + " is " + res;
    }
    if (operand == "-") {
        result = hold1 - hold2;
        res = to_string(result);
        return "The difference of " + number1 + " and " + number2 + " is " + res;
    }
    if (operand == "*") {
        result = hold1 * hold2;
        res = to_string(result);
        return "The product of " + number1 + " and " + number2 + " is " + res;
    }
    if (operand == "/") {
        result = hold1 / hold2;
        res = to_string(result);
        return "The quotient of " + number1 + " and " + number2 + " is " + res;
    }
    else
        return "You didn't enter a valid operand";
}