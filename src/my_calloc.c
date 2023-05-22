/*
** EPITECH PROJECT, 2023
** Advanced-lib
** File description:
** my_calloc
*/

#include <stdlib.h>

void *my_calloc(size_t nmemb, size_t size)
{
    void *ptr = malloc(nmemb * size);
    char *c = NULL;

    if (ptr) {
        c = ptr;
        for (size_t i = 0; i < nmemb * size; i++)
            c[i] = 0;
    }
    return ptr;
}
