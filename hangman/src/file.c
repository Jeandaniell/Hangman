/*
** EPITECH PROJECT, 2021
** hangman
** File description:
** hangman
*/

#include "../include/hangman.h"

char *data_file(char *file)
{
    int fd = open(file, O_RDONLY);
    char *buffer = malloc(sizeof(char) * 5000);

    if (fd == -1) exit(84);
    read(fd, buffer, 5000);

    return(buffer);
    free(buffer);
}
