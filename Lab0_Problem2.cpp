#include <iostream>
using namespace std;

/**
Author: Leandro Alan Kim
Class: ECE4122
Last Date Modified: 6 Sep 2024
Description: Lab0-Problem2
This problem requires for a console program
that continuously takes in a natural number
from the console and outputs the sum of all 
prime numbers
*/

/**
 * @param num takes in the number given from console
 * @return returns true if the input number is prime
 * This class is desinged to figure out if the input is prime or not
 */
int primeFinder(int num)
{
    //since 0 and 1 is not a prime number
    if (num < 2)
    {
        return false;
    }
    
    // we are iterating all the number below the inputed number to see
    // if it is prime or not by doing modulo.
    // only need to find up to i^2 because any factor larger will be divisible
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

/**
 * @param this takes in the number from the input
 * @return returns the sum of all prime numbers
 * This class is designed to sum up all prime numbers below the 
 * given input. Each iteration, it will send it to primeFinder 
 * to see if it is a prime, and if it is, it will add it into sum. 
 */
int sumPrime(int nums)
{
    int sum = 0;
    //iterates all number greater than 2 but less than nums
    for (int i = 2; i <= nums; i++)
    {
        //sends it to helper method to see if the num is prime
        if (primeFinder(i)) {
            sum += i;
        }
    }
    return sum;
}


/**
 * @param input this takis in a string from the console
 * @return returns true when the input is a digit and if input
 * is not empty
 * This class is to check if the user correctly inputed a natural number.
 */
bool inputCheck(string input)
{
    // this loop will check each character of the string to see if it is a number
    for (int i = 0; i < input.size(); i++)
    {
        // if it is not a number we return false
        if (!isdigit(input[i]))
        {
            return false;
        }
    }
    // we return true if it is a number and it is not empty
    return !input.empty();
}

/**
 * This class will continuously ask the user for a natural number.
 * It will utilize all the helper methods to see if the input is valid or not.
 * It terminates once the user inputs a 0
 */
int main()
{
    string input;

    // the while loop will make it so that it constantly asks for a natural number
    while (1)
    {
        cout << "Please enter a natural number (0 to quit): ";
        cin >> input;

        // uses helper method to see if the input is valid or not
        if (!inputCheck(input))
        {
            cout << "Error! Invalid input!\n";
            continue;
        }

        //converts the string back to an int
        int num = stoi(input);

        // if 0 is inputed we terminate
        if (num == 0)
        {
            cout << "Program Terminated.\n";
            cout << "Have a nice day!\n";
            break;
        }

        int sum = sumPrime(num);
        cout << "The sum of the primes is " << sum << endl;
    }
    return 0;
}