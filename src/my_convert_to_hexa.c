/*
** EPITECH PROJECT, 2023
** antman
** File description:
** convert_to_hexa
*/

#include <stdlib.h>
#include "my_strcat.h"
#include "my_atoi.h"

void decimal_to_hex(int decimal, char *hex)
{
    char list_hex[] = "0123456789ABCDEF";
    int i = 0;
    int j = 0;
    int k = 0;
    char temp;

    for (i; decimal > 0; i++) {
        hex[i] = list_hex[decimal % 16];
        decimal /= 16;
    }
    hex[i] = '\0';
    while (hex[j] != '\0'){
        j++;
    }
    j--;
    for (k; k < j; k++, j--) {
        temp = hex[k];
        hex[k] = hex[j];
        hex[j] = temp;
    }
}

char *convert_to_hexa(char *R, char *G, char *B)
{
    int red = my_atoi(R);
    int green = my_atoi(G);
    int blue = my_atoi(B);
    char *hex = malloc (sizeof(char) * 7);
    char hex_red[3], hex_green[3], hex_blue[3];

    decimal_to_hex(red, hex_red);
    my_strcat(hex, hex_red);
    decimal_to_hex(green, hex_green);
    my_strcat(hex, hex_green);
    decimal_to_hex(blue, hex_blue);
    my_strcat(hex, hex_blue);
    return hex;
}
