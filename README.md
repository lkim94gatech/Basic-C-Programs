# Basic-C-Programs

This repository contains two C++ programs designed to introduce fundamental programming concepts such as input/output operations, escape sequences, loops, and validation. Each program solves a specific problem outlined below.

---

## Problem 1: Insertion Stream and Escape Sequences

### Description

The first program demonstrates the use of the insertion stream operator (`<<`) and escape sequences to display formatted text on the terminal. It outputs the following:

```bash
My name is: Leandro Kim 
This (") is a double quote. 
This (') is a single quote. 
This () is a backslash. 
This (/) is a forward slash.
```

### File
- `Lab0_Problem1.cpp`

### How to Run
1. **Compile the code**:
   ```bash
   g++ -o problem1 Lab0_Problem1.cpp
   ```
2. **Execute the Program**:
   ```bash
   ./problem1
   ```

## Problem 2: Summation of Primes
### Description
The second program continuously accepts a natural number (less than 2³²) from the user and calculates the sum of all prime numbers less than or equal to the input. The program validates the input and terminates when the user enters 0.

### Key Features
- Validates user input to ensure it is a natural number.
- Uses helper functions to:
  - Check if a number is prime.
  - Compute the sum of primes up to the given number.
- Outputs errors for invalid input.

##Sample Output
```bash
> Please enter a natural number (0 to quit): 10
> The sum of the primes is 17
> Please enter a natural number (0 to quit): 1
> The sum of the primes is 0
> Please enter a natural number (0 to quit): ABC
> Error! Invalid input!
> Please enter a natural number (0 to quit): 0
> Program Terminated.
> Have a nice day!
```
### File
- `Lab0_Problem2.cpp`

### How to Run
1. **Compile the code**:
   ```bash
   g++ -o problem2 Lab0_Problem2.cpp
   ```
2. **Execute the Program**:
   ```bash
   ./problem2
   ```

## Summary of Files

### Core Files
- **Lab0_Problem1.cpp**: Demonstrates escape sequences and formatted output.
- **Lab0_Problem2.cpp**: Calculates the sum of prime numbers for valid user input.

---

### Functions in `Lab0_Problem2.cpp`

1. **`bool primeFinder(int num)`**:
   - Checks if a number is prime.
   - Returns `true` if the number is prime, `false` otherwise.

2. **`int sumPrime(int nums)`**:
   - Calculates the sum of all prime numbers less than or equal to `nums`.

3. **`bool inputCheck(string input)`**:
   - Validates user input to ensure it consists of numeric characters only.

---

## Testing

### Problem 1: Escape Sequences
- Verify the exact text output, including escape sequences.

### Problem 2: Summation of Primes
- Verify proper output for valid inputs (e.g., `10`, `1`, `100`).
- Validate handling of invalid inputs (e.g., `ABC`, `-123`).
- Confirm program termination upon entering `0`.



