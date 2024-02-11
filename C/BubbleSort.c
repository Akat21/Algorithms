#include<stdio.h>

void swap(int* a, int* b){
    /*
        Swaps the values of two integers by reference
    */

    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int *arr, size_t length){
    /*
        Sorts an array of integers using the bubble sort algorithm
    */
   
    int swapped;

    do{
        swapped = 0;
        for(size_t i = 1; i < length; i++){
            if(arr[i-1] > arr[i]){
                swap(&arr[i-1], &arr[i]);
                swapped = 1;
            }
        }
    } while (swapped);

}