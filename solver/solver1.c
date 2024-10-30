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

dante solver(char **av)
{
    dante dant = chtoin(av);
    dant.x = 0; dant.y = 0;
    int p = 0; dant.intab[0][0] = 0;
    while (dant.x != (dant.lon - 1) || dant.y != (dant.lar - 1)) {
        int c = verif4(dant);
        int p = dant.intab[dant.x][dant.y];
        if (c == 0) {
            dant.intab[dant.x][dant.y] = -9;
            dant = ret(dant, p);
        } else {
            char t = mouv(c, dant);
            dant = depl(t, dant, p);
        }
    }
    return dant;
}

void my_putintab(dante dant)
{
    int x = 0; int y = 0;
    while (dant.intab[x][0] != -999) {
        while (dant.intab[x][y] != -99) {
            my_put_nbr(dant.intab[x][y]);
            my_putchar(' ');
            y++;
        }
        x++; y = 0;
        my_putchar('\n');
    }
}

dante dolab2(dante dant, int x, int y)
{
    if (dant.intab[x][y] > 0) {
        dant.tab[x][y] = 'o';
    }
    return dant;
}

dante dolab(char **av)
{
    dante dant = solver(av);
    int x = 0;
    int y = 0;
    dant.tab[x][y] = 'o';
    while (dant.tab[x] != NULL) {
        while (dant.tab[x][y] != '\0') {
            dant = dolab2(dant, x, y);
            y++;
        }
        x++; y = 0;
    }
    return dant;
}

int main (int ac, char **av)
{
    if (ac != 2)
        exit(84);
    dante dant = dolab(av);
    my_puttab(dant.tab);
    return 0;
}
