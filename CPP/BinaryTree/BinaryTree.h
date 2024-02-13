#ifndef BINARYTREE_H
#define BINARYTREE_H

#include <iostream>

struct Node{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int data, struct Node* left = nullptr, struct Node* right = nullptr): data(data), left(left), right(right){};
};

class BST{
    private:
        struct Node* root;
        int size;

    public:
        BST();
        virtual ~BST();

        void insert(int data);
        void remove(struct Node** node);
        Node** search(int data);
        void printInOrder(struct Node* node);
        void print();
    
};

void testBST();


#endif