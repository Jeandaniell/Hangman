/*
** EPITECH PROJECT, 2021
** hangman
** File description:
** hangman
*/

#include "../include/hangman.h"

int num(int lines)
{
    int num = 0;
    srand(time(NULL));
    int a = rand();

    if (a % 2 == 0)
        num = 1;
    if (a % 3 == 0)
        num = 2;
    if (a % 5 == 0 && a % 2 != 0)
        num = 3;
    return (num);
}
