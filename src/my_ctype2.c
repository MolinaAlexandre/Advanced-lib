/*
** EPITECH PROJECT, 2023
** Advanced-lib
** File description:
** my_ctype2
*/
#include "my_ctype.h"

int my_isdigit(int c)
{
    if (c >= 48 && c <= 57){
        return 1;
    }
    return 0;
}

int my_isalnum(int c)
{
    if (my_isalpha(c) || my_isdigit(c))
        return 1;
    return 0;
}

int my_isnum_sign(int c)
{
    if (my_isdigit(c) || my_issign(c)){
        return 1;
    }
    return 0;
}
