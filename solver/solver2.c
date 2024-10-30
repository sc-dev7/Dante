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

char *returnbuf(char *filepath)
{
    struct stat abc;
    stat(filepath, &abc);
    int nb = abc.st_size;
    if (nb < 1)
        exit(84);
    char *buffer = malloc(sizeof(char) * nb + 2);
    int fd;
    fd = open(filepath, O_RDONLY);
    if (fd == -1)
        exit(84);
    int ret;
    ret = read(fd, buffer, nb);
    close(fd);
    buffer[nb] = '\n';
    buffer[nb + 1] = '\0';
    return buffer;
}

int lon(char *str)
{
    int i = 0; int nb = 0;
    while (str[i] != '\0') {
        if (str[i] == '\n')
            nb++;
        i++;
    }
    return nb;
}

int lar(char *str)
{
    int i = 0;
    while (str[i] != '\n') {
        i++;
    }
    return i;
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

dante labfin2(dante dant, int i, int y)
{
    if (dant.tab[i][y] == 'C') {
        dant.tab[i][y] = 'o';
    }
    if (dant.tab[i][y] == '/') {
        dant.tab[i][y] = '*';
    }
    return dant;
}
