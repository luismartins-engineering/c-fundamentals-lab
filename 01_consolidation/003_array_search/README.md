# 003 — Array Element Search & Analysis

## Objective

Develop a C program that reads 10 integer values, stores them in an array, and allows the user to search for a specific value.

The program must determine whether the value exists in the array, how many times it occurs, and the positions where it was found.

This exercise reinforces:

- arrays;
- array indexing;
- `for` loops;
- conditional statements;
- input validation;
- sequential searching;
- counters;
- tracking element positions.

---

## Requirements

The program must:

1. Read exactly 10 integer values from the user.
2. Validate every input value.
3. Store all values in an integer array.
4. Ask the user for an integer to search for.
5. Validate the search value.
6. Traverse the array looking for the requested value.
7. Determine whether the value exists.
8. Count the total number of occurrences.
9. Display every array position where the value was found.

Array positions must use the standard C zero-based indexing system.

For example:

```text
Index:  0  1  2  3  4
Value: 10 20 30 20 50