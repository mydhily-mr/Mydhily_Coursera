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
 * @brief Header file for statistics-related functions
 *
 * This file contains declarations of functions used to analyze an array of data.
 * The functions provide utilities to find the median, mean, minimum, and maximum
 * of the data, as well as to sort and print the data.
 *
 * @author Mydhily M R
 * @date 12/01/2025
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Function Declarations */ 

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
void print_statistics(unsigned char *array, unsigned int size);

/**
 * @brief Prints the elements of an array.
 * 
 * Prints the elements of an array 
 *
 * @param array The array of data to print.
 * @param size The size of the array.
 * 
 */
void print_array(unsigned char *array, unsigned int size);


/**
 * @brief median of the array.
 *
 * Finds and returns the median of the array.
 * 
 * @param array The array of data.
 * @param size The size of the array.
 * @return The median value of the array.
 */
unsigned char find_median(unsigned char *array, unsigned int size);

/**
 * @brief Finds the mean of the array.
 * 
 * Finds and returns the mean of the array.
 *
 * @param array The array of data.
 * @param size The size of the array.
 * @return The mean value of the array.
 */
unsigned char find_mean(unsigned char *array, unsigned int size);

/**
 * @brief Finds the maximum value in the array.
 * 
 * Finds and returns the maximum value in the array.
 *
 * @param array The array of data.
 * @param size The size of the array.
 * @return The maximum value in the array.
 */
unsigned char find_maximum(unsigned char *array, unsigned int size);

/**
 * @brief Finds the minimum value in the array.
 * 
 * Finds and returns the minimum value in the array.
 *
 * @param array The array of data.
 * @param size The size of the array.
 * @return The minimum value in the array.
 */
unsigned char find_minimum(unsigned char *array, unsigned int size);

/**
 * @brief Sorts the array .
 * 
 * Sorts the array from largest to smallest.
 *
 * @param array The array of data to sort.
 * @param size The size of the array.
 * @return void
 */
void sort_array(unsigned char *array, unsigned int size);






#endif /* __STATS_H__ */
