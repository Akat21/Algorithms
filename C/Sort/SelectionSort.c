#include "Sort.h"   

void selectionSort(int *arr, size_t length){
    /*
        Sorts an array of integers using the selection sort algorithm
    */
    
    size_t minIndex;

    for(size_t i = 0; i < length-1; i++){
        
        minIndex = i;
        
        //Find the index of the minimum value in the unsorted part of the array
        for(size_t j = i + 1; j < length; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }

        //Swap the minimum value with the first element of the unsorted part of the array
        if(minIndex != i){
            swap(&arr[i], &arr[minIndex]);
        }
    }
}

void selectionSortTest(){
    /*
        Test the selectionSort function
    */

    //Create an array
    int arr[] = {5, 3, 2, 1, 4};

    //Sort the array
    selectionSort(arr, sizeof(arr)/sizeof(arr[0]));  

    //Print the sorted array
    for(size_t i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
        printf("%d ", arr[i]);
    }
}
