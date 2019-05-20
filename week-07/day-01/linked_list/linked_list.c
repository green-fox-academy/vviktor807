//
// Created by Viktor on 2019. 05. 20..
//

#include "linked_list.h"


void print_list(node_t *head)
{
    node_t *current = head->next;
    while (current != NULL) {
        printf("%d, ", current->value);
        current = current->next;
    }
}

void push_back(node_t *head, int val)
{
    node_t *current = head;
    while (current->next != NULL) { //goes until the next upcoming pointer should point to NULL (basically it stops
        // before we reach the last node..
        current = current->next;
    }
    current->next = malloc(sizeof(node_t)); // and inserts our value
    current->next->value = val;             // that we gave to our function as parameter.
    current->next->next = NULL;
}

void push_front(node_t *head, int val)
{
    node_t *new_node;
    new_node = malloc(sizeof(node_t));
    new_node->value = val;
    new_node->next = head->next;
    head->next = new_node;
}

void insert(node_t *head, int val, node_t *value_after_insert)
{
    node_t *current = head;
    while (current->next != NULL) {
        if (current->next == value_after_insert) {
            node_t *temp = current->next->next;
            current->next->next = malloc(sizeof(node_t));
            value_after_insert->next->value = val;
            value_after_insert->next->next = temp;
        }
        current = current->next;
    }
}

node_t *search(node_t *head, int val)
{
    node_t *current = head;
    while (current->next != NULL) {
        if (current->value == val) {
            return current;
        }
        current = current->next;
    }
    return NULL;
}

int size(node_t *head)
{
    int size = 0;
    node_t *current = head;
    while (current->next != NULL) {

        current = current->next;
        size++;
    }
    return size;
}

int empty(node_t *head)
{
    if (head == NULL) {
        return 1;
    }
    return 0;
}
