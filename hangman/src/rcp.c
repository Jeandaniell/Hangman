/*
** EPITECH PROJECT, 2021
** hangman
** File description:
** hangman
*/

#include "../include/hangman.h"

int count(char *file)
{
    int fd = open(file, O_RDONLY);
    char *buffer = malloc(sizeof(char) * 10000);
    int j = 0;

    if (fd == -1) {
        exit(84);
    }
    read(fd, buffer, 5000);
    for (int i = 0; buffer[i] != '\0'; i++) {
        if (buffer[i] == '\n')
            j++;
    }
    close(fd);
    return (j);
    free(buffer);
}

char **transform(char **av)
{
    char *str = av[1];
    int u = count(av[1]), i = 0, j = 0, k = 0, l = 0;
    char *buffer = malloc(sizeof(char) * 10000);
    char **d_array = malloc(sizeof(char *) * (u + 1));
    int fd = open(str, O_RDONLY);

    for (i = 0; i < (u + 1); i++)
        d_array[i] = malloc(sizeof(char) * 140);
    read(fd, buffer, 5000);
    for (l = 0; buffer[l] != '\0'; l++, k++) {
        d_array[j][k] = buffer[l];
        if (buffer[l] == '\n')
            j++, k = -1;
    }
    d_array[j+1] = NULL, d_array[j][k+1] == '\0';
    close(fd);
    return (d_array);
    free(d_array);
    free(buffer);
}

char *recuperate(char **buffer, char **av, int numero)
{
    int i = 0;

    buffer = transform(av);
    printf("%s", buffer[numero]);
    return (buffer[numero]);
}
