/*
** EPITECH PROJECT, 2023
** dante
** File description:
** 1
*/

#include "include/my.h"

void verififnumber(char **av)
{
    int i = 0; int b = 0;
    while (av[1][i] != '\0') {
        if (av[1][i] > '9' || av[1][i] < '0')
            exit(84);
        i++;
    }
    while (av[2][b] != '\0') {
        if (av[2][b] > '9' || av[2][b] < '0')
            exit(84);
        b++;
    }
}
