/*
** EPITECH PROJECT, 2023
** advanced_lib
** File description:
** my_strcmp_advanced
*/
#include "my_strlen.h"
#include "stdlib.h"

int check_pal_is(char *str1, char *str2, char **charstr1, char **charstr2)
{
    int a = 0;
    for (int i = 0; i < my_strlen(str1); i++){
        if (charstr1[i][0] == charstr2[(my_strlen(str2) -1 -i)][0]){
            a++;
        }
    }
    if (a != my_strlen(str1)){
        return 0;
    }
    return 1;
}

int check_palindrome(char *str1, char *str2)
{
    int i = 0;
    char **charstr1;
    charstr1 = malloc(sizeof(char *) * my_strlen(str1));
    char **charstr2;
    charstr2 = malloc(sizeof(char *) * my_strlen(str2));
    for (int i = 0; i < my_strlen(str1); i++)
        charstr1[i] = malloc(sizeof(char) * 1);
    for (int i = 0; i < my_strlen(str2); i++)
        charstr2[i] = malloc(sizeof(char) * 1);
    for (i = 0; i < my_strlen(str1); i++)
        charstr1[i][0] = str1[i];
    for (i = 0; str2[i] != '\0'; i++){
        charstr2[i][0] = str2[i];
    }
    if (my_strlen(str1) == my_strlen(str2)){
        if (check_pal_is(str1, str2, charstr1, charstr2) == 1)
            return 1;
        return 0;
    }
    return 0;
}

int check_sl_inside(int i, char *str2, char **charstr1, char **charstr2)
{
    int a = 0;
    for (int c = 0; c < my_strlen(str2); c++){
        if (charstr1[i][0] == charstr2[c][0]){
            a = 1;
        }
    }
    if (a != 1){
        return 0;
    }
    a = 0;
}

int check_same_letter_in_word(char *str1, char *str2)
{
    int i = 0;
    if (my_strlen(str1) != my_strlen(str2))
        return 0;
    char **charstr1;
    char **charstr2;
    charstr1 = malloc(sizeof(char *) * my_strlen(str1));
    charstr2 = malloc(sizeof(char *) * my_strlen(str2));
    for (int i = 0; i < my_strlen(str1); i++)
        charstr1[i] = malloc(sizeof(char) * 1);
    for (int i = 0; i < my_strlen(str2); i++)
        charstr2[i] = malloc(sizeof(char) * 1);
    for (i = 0; str1[i] != '\0'; i++)
        charstr1[i][0] = str1[i];
    for (i = 0; str2[i] != '\0'; i++)
        charstr2[i][0] = str2[i];
    for (int i = 0; i < my_strlen(str1); i++){
        if (check_sl_inside(i, str2, charstr1, charstr2) == 0)
            return 0;
    }
    return 2;
}

int my_strcmp_advanced(char *str1, char *str2, int var)
{
    if (var == 1){
        if (check_palindrome(str1, str2) == 1){
            return 1;
        }else{
            return 0;
        }
    }
    if (var == 2){
        if (check_same_letter_in_word(str1, str2) == 2){
            return 1;
        }else{
            return 0;
        }
    }
}
