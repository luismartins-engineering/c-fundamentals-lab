# 002 — Array Statistics

## Objective

Develop a C program that reads a fixed number of integer values, stores them in an array, and performs several statistical operations over the collected data.

The purpose of this exercise is to reinforce:

- arrays;
- array indexing;
- `for` loops;
- conditional statements;
- accumulation;
- minimum and maximum value detection;
- input validation;
- integer and floating-point arithmetic.

---

## Requirements

The program must read exactly **10 integer values** from the user.

All values must be stored in an array before the statistical analysis begins.

After all values have been successfully read, the program must calculate and display:

- minimum value;
- maximum value;
- sum of all values;
- arithmetic average;
- number of positive values;
- number of negative values;
- number of zero values.

The program must:

- use an array with capacity for exactly 10 integers;
- use loops to traverse the array;
- validate every integer entered by the user;
- correctly handle negative values and zero;
- avoid global variables;
- display the average using decimal notation;
- perform the statistical analysis after the input phase.

---

## Expected Behaviour

A valid execution may look like:

```text
Array Statistics

Enter value 1: 10
Enter value 2: -4
Enter value 3: 7
Enter value 4: 0
Enter value 5: 12
Enter value 6: -8
Enter value 7: 3
Enter value 8: 5
Enter value 9: 0
Enter value 10: -2

Minimum: -8
Maximum: 12
Sum: 23
Average: 2.30
Positive values: 5
Negative values: 3
Zeros: 2