/*
** EPITECH PROJECT, 2023
** lib
** File description:
** my_atof
*/

#include <stdlib.h>
#include "my_strlen.h"

int lfs_atof(char *str)
{
    if (str[0] == '-'){
        return -1;
    } else {
        return 1;
    }
}

int lfd_atof(char *str)
{
    for (int i = 0; str[i] != '\0'; i++){
        if (str[i] == '.')
            return i;
    }
    return 0;
}

double lm_atof(int comma, int sign, char *str)
{
    float nb = 0;
    int decimal = 0;
    double fraction = 0.1;
    int i = 0;
    if (sign == -1)
        i = 1;
    for (i; str[i] != '\0';i++){
        if (i == comma){
            decimal = 1;
            i++;
        }
        if (decimal == 0){
            nb = (str[i] - '0') + (nb * 10);
        }
        if (decimal == 1){
            nb = ((str[i] - '0') * fraction) + nb;
            fraction *= 0.1;
        }
    }
    return nb * sign;
}

double sm_atof(int comma, int sign, char *str)
{
    float nb = 0;
    if (sign == -1){
        nb = str[1] - '0';
        return nb * (-1);
    } else {
        nb = str[0] - '0';
        return nb;
    }
}

double my_atof(char *str)
{
    int sign = lfs_atof(str);
    int length = my_strlen(str);
    int comma = lfd_atof(str);
    int i = 0;
    float nb = 0;
    if (sign == -1){
        i = 1;
        length -= 1;
    }
    for (i; str[i] != '\0'; i++){
        if (length > 1){
            nb = lm_atof(comma, sign, str);
        } else {
            nb = sm_atof(comma, sign, str);
        }
    }
    return nb;
}
