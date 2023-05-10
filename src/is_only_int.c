/*
** EPITECH PROJECT, 2023
** Advanced-lib
** File description:
** is_only_int
*/

#include "unistd.h"
#include "my_strtod.h"

int is_only_int(char *str)
{
    char *err = "Please enter an integer as parameter\n";
    char *ptr = NULL;
    int value = my_strtod(str, &ptr);
    if (my_strlen(ptr) != 0){
        free(ptr);
        write(2, err, my_strlen(err));
        return 84;
    }
    free(ptr);
    return 0;
}
