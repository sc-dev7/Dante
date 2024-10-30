/*
** EPITECH PROJECT, 2022
** isaac
** File description:
** afzefe
*/

#pragma once

    #include <stdio.h>
    #include <unistd.h>
    #include<stdlib.h>
    #include<stdarg.h>
    #include <stddef.h>
    #include <stdlib.h>
    #include "signal.h"
    #include "../struct.h"
    #include <unistd.h>
    #include <sys/types.h>
    #include <sys/wait.h>
    #include <time.h>

void falsechar(char *str);
void my_putchar(char c);
int my_put_nbr(int nb);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
char *my_strcpy(char *dest, char const *src);
char **strtotab(char *str);
void my_puttab(char ** tab);
int comparestr(char *str1, char *str2);
char *recup_pos(void);
char *returnbuf(char *filepath);
int lon(char *str);
int lar(char *str);
void my_puttab(char **tab);
dante strtotabb(char **av);
int verif4(dante dant);
char mouv2(int c);
char mouv3(dante dant);
dante labfin(char **av);
dante labfin2(dante dant, int i, int y);
dante solver(char **av);
dante chtoin(char **av);
char mouv(int c, dante dant);
dante depl(char t, dante dant, int p);
dante ret(dante dant, int p);
dante strtotabb(char **av);
dante chtoin2(dante dant, int x, int y);
