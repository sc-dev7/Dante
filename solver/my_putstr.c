/*
** EPITECH PROJECT, 2022
** anfoinfoanzf
** File description:
** my_putstr.c
*/

#include <unistd.h>
#include "include/my.h"

int my_putstr(char const *str)
{
    write(1, str, my_strlen(str));
    return 0;
}
