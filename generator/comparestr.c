/*
** EPITECH PROJECT, 2022
** comp
** File description:
** str
*/

#include "include/my.h"

int ifsamechar(char *str1, char *str2)
{
    int a = my_strlen(str1);
    int b = my_strlen(str2);
    if (a == b)
        return 1;
    return 0;
}

int comparestr(char *str1, char *str2)
{
    if (ifsamechar(str1, str2) == 0)
        return 0;
    int nb = 0;
    while (str1[nb] != '\0') {
        if (str1[nb] == str2[nb]) {
            nb++;
        } else {
            return 0;
        }
    }
    return 1;
}
