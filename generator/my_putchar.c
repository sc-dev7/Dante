/*
** EPITECH PROJECT, 2022
** oinadoianozand
** File description:
** my_putchar.c
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "include/my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}
