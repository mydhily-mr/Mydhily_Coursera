/******************************************************************************
 * Copyright (C) 2025 by Mydhily M R
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Mydhily M R not liable for any misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c
 * @brief Implementation of statistics-related functions
 *
 * This file contains implementations of functions to analyze an array of data.
 * It provides functionalities to find the median, mean, minimum, maximum,
 * and to sort and print the data.
 *
 * @author Mydhily M R
 * @date 12/01/2025
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
  unsigned int size = 40;

  /* Statistics and Printing Functions Go Here */
  printf("Original Array:\n");
  print_array(test, size);

  print_statistics(test, size);

}

/* other Implementation Code */

/**
 * @brief Prints the statistics of an array.
 *
 * Prints the statistics of an array including minimum, maximum, mean, and median.
 *
 * @param array The array of data to analyze.
 * @param size The size of the array.
 *
 * @return void
 */
void print_statistics(unsigned char *array, unsigned int size){
    printf("\nStatistics:\n");
    printf("Minimum: %u\n", find_minimum(array, size));
    printf("Maximum: %u\n", find_maximum(array, size));
    printf("Mean: %u\n", find_mean(array, size));
    printf("Median: %u\n", find_median(array, size));
}

/**
 * @brief Prints the elements of an array.
 * 
 * Prints the elements of an array 
 *
 * @param array The array of data to print.
 * @param size The size of the array.
 * 
 */
void print_array(unsigned char *array, unsigned int size){
  for (unsigned int i = 0; i < size; i++) {
        printf("%u ", array[i]);
    }
    printf("\n");
}


/**
 * @brief median of the array.
 *
 * Finds and returns the median of the array.
 * 
 * @param array The array of data.
 * @param size The size of the array.
 * @return The median value of the array.
 */
unsigned char find_median(unsigned char *array, unsigned int size){
  unsigned char sorted_array[size];
    for (unsigned int i = 0; i < size; i++) {
        sorted_array[i] = array[i];
    }
    sort_array(sorted_array, size);
    if (size % 2 == 0) {
        return (sorted_array[size / 2 - 1] + sorted_array[size / 2]) / 2;
    } else {
        return sorted_array[size / 2];
    }
}

/**
 * @brief Finds the mean of the array.
 * 
 * Finds and returns the mean of the array.
 *
 * @param array The array of data.
 * @param size The size of the array.
 * @return The mean value of the array.
 */
unsigned char find_mean(unsigned char *array, unsigned int size){
  unsigned int sum = 0;
    for (unsigned int i = 0; i < size; i++) {
        sum += array[i];
    }
    return (unsigned char)(sum / size);
}

/**
 * @brief Finds the maximum value in the array.
 * 
 * Finds and returns the maximum value in the array.
 *
 * @param array The array of data.
 * @param size The size of the array.
 * @return The maximum value in the array.
 */
unsigned char find_maximum(unsigned char *array, unsigned int size){
  unsigned char max = array[0];
    for (unsigned int i = 1; i < size; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}

/**
 * @brief Finds the minimum value in the array.
 * 
 * Finds and returns the minimum value in the array.
 *
 * @param array The array of data.
 * @param size The size of the array.
 * @return The minimum value in the array.
 */
unsigned char find_minimum(unsigned char *array, unsigned int size){
  unsigned char min = array[0];
    for (unsigned int i = 1; i < size; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    return min;
}

/**
 * @brief Sorts the array .
 * 
 * Sorts the array from largest to smallest.
 *
 * @param array The array of data to sort.
 * @param size The size of the array.
 * @return void
 */
void sort_array(unsigned char *array, unsigned int size){
  for (unsigned int i = 0; i < size - 1; i++) {
        for (unsigned int j = 0; j < size - i - 1; j++) {
            if (array[j] < array[j + 1]) {
                unsigned char temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

