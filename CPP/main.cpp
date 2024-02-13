#include "BinaryTree/BinaryTree.h"

#include <iostream>


//Main
int main(int argc, char* argv[]){
    //Disable synchronization between C and C++ standard streams in order to be able to print to the console using printf and std::cout
    std::ios_base::sync_with_stdio(false);
    printf("Hello World\n");
    testBST();

    return 0;
}