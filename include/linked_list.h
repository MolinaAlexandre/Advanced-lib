/*
** EPITECH PROJECT, 2023
** temp
** File description:
** linked_list
*/

#ifndef LINKED_LIST_H_
    #define LINKED_LIST_H_

typedef struct node_s {
    char* data;
    struct node_s* next;
} node_t;

typedef struct list_s {
    node_t* head;
    int size;
} list_t;

list_t* create_list(void);
void add_cel(list_t* list, char* data, int index);
int len_list(list_t* list);
void rm_cel(list_t* list, int index);
void print_list(list_t* list);
void free_list(list_t* list);

#endif /* !LINKED_LIST_H_ */
