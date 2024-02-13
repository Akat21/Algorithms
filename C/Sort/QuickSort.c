#include "Sort.h"

size_t partition(int *arr, size_t low, size_t high){
    /*
        Partitions an array of integers then sorts it using the quick sort algorithm
    */

    //Set the pivot to the first element and the store index to the second element
    int pivot = low;
    size_t store_index = low + 1;

    //Iterate through the array and swap elements less than the pivot with the store index element and increment the store index
    for(size_t i = low; i < high; i++){
        if(arr[i] < arr[pivot]){
            swap(&arr[i], &arr[store_index]);
            store_index++;
        }
    }

    //Swap the pivot with the element at the store index - 1
    swap(&arr[store_index - 1], &arr[pivot]);

    //Return the store index - 1
    return store_index - 1;
}

void quickSort(int *arr, size_t low, size_t high){
    /*
        Recursively sorts the array using the quick sort algorithm
    */

    if (low < high){
        //Partition the array
        size_t partition_index = partition(arr, low, high);

        //Recursively sort the left and right parts of the array
        quickSort(arr, low, partition_index);
        quickSort(arr, partition_index + 1, high);

    }

}   

void quickSortTest(){
    /*
        Test the quickSort function
    */

    //Create an array
    int arr[] = {18, 35, 30, 6, 42, 34, 31, 23, 47, 32};
    
    //Get the length of the array
    size_t length = sizeof(arr) / sizeof(arr[0]);

    //Sort the array
    quickSort(arr, 0, length);

    //Print the sorted array
    for(size_t i = 0; i < length; i++){
        printf("%d ", arr[i]);
    }
}