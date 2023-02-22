/*
** EPITECH PROJECT, 2023
** Advanced-lib
** File description:
** my_str_to_word_array_adv
*/

#include <stdio.h>
#include <stdlib.h>
#include "my_str_to_word_array.h"

int is_delimiter(char c, const char* delimiters)
{
    for (int i = 0; i < my_strlen(delimiters); i++) {
        if (c == delimiters[i]) {
            return 1;
        }
    }
    return 0;
}

char** str_to_word_array(const char* str, const char* delimiters)
{
    int num_words = count_words(str, delimiters);
    char** words = (char**) malloc(sizeof(char*) * (num_words + 1));
    int len = my_strlen(str);
    int word_idx = find_next_word(str, delimiters, 0);
    int word_count = 0;
    while (str[word_idx]) {
        int word_len = find_word_length(str, delimiters, word_idx);
        char* word = extract_word(str, word_idx, word_len);
        words[word_count++] = word;
        word_idx = find_next_word(str, delimiters, word_idx + word_len);
    }
    words[word_count] = NULL;
    return words;
}
