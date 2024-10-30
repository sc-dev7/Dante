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

dante chtoin(char **av)
{
    dante dant = strtotabb(av);
    dant.intab = malloc(sizeof(int *) * dant.lon + 2);
    int x = 0; int y = 0;
    while (dant.tab[x] != NULL) {
        dant.intab[x] = malloc(sizeof(int) * dant.lar + 1);
        while (dant.tab[x][y] != '\0') {
            dant = chtoin2(dant, x, y);
            y++;
        }
        dant.intab[x][y] = -99;
        y = 0; x++;
    }
    dant.intab[x] = malloc(sizeof(int) * 1);
    dant.intab[x][0] = -999;
    return dant;
}

int verif4(dante dant)
{
    int c = 0;
    if ((dant.x + 1) < dant.lon) {
        if (dant.intab[dant.x + 1][dant.y] == -2)
            c = c + 4000;
    }
    if ((dant.x - 1) > -1) {
        if (dant.intab[dant.x - 1][dant.y] == -2)
            c = c + 400;
    }
    if ((dant.y + 1) < dant.lar) {
        if (dant.intab[dant.x][dant.y + 1] == -2)
            c = c + 40;
    }
    if ((dant.y - 1) > -1) {
        if (dant.intab[dant.x][dant.y - 1] == -2)
            c = c + 4;
    }
    return c;
}

char mouv2(int c)
{
    if (c == 4000)
        return 'B';
    if (c == 400)
        return 'T';
    if (c == 40)
        return 'R';
    if (c == 4)
        return 'L';
}

char mouv3(dante dant)
{
    int i = dant.lon - dant.x;
    int y = dant.lar - dant.y;
    if (i > y)
        return 'B';
    if (y > i)
        return 'R';
    if (y == i)
        return 'R';
}

dante labfin(char **av)
{
    dante dant = solver(av);
    int i = 0; int y = 0;
    while (dant.tab[i] != NULL) {
        while (dant.tab[i][y] != '\0') {
            dant = labfin2(dant, i, y);
            y++;
        }
        i++; y = 0;
    }
    dant.tab[dant.lon - 1][dant.lar - 1] = 'o';
    return dant;
}
