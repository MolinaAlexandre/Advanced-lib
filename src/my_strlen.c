/*
** EPITECH PROJECT, 2023
** lib
** File description:
** my_strlen
*/

int my_strlen(char const *str)
{
    int i = 0;
    while (str[i] != '\0') {
        i = i + 1;
    }
    return i;
}
