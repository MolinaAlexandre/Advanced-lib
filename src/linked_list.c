/*
** EPITECH PROJECT, 2023
** temp
** File description:
** linked_list
*/
#include "linked_list.h"
#include <stdio.h>
#include <stdlib.h>
#include "my_putstr.h"

char *my_strdup_list(const char* str)
{
    size_t len = 0;
    while (str[len] != '\0') {
        len++;
    }
    char *new_str = malloc(sizeof(char) * (len + 1));
    if (new_str == NULL) {
        return NULL;
    }
    for (size_t i = 0; i <= len; i++) {
        new_str[i] = str[i];
    }
    return new_str;
}

void add_cel(list_t* list, char* data, int index)
{
    node_t* node = malloc(sizeof(node_t));
    node->data = my_strdup_list(data);
    if (index == 0) {
        node->next = list->head;
        list->head = node;
    } else {
        node_t* current = list->head;
        node_t* previous = NULL;
        for (int i = 0; i < index; i++) {
            previous = current;
            current = current->next;
        }
        previous->next = node;
        node->next = current;
    }
    list->size++;
}

int len_list(list_t* list)
{
    return list->size;
}

void rm_cel(list_t* list, int index)
{
    node_t* current = list->head;
    node_t* previous = NULL;
    int i = 0;
    for (int i = 0; i < index; i++) {
        previous = current;
        current = current->next;
    }
    if (previous == NULL) {
        list->head = current->next;
    } else {
        previous->next = current->next;
    }
    free(current->data);
    free(current);
    list->size--;
}

void print_list(list_t* list)
{
    node_t* current = list->head;
    while (current != NULL) {
        my_putstr(current->data);
        my_putchar(' ');
        current = current->next;
    }
    my_putchar('\n');
}
