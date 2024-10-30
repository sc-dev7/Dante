##
## EPITECH PROJECT, 2023
## gfd
## File description:
## gfd
##

all:
	make -C solver
	make -C generator

clean:
	rm -rf solver/solver
	rm-rf generator/generator

fclean: clean

re:	fclean all

# .PHONY: clean fclean re
