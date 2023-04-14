/*
** EPITECH PROJECT, 2021
** hangman
** File description:
** hangman
*/

#include "../include/hangman.h"

int defeat(char *str, char *space, char letter)
{
    int i = 0, j = 0;

    for (i = 0; str[i]; i++)
        if (str[i] != letter) j++;
    if (j == my_strlen(str)) {
        printf("%c: is not in this word\n", letter);
        printf("%s\n", space);
        return (1);
    }
}

int lose(int turn)
{
    if (turn == 0)
        return (1);
}
