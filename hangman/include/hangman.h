/*
** EPITECH PROJECT, 2021
** hangman
** File description:
** hangman
*/
#ifndef HANGMAN_H_
#define HANGMAN_H_

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int my_strlen(char const *str);
char *space(char *str, char letter);
int modif(char *str, char *space, char letter);
void turn(char *str, int turn);
int defeat(char *str, char *space, char letter);
int lose(int turn);
int count (char *file);
char *data_file(char *file);
char **transform(char **av);
char *recuperate(char **buffer, char **av, int numero);
int num(int lines);

#endif
