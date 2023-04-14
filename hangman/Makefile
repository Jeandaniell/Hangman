##
## EPITECH PROJECT, 2020
## make file
## File description:
## makefile
##

SRC	=	$(shell find ./src -name '*.c')

OBJ	=	$(SRC:.c=.o)

INC	=	-I ./include

NAME	=	hangman

all:	$(NAME)

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(INC) $(SRC) -g3
clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)
	rm -rf *~
	rm -rf include/*~ src/*~

re:	fclean all

.PHONY:	all clean fclean re
