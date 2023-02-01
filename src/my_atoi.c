/*
** EPITECH PROJECT, 2023
** lib
** File description:
** my_atoi
*/

#include <stdlib.h>
#include <string.h>
#include "my_strlen.h"

int look_for_sign(char *str)
{
    if (str[0] == '-'){
        return -1;
    } else{
        return 1;
    }
}

int long_methode(int sign, char *str)
{
    int nb = 0;
    int j = 0;
    if (sign == -1){
        for (int i = 1; str[i] != '\0'; i++){
            nb = (str[i] - '0') + (nb * 10);
        }
    } else {
        for (int i = 0; str[i] != '\0'; i++){
            nb = (str[i] - '0') + (nb * 10);
        }
    }
    return nb * sign;
}

int short_methode(int sign, char *str)
{
    int nb = 0;
    if (sign == -1){
        nb = str[1] - '0';
        return nb * (-1);
    } else {
        nb = str[0] - '0';
        return nb;
    }
}

int my_atoi(char *str)
{
    int sign = look_for_sign(str);
    int length = my_strlen(str);
    int i = 0;
    int nb = 0;
    if (sign == - 1){
        i = 1;
        length -= 1;
    }
    while (str[i] != '\0'){
        if (length > 1){
            nb = long_methode(sign, str);
        } else{
            nb = short_methode(sign, str);
        }
        i++;
    }
    return nb;
}
