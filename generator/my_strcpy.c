/*
** EPITECH PROJECT, 2022
** audnadkjad
** File description:
** my_strcpy.c
*/

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;
    for (; src[i] != '\0'; i++)
        dest[i] = src[i];
    dest[i] = '\n';
    dest[i + 1] = '\0';
    return dest;
}
