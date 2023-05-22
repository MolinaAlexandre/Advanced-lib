/*
** EPITECH PROJECT, 2023
** Advanced-lib
** File description:
** my_strncmp
*/

#include <stddef.h>

int my_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i = 0;

    for (i; s1[i] == s2[i] && i != n && s1[i] && s2[i]; i++)
        continue;
    if ((s1[i] == '\0' && s2[i] == '\0') || i == n)
        return 0;
    if (s1[i] > s2[i])
        return 1;
    if (s1[i] < s2[i])
        return -1;
    return 0;
}
