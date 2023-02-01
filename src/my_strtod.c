/*
** EPITECH PROJECT, 2023
** lib
** File description:
** my_strtod
*/
#include "my_strtod.h"

int is_number(const char str)
{
    if (str >= '0' && str <= '9')
        return 1;
    return 0;
}

int my_strtod(const char *str, char *charpart)
{
    char numpart[100];
    int j = 0; int k = 0;
    int isletter = 0;
    int sign = 0;
    int it = 0;
    for (int i = 0; i < my_strlen(str); i++){
        if (str[i] == '-' && is_number(str[i + 1]) == 1 && it != 1){
            sign = 1;
            it = 1;
        }
        if (((is_number(str[i]) == 1) && isletter != 1) || sign == 1){
            numpart[j] = str[i];
            j++;
            sign = 0;
        } else {
            charpart[k] = str[i];
            isletter = 1; k++;
        }
    }
    return my_atoi(numpart);
}
