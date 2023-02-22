/*
** EPITECH PROJECT, 2023
** Advanced-lib
** File description:
** my_str_to_word_array
*/

#ifndef MY_STR_TO_WORD_ARRAY_H_
    #define MY_STR_TO_WORD_ARRAY_H_
    #include "my_strlen.h"
int is_delimiter(char c, const char* delimiters);
char** str_to_word_array(const char* str, const char* delimiters);
int count_words(const char* str, const char* delimiters);
int find_next_word(const char* str, const char* delimiters, int i);
int find_word_length(const char* str, const char* delimiters, int i);
char* extract_word(const char* str, int start, int len);

#endif /* !MY_STR_TO_WORD_ARRAY_H_ */
