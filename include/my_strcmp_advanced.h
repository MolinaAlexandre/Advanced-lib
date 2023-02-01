/*
** EPITECH PROJECT, 2023
** advanced_lib
** File description:
** my_strcmp_advanced
*/

#ifndef MY_STRCMP_ADVANCED_H_
    #define MY_STRCMP_ADVANCED_H_
int check_pal_is(char *str1, char *str2, char **charstr1, char **charstr2);
int check_palindrome(char *str1, char *str2);
int check_sl_inside(int i, char *str2, char **charstr1, char **charstr2);
int check_same_letter_in_word(char *str1, char *str2);
int my_strcmp_advanced(char *str1, char *str2, int var);

#endif /* !MY_STRCMP_ADVANCED_H_ */
