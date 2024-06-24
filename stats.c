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
 * @file stats.c
 * @brief Implementation of statistical analysis functions on an array. 
 *
 * This file contains the implementation of various statistical functions for 
 * an array of integers. Functions include finding the minimum, maximum, mean, 
 * and median values, sorting through the array 
 * using Quicksort Algorithm implementation
 *
 * @author David Montoto
 * @date 06/23/2024
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */

}

void print_statistic(int arr[], int length) {
  //call all functions then print values 
}

void print_array(int arr[], int length) {
  for (int i = 0; i < length; i++) {
    printf(arr[i]);
  }
}

double find_median(int arr[], int length) {
  if (length == 0) {
    return 0.0;
  }
  int sum = 0;
  for (int i = 0; i < length; i++) {
    sum += arr[i];
  }
  double median = sum / length;
  return median;
}

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

int MedianOfThree(int arr[], int low, int high) {
  int mid = low + (high - low) / 2;
  if (arr[low] > arr[mid]) {
    swap(&arr[low], &arr[mid]);
  } if (arr[low] > arr[high]) {
    swap(&arr[low], &arr[high]);
  } if (arr[mid] > arr[high]) {
    swap(&arr[mid], arr[high]);
  }
  return mid;
}

int partition(int arr[], int low, int high) {
  int pivotIndex = medianOfThree(arr, low, high);
  int pivot = arr[pivotIndex];
  swap(&arr[pivotIndex], &arr[high]); // simply moves pivot to end of array

  int i = low - 1;
  for (int j = low; j < high; ++j) {
    if (arr[j] <= pivot) {
      ++i;
      swap(&arr[i], &arr[j]);
    }
  }
  swap(&arr[i + 1], &arr[high]); // Move pivot into correct place
  return i + 1;
}

void quicksort(int arr[], int low, int high) {
  if (low < high) {
    int pivotIndex = partition(arr, low, high);
    quicksort(arr, low, pivotIndex - 1);
    quicksort(arr, pivotIndex + 1, high);
  }
}

double find_mean(int arr[], int length) {
  if (length == 0) {
    return 0.0;
  }
}
