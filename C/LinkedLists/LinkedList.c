#include "LinkedList.h"

//
struct LinkedList{
    int data;
    struct LinkedList *next;
};

void push(struct LinkedList** head, int data){
    /*
       Create a new element and add it to the end of the list
    */

    //Allocate memory for the new element
    struct LinkedList *new_element = (struct LinkedList *)malloc(sizeof(struct LinkedList));

    //Set the data and next of the new element
    new_element->data = data;
    new_element->next = NULL;


    //If the list is empty, set the new element as the head, else add it to the end of the list
    if(*head == NULL){
        *head = new_element;
    }else{
        struct LinkedList *temp = *head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = new_element;
    }

}

void insert(struct LinkedList **prev, int data){
    /*
         Create a new element and add it after the previous element
    */

    //Allocate memory for the new element
    struct LinkedList *new_element = (struct LinkedList *)malloc(sizeof(struct LinkedList));

    //Set the data and next of the new element
    new_element->data = data;
    new_element->next = (*prev)->next;

    //Set the next of the previous element to the new element
    (*prev)->next = new_element;
}

void pop(struct LinkedList **head){
    /*
        Remove the last element of the list
    */

    //If the list is empty, return
    if(*head == NULL){
        return;
    }

    //Iterate through the list until the second to last element
    struct LinkedList *temp = *head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }

    //Free the last element and set the next of the second to last element to NULL
    temp->next = NULL;
}

struct LinkedList* search(struct LinkedList *head, int data){
    /*
        Search for an element in the list
    */

    //Iterate through the list and return the element if found
    struct LinkedList *temp = head;
    while(temp != NULL){
        if(temp->data == data){
            return temp;
        }
        temp = temp->next;
    }

    //Return NULL if the element is not found
    return NULL;
}

void print(struct LinkedList *head){
    /*
        Print the list
    */

    //Iterate through the list and print the elements
    struct LinkedList *temp = head;
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

void LinkedListTest(){
    /*
        Test the linked list
    */

    //Create a new list (head)
    struct LinkedList *head = NULL;

    //Push elements to the list
    push(&head, 1);
    push(&head, 2);
    push(&head, 3);

    //Insert an element after the second element
    struct LinkedList *temp = search(head, 2);
    insert(&temp, 4);

    //Delete the last element
    pop(&head);

    //Print the list
    print(head);

}