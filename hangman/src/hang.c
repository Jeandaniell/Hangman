/*
** EPITECH PROJECT, 2021
** hangman
** File description:
** hangman
*/

#include "../include/hangman.h"

int my_strlen(char const *str)
{
    int i = 0;

    for (i = 0; str[i]; i++);
    return (i);
}

char *space(char *str, char letter)
{
    char *src = malloc(sizeof(char) * my_strlen(str));

    for (int j = 0; j < my_strlen(str)-1; j++)
        src[j] = letter;
    return (src);
    free(str);
}

int modif(char *str, char *space, char letter)
{
    int i = 0, j = 0;
    int k = 0;

    for (i = 0; str[i]; i++) {
        if (str[i] == letter) {
            space[i] = letter;
        }
    }
    printf("%s\n", space);
    for (j = 0; space[j]; j++) {
        if (space[j] != '*')
            k++;
        if (k == my_strlen(space))
            return (1);
    }
}

void error(char *str)
{
    int i = 0;

    for (i = 0; str[i]; i++)
        if (str[i] <= 48 && str[i] >= 56)
            exit(84);
}

void turn(char *str, int turn)
{
    char *get;
    size_t nb = 0;
    char *sp = space(str, '*');

    printf("%s\n", sp);
    printf("Tries: ");
    printf("%d\n\n", turn);
    while (1) {
        if (turn == 0 ) {
            printf("You lost!\n");
            break;
        }
        printf("Your letter: ");
        getline(&get, &nb, stdin);
        error(get);
        if (defeat(str, sp, get[0]) != 1) {
            if (modif(str, sp, get[0]) == 1) {
                printf("Tries: ");
                printf("%d\n\n", turn);
                printf("Congratulations!\n");
                break;
            }
        } else
            turn--;
        printf("Tries: ");
        printf("%d\n\n", turn);
    }
}



int main(int ac, char **av)
{
    int numero = num(count(av[1]));
    char **buffer = transform(av);
    char *tab = recuperate(buffer, av, numero);

    if (ac == 2)
        turn(tab, 10);
    if (ac == 3)
        turn(tab, atoi(av[2]));
    return (0);
}
