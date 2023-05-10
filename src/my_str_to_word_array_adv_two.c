/*
** EPITECH PROJECT, 2023
** Advanced-lib
** File description:
** my_str_to_word_array_adv_two
*/
#include "my_str_to_word_array.h"
#include "my_strncpy.h"
#include <stdlib.h>

int count_words(const char* str, const char* delimiters)
{
    int count = 0;
    int len = my_strlen(str);
    int is_word = 0;
    for (int i = 0; i < len; i++) {
        if (is_delimiter(str[i], delimiters)) {
            is_word = 0;
        }
        if (!is_word) {
            is_word = 1;
            count++;
        }
    }
    return count;
}

int find_next_word(const char* str, const char* delimiters, int i)
{
    while (str[i] && is_delimiter(str[i], delimiters)) {
        i++;
    }
    return i;
}

int find_word_length(const char* str, const char* delimiters, int i)
{
    int len = 0;
    while (str[i] && !is_delimiter(str[i], delimiters)) {
        i++;
        len++;
    }
    return len;
}

char* extract_word(const char* str, int start, int len)
{
    char* word = (char*) malloc(sizeof(char) * (len + 1));
    my_strncpy(word, str + start, len);
    word[len] = '\0';
    return word;
}
