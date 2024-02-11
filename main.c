#include "C/BubbleSort.c"

//Test functions declarations
void bubbleSortTest();


int main(char* args[], int argc, char* envp[]){
    bubbleSortTest();
    
    return 0;
}



//Test functions implementations
void bubbleSortTest(){
    int arr[] = {5, 3, 2, 1, 4};

    
    bubbleSort(arr, sizeof(arr)/sizeof(arr[0]));  

    for(size_t i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
        printf("%d ", arr[i]);
    }
}