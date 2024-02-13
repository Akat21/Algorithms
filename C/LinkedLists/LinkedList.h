#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <stdio.h>
#include <stdlib.h>

//Struct
struct LinkedList{
    int data;
    struct LinkedList *next;
};

//Methods
void push(struct LinkedList **head, int data);
void pop(struct LinkedList **head);
void print(struct LinkedList *head);
void insert(struct LinkedList **prev, int data);
struct LinkedList* search(struct LinkedList *head, int data);

//Test
void LinkedListTest();


#endif