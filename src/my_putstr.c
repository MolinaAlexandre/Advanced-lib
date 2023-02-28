/*
** EPITECH PROJECT, 2023
** temp
** File description:
** my_putstr
*/
#include <unistd.h>

int my_putchar(char c)
{
    write(1, &c, 1);
    return 0;
}

int my_putstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++){
        my_putchar(str[i]);
    }
    return 0;
}
