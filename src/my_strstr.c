/*
** EPITECH PROJECT, 2023
** Advanced-lib
** File description:
** my_strstr
*/

#include "my_strstr.h"

char *my_strstr(const char *haystack, const char *needle)
{
    size_t i = 0, j = 0, k = 0;

    for (i; haystack[i]; i++) {
        j = i;
        k = 0;
        while (needle[k] && haystack[j] == needle[k]) {
            j++;
            k++;
        }
        if (!needle[k])
            return (char *)&haystack[i];
    }
    return NULL;
}
