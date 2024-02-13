#include "Sort.h"

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

        //Iterate through the array
        for(size_t i = 1; i < length; i++){

            //If the previous element is greater than the current element, swap them
            if(arr[i-1] > arr[i]){
                swap(&arr[i-1], &arr[i]);
                swapped = 1;
            }

        }
    } while (swapped);

}

void bubbleSortTest(){
    /*
        Test the bubbleSort function
    */

    //Create an array
    int arr[] = {5, 3, 2, 1, 4};

    //Sort the array
    bubbleSort(arr, sizeof(arr)/sizeof(arr[0]));  

    //Print the sorted array
    for(size_t i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
        printf("%d ", arr[i]);
    }
}