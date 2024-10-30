/*
** EPITECH PROJECT, 2023
** dante
** File description:
** 1
*/

#include "include/my.h"

dante rangedim(char **av)
{
    dante dant;
    dant.lon = my_getnbr(av[1]);
    dant.lar = my_getnbr(av[2]);
    return dant;
}

void my_puttab(char **tab)
{
    int i = 0;
    while (tab[i] != NULL) {
        my_putstr(tab[i]);
        if (tab[i + 1] != NULL)
            my_putchar('\n');
        i++;
    }
}

dante generatelab2(dante dant)
{
    if (dant.x % 2 == 0) {
        while (dant.y != dant.lon) {
            dant.tab[dant.x][dant.y] = '*';
            dant.y++;
        }
    } else {
        while (dant.y != dant.lon) {
            dant.tab[dant.x][dant.y] = 'X';
            dant.y++;
        }
    }
    return dant;
}

dante generatelab(char **av)
{
    dante dant = rangedim(av);
    dant.x = 0; dant.y = 0;
    dant.tab = malloc(sizeof(char *) * (dant.lar + 2));
    while (dant.x != (dant.lar)) {
        dant.tab[dant.x] = malloc(sizeof(char) * (dant.lon + 1));
        dant = generatelab2(dant);
        dant.tab[dant.x][dant.y] = '\0';
        dant.y = 0; dant.x++;
    }
    dant.tab[dant.x - 1][dant.lon - 1] = '*';
    dant.tab[dant.x] = NULL;
    return dant;
}

int random_number(int min, int max)
{
    return (rand() % (max - min + 1)) + min;
}
