/*
** EPITECH PROJECT, 2023
** Advanced-lib
** File description:
** my_strstr
*/

int my_strlen(char const *str);
int my_strncmp(const char *s1, const char *s2, size_t n);

#include <stddef.h>

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