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
  /* Statistics and Printing Functions Go Here */

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

}

