##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##

SRC	= 	src/main.c \
		src/add_pointer.c \
		src/free_func/free_garbage.c \
		src/free_func/free_string.c \
		src/free_func/free_tab.c \

OBJ	=	$(SRC:.c=.o)

CC	= 	gcc -Wextra -Wall

_END=$'\x1b[0m'
_RED=$'\x1b[31m'

NO_OF_FILES 	:=	 $(words $(SRC))

NAME		=	garbage

FLAGS		=

CFLAGS		=	-I./include

all:	$(NAME)

$(NAME):	$(OBJ)
	@ echo "\033[1;36m[ FILES COMPILED ] \033[0m \033[1;35m$(NO_OF_FILES)\033[0m"
	$(CC) -o $(NAME) $(OBJ) $(FLAGS) $(CFLAGS) -g3
	@ echo "\033[1;35m ------------------Name of Binary : \033[1;31m$(NAME)\033[0;31m®\033[1;35m Created Sucesfully ------------------\033[0m"

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

%.o:	%.c
	@ echo "\033[1;35m[ OK ]\033[0m Compiling" $<
	@ $(CC) -o $@ -c $< $(CFLAGS)

.SILENT: