/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.h
 * @brief This file is the header file for the statistical functions on arrays.
 *
 * This header file contains the function prototypes for statistical analysis 
 * of an array, including finding the minimum, maximum, mean, and median values
 * as well as sorting the array and printing its contents. This project will 
 * utilize an implementation of Quicksort to achieve optimal runtime for 
 * functions calculating the median and sorting the array.
 *
 * @author David Montoto
 * @date 06/23/2024
 *
 */
#ifndef __STATS_H__
#define __STATS_H__


/**
 * @brief Prints the minimum, maximum, mean, and median of the array.
 *
 * This function computes and prints the statistical measures of the array by
 * calling upon helper function listed below to find minimum, maximum, mean, 
 * and median values.
 *
 * @param arr The array of integers.
 * @param length The length of the given array.
 *
 */
 void print_statistic(int arr[], int length);


/**
 * @brief Prints the array elements.
 *
 * This function iterates through the array and prints each element.
 *
 * @param arr The array of integers.
 * @param length The length of the given array.
 *
 */
void print_array(int arr[], int length);


/**
 * @brief Returns the median value from the given array. 
 *
 * This function computes the median of the array. The array is sorted into 
 * ascending order by utilizing an implementation of the Quicksort Algorithm,
 * the returns the middle element or average of the two middle elements
 *
 * @param arr The array of integers.
 * @param length The length of the given array.
 *
 * @return The median value of the array.
 */
double find_median(int arr[], int length);


/**
 * @brief Returns the mean value of the array
 *
 * This funciton computes the mean value of the array by summing elements and 
 * dividing by the number of elements, which is the given length parameter.
 *
 * @param arr The array of integers.
 * @param length The length of the given array.
 *
 * @return The mean value of the array.
 */
double find_mean(int arr[], int length);


/**
 * @brief Returns the macimum value in the array.
 *
 * This function iterates through the whole array to find 
 * and return the maximum value 
 *
 * @param arr The array of integers.
 * @param length The length of the given array.
 *
 * @return The maximum value in the array.
 */
int find_maximum(int arr[], int length);


/**
 * @brief Returns the minimum value in the array.
 *
 * This function iterates through the whole array to find 
 * and return the minimum value. 
 *
 * @param arr The array of integers.
 * @param length The length of the given array.
 *
 * @return The minimum value in the array.
 */
int find_minimum(int arr[], int length);


/**
 * @brief Sorts the array from largest to smallest.
 *
 * This function sorts the array in descending order. The zeroth element will 
 * be the largest value, and the last element will be the smallest value. 
 * Quicksort will be used in this algorithm to sort the list.
 *
 * @param arr The array of integers.
 * @param length The length of the given array.
 *
 */
void sort_array(int arr[], int length);


#endif /* __STATS_H__ */
