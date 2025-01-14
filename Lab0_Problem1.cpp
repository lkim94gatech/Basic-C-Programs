#include <iostream>

/*
Author: Leandro Alan Kim
Class: ECE4122
Last Date Modified: 6 Sep 2024
Description: Lab0-Problem1
This problem uses the insertion stream operator and
escape sequences that outputs given strings.
*/

/**
Outputs given string and /n is used for the escape sequence to 
start a new line.
*/
int main()
{
    std::cout << "My name is: Leandro Kim\n";
    std::cout << "This (\") is a double quote.\n";
    std::cout << "This (\') is a single quote.\n";
    std::cout << "This (\\) is a backslash.\n";
    std::cout << "This (/) is a forward slash.\n";
}