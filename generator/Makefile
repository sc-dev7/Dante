##
## EPITECH PROJECT, 2022
## ief
## File description:
## ezljfe
##

SRC	=	*.c

OBJ	=	*.o

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -c $(SRC)
	ar rc $(NAME) $(OBJ)
	rm -f $(OBJ)
	gcc -o generator *.c -L. libmy.a
	rm -rf libmy.a
	rm -rf *.o

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f mysh

re:	fclean all
