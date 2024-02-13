#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>

//Functions
void swap(int *a, int *b);

//Sorts
void bubbleSort(int *arr, size_t length);
void selectionSort(int *arr, size_t length);
void quickSort(int *arr, size_t low, size_t high);

//Test
void bubbleSortTest();
void selectionSortTest();
void quickSortTest();


#endif