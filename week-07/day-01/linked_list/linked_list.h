//
// Created by Viktor on 2019. 05. 20..
//

#ifndef LINKED_LIST_LINKED_LIST_H
#define LINKED_LIST_LINKED_LIST_H

#include <stdio.h>
#include <stdlib.h>

//define a linked list node
typedef struct node
{
    int value;
    struct node *next; //defining the struct in a recursive manner is possible in C
} node_t;

/*Iterating over the list !! Build a function that prints out all the elements of our list.
 * we need to use a pointer (called current for example) that will keep track of the node we are currently printing.
 * After printing the value of the node, we set the current pointer to the next node, and print again until it reaches then
 * end of our list (head = NULL) */
void print_list(node_t *head);

/* add an item to the end of the list. Iterate through the lsit end once we reached the end of the list we can add our
 * new item to it. Therefore function should get a value as a parameter as well so we can specify the value we want to
 * insert.*/
void push_back(node_t *head, int val);

/*add an item to the beginning of the list. we need to create a new item and set its value.
 * link the new item to point to the head of the list.
 * set the head of the list to be our nwe item.*/
void push_front(node_t *head, int val);

/* This function should take a head a value and a pointer to an existing node as parameters. It should insert the new
 * value after the given node in the specified list.*/
void insert(node_t *head, int val, node_t *value_after_insert);

/* This function should take a head and a value as parameters. It should look for a given value in the specificed head
 * and return a pointer to the first node that stores the searched value. It should return NULL if no node stores the
 * searched value. */
node_t *search(node_t *head, int val);

int size(node_t *head);

int empty(node_t *head);

#endif //LINKED_LIST_LINKED_LIST_H
