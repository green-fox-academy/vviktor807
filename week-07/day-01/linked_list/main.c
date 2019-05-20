#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

int main()
{
    //create a local variable which points to the first item of the list (called head).
    node_t *head = NULL;
    head = malloc(sizeof(node_t)); //reserve memory for head the size should be a size of a node (node_t)
    if (head == NULL) {
        return 1;
    }

    head->value = 0;
    head->next = malloc(sizeof(node_t));
    head->next->value = 4;
    head->next->next = malloc(sizeof(node_t));
    head->next->next->value = 1;
    head->next->next->next = NULL;

    print_list(head);
    printf("\n");
    push_back(head, 12);
    push_back(head, 3);
    push_back(head, 55);
    print_list(head);
    push_front(head, 24);
    printf("\n");
    print_list(head);
    insert(head, 8, search(head, 12));
    printf("\n");
    print_list(head);
    printf("\n");
    printf("%d", size(head));
    printf("\n");
    printf("%d", empty(head));
    
    return 0;
}