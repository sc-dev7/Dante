/*
** EPITECH PROJECT, 2023
** dante
** File description:
** 1
*/

#include "include/my.h"

dante genermapperfect(char **av)
{
    dante dant = generatelab(av);
    int i = 0; int c = 0;
    srand(time(NULL));
    while (dant.tab[i] != NULL) {
        if (dant.tab[i][0] == 'X') {
            dant.tab[i][random_number(0, dant.lon - 1)] = '*';
        }
        i++;
    }
    return dant;
}

dante genermapinperfect2(dante dant)
{
    if (dant.tab[dant.i][0] == 'X') {
        dant.tab[dant.i][random_number(0, dant.lon - 1)] = '*';
    }
    return dant;
}

dante genermapinperfect(char **av)
{
    dante dant = generatelab(av);
    dant.i = 0;
    srand(time(NULL));
    while (dant.tab[dant.i] != NULL) {
        int e = random_number(1, dant.lon);
        while (e != dant.lon) {
            dant = genermapinperfect2(dant);
            e++;
        }
        dant.i++;
    }
    return dant;
}

dante genlab(char **av, int ac)
{
    if (ac < 3 || ac > 4)
        exit(84);
    verififnumber(av);
    if (ac == 3) {
        dante dant = genermapinperfect(av);
        return dant;
    }
    if (ac == 4) {
        if (comparestr("perfect", av[3]) == 1) {
            dante dant = genermapperfect(av);
            return dant;
        } else {
            exit(84);
        }
    }
}

int main(int ac, char **av)
{
    dante dant = genlab(av, ac);
    my_puttab(dant.tab);
    return 0;
}
