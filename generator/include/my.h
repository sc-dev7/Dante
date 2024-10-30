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
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <fcntl.h>

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
dante rangedim(char **av);
void my_puttab(char **tab);
dante generatelab2(dante dant);
int random_number(int min, int max);
dante generatelab(char **av);
