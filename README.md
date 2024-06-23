# Statistical Analysis in C

David Montoto  
06/23/2024

## Project Overview

This project involves writing a simple C program that performs statistical analysis on an array of integers. The primary goal is to construct algorithms that efficiently find statistics for an array of unordered values and print these statistics to the command line.

## Objectives

1. Write a C program that calculates and prints statistics to the command line using a variety of C programming operators and features.
2. Compile the program with GCC and execute the output files from the command line.
3. Use Git for version control to create a repository and manage the code changes.

## Features

The program includes the following functionalities:
- **Print Array**: Displays the elements of the array.
- **Find Minimum**: Computes and returns the minimum value in the array.
- **Find Maximum**: Computes and returns the maximum value in the array.
- **Find Mean**: Computes and returns the mean (average) value of the array.
- **Find Median**: Computes and returns the median value of the array.
- **Sort Array**: Sorts the array in descending order.
- **Print Statistics**: Prints the minimum, maximum, mean, and median of the array.

## File Descriptions

- `stats.h`: Header file containing function prototypes and descriptions.
- `stats.c`: Implementation file containing the function definitions and the `main` function.

## Compilation and Execution

To compile the program, use the GCC compiler:

```sh
gcc -o stats stats.c
