#include "BinaryTree.h"

BST::BST(){
    this->size = 0;
    this->root = nullptr;
}

BST::~BST(){
}

void BST::insert(int data){
    /*
        Inserts a new node into the BST
    */

    //Create new node
    struct Node* newNode = new Node(data, nullptr, nullptr);      


    //If the BST is empty, set the new node as the root, else find the correct place to insert the new node (left, right)
    if(this->root == nullptr){
        this->root = newNode;
    } else {
        struct Node* temp = root;
        while(temp != nullptr){
            if(data < temp->data){
                if(temp->left == nullptr){
                    temp->left = newNode;
                    break;
                }else{
                    temp = temp->left;
                }
            }else{
                if(temp->right == nullptr){
                    temp->right = newNode;
                    break;
                }else{
                    temp = temp->right;
                }
            }
        }
    }
    size++;
}

Node** BST::search(int data){
    /*
        Searches for a node in the BST
    */

    //If the BST is empty, return nullptr
    if(this->root == nullptr){
        return nullptr;
    }

    //If the root is the node we are looking for, return the address of the root
    if(root->data == data){
        return &this->root;
    }

    //If the root is not the node we are looking for, search for the node in the BST
    struct Node** temp = &this->root;
    while(*temp != nullptr){
        if(data == (*temp)->data){
            return temp;
        }else if(data < (*temp)->data){
            temp = &(*temp)->left;
        }else{
            temp = &(*temp)->right;
        }
    }

    //If the node is not found, return nullptr
    return nullptr;
}

void BST::remove(struct Node** node){
    /*
        Removes a node from the BST
    */

    //If the node is a leaf, remove it
    if((*node)->left == nullptr && (*node)->right == nullptr){
        (*node) = nullptr;
    }else if((*node)->left == nullptr){
        //If the node has only a right child, replace the node with its right child
        struct Node** temp = &(*node)->right;
        (*node)->data = (*temp)->data;
        (*node)->left = (*temp)->left;
        (*node)->right = (*temp)->right;
        (*temp) = nullptr;
    }else if((*node)->right == nullptr){
        //If the node has only a left child, replace the node with its left child
        struct Node** temp = &(*node)->left;
        (*node)->data = (*temp)->data;
        (*node)->left = (*temp)->left;
        (*node)->right = (*temp)->right;
        (*temp) = nullptr;
    }else{
        //If the node has two children, replace the node with the smallest node in the right subtree
        struct Node** temp = &(*node)->right;
        while((*temp)->left != nullptr){
            (*temp) = (*temp)->left;
        }
        (*node)->data = (*temp)->data;
        remove(temp);
    }
}

void BST::printInOrder(struct Node* node){
    /*
        Prints the next node in the BST in order using recursion
    */

    //Print left, then root, then right
    if(node != nullptr){
        printInOrder(node->left);
        std::cout << node->data << std::endl;
        printInOrder(node->right);
    }
}

void BST::print(){
    /*
        Prints the BST in order
    */

    std::cout << "Printing BST" << std::endl;

    if(root == nullptr){
        std::cout << "BST is empty" << std::endl;
    }else{
        printInOrder(this->root);
    }
}

void testBST(){
    /*
        Tests the BST class
    */

    //Create new BST
    BST* bst = new BST();

    //Insert some data
    bst->insert(79);
    bst->insert(94);
    bst->insert(85);
    bst->insert(9);
    bst->insert(59);
    bst->insert(58);
    bst->insert(61);
    bst->insert(2);
    bst->insert(1);

    //Search for some data
    Node* element = *bst->search(59);
    //Remove some data
    bst->remove(&element);

    //Print the BST
    bst->print();

    delete bst;
}