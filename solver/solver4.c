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

char mouv(int c, dante dant)
{
    if (c == 4000 || c == 400 || c == 40 || c == 4)
        return mouv2(c);
    if (c == 4040 || c == 4044 || c == 4440 || c == 4444)
        return mouv3(dant);
    if (c == 44 || c == 440 || c == 444)
        return 'R';
    if (c == 4004 || c == 4400 || c == 4404)
        return 'B';
    if (c == 404)
        return 'L';
}

dante depl(char t, dante dant, int p)
{
    if (t == 'R') {
        dant.y = dant.y + 1;
        dant.intab[dant.x][dant.y] = (p + 1);
    }
    if (t == 'L') {
        dant.y = dant.y - 1;
        dant.intab[dant.x][dant.y] = (p + 1);
    }
    if (t == 'T') {
        dant.x = dant.x - 1;
        dant.intab[dant.x][dant.y] = (p + 1);
    }
    if (t == 'B') {
        dant.x = dant.x + 1;
        dant.intab[dant.x][dant.y] = (p + 1);
    }
    return dant;
}

dante ret(dante dant, int p)
{
    if (dant.x + 1 < dant.lon) {
        if (dant.intab[dant.x + 1][dant.y] == (p - 1)) {
            dant.x++; return dant;
        }
    }
    if (dant.x - 1 > -1) {
        if (dant.intab[dant.x - 1][dant.y] == (p - 1)) {
            dant.x--; return dant;
        }
    }
    if (dant.y + 1 < dant.lar) {
        if (dant.intab[dant.x][dant.y + 1] == (p - 1)) {
            dant.y++; return dant;
        }
    }
    if (dant.y - 1 > - 1) {
        if (dant.intab[dant.x][dant.y - 1] == (p - 1)) {
            dant.y--; return dant;
        }
    }
}

dante strtotabb(char **av)
{
    char *str = returnbuf(av[1]);
    falsechar(str);
    int lo = lon(str);
    int la = lar(str);
    char **tab = malloc(sizeof(char *) * (lo + 2));
    int x = 0; int y = 0; int nb = 0;
    while (x != (lo)) {
        tab[x] = malloc(sizeof(char) * (la + 1));
        while (str[nb] != '\n') {
            tab[x][y] = str[nb];
            nb++; y++;
        }
        tab[x][y] = '\0';
        nb++; x++; y = 0;
    }
    tab[x] = NULL;
    dante dant;
    dant.tab = tab; dant.lon = lo; dant.lar = la;
    return dant;
}

dante chtoin2(dante dant, int x, int y)
{
    if (dant.tab[x][y] == 'X')
        dant.intab[x][y] = -1;
    if (dant.tab[x][y] == '*')
        dant.intab[x][y] = -2;
    return dant;
}
