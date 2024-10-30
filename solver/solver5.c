/*
** EPITECH PROJECT, 2023
** gre
** File description:
** gre
*/

#include "include/my.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void falsechar(char *str)
{
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] != '\n' && str[i] != 'X' && str[i] != '*')
            exit(84);
        i++;
    }
}
