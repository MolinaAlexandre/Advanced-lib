##
## EPITECH PROJECT, 2023
## lib
## File description:
## Makefile
##

CFLAGS	=	-I./include\

SRC	=	src/my_strlen.c\
		src/my_strcat.c\
		src/my_atoi.c\
		src/my_atof.c\
		src/my_convert_to_hexa.c\
		src/my_strcmp_advanced.c\
		src/my_strtod.c\

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

.PHONY: clean fclean
