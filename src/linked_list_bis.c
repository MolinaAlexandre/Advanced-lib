/*
** EPITECH PROJECT, 2023
** temp
** File description:
** linked_list_bis
*/
#include "linked_list.h"
#include <stdio.h>
#include <stdlib.h>

list_t* create_list(void)
{
    list_t* list = malloc(sizeof(list_t));
    list->head = NULL;
    list->size = 0;
    return list;
}

void free_list(list_t* list)
{
    node_t* current = list->head;
    while (current != NULL) {
        node_t* next = current->next;
        free(current->data);
        free(current);
        current = next;
    }
    free(list);
}
