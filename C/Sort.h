#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b);
void bubbleSort(int *arr, size_t length);
void selectionSort(int *arr, size_t length);

void bubbleSortTest();
void selectionSortTest();


#endif