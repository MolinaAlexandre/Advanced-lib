/*
** EPITECH PROJECT, 2023
** Advanced-lib
** File description:
** my_ctype1
*/

int my_isspace(int c)
{
    int equivalent = 0;
    char tabs[6] = {' ', '\f', '\n', '\r', '\t', '\v'};
    for (int i = 0; i < 6; i++){
        equivalent = tabs[i];
        if (c == equivalent){
            return 1;
        }
    }
    return 0;
}

int my_isupper(int c)
{
    if (c >= 'A' && c <= 'Z')
        return 1;
    return 0;
}

int my_islower(int c)
{
    if (c >= 'a' && c <= 'z')
        return 1;
    return 0;
}

int my_isalpha(int c)
{
    if (my_isupper(c) || my_islower(c))
        return 1;
    return 0;
}

int my_issign(int c)
{
    int equivalent = 0;
    char tabs[2] = {'+', '-'};
    for (int i = 0; i < 2; i++){
        equivalent = tabs[i];
        if (c == equivalent && c == '-'){
            return -1;
        }
        if (c == equivalent && c == '+'){
            return 1;
        }
    }
    return 0;
}
