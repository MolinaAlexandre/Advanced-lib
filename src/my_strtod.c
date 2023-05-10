/*
** EPITECH PROJECT, 2023
** lib
** File description:
** my_strtod
*/
#include "my_strtod.h"

int add_intpart(int intpart, char c, int *sign, int *itteration)
{
    if ((*itteration) == 0 && my_issign(c) != 0){
        *itteration = 1;
        *sign = my_issign(c);
        return intpart;
    }
    *itteration = 1;
    if ((*sign) == 0){
        (*sign) = 1;
    }
    if (my_issign(c) != 0 && (*itteration) == 1){
        *itteration = -1;
        return intpart;
    } else if (*itteration != -1) {
        intpart = (intpart * 10) + (c - '0');
        return intpart;
    }

}

int my_strtod(const char *restrict nptr, char **restrict endptr)
{
    char *charpart = malloc(sizeof(char) * (my_strlen(nptr) + 1));
    int intpart = 0; int it = 0; int itt = 0;
    int sign = 0;
    int a = 0;

    for (int i = 0; i < my_strlen(nptr); i++){
        if ((my_isnum_sign(nptr[i]) && itt != -1) && it == 0){
            intpart = add_intpart(intpart, nptr[i], &sign, &itt);
        } else {
            it = 1;
            charpart[a] = nptr[i];
            a++;
        }
    }
    charpart[a] = '\0';
    *endptr = malloc(sizeof(char) * (my_strlen(charpart) + 1));
    my_strncpy(*endptr, charpart, my_strlen(charpart));
    (*endptr)[my_strlen(charpart)] = '\0';
    free(charpart);
    return (intpart * sign);
}
