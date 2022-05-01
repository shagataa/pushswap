##
## EPITECH PROJECT, 2021
## B-CPE-110-PAR-1-1-pushswap-shagata.sri-chandan-das
## File description:
## Makefile
##

SRC =	main.c	\
		algo.c	\
		display.c	\
		function.c  \
		insert.c	\
		my_printf.c	\

OBJS	=	$(SRC:.c=.o)

CPPFLAGS	 +=      -I./include

CFLAGS	+=       -g3

NAME	=	push_swap

all:    $(NAME)

$(NAME):        $(OBJS)
		make -C lib/my
		gcc -o $(NAME) $(SRC) $(CFLAGS) $(CPPFLAGS) \
		-Wall -Wextra -L lib/my -lmy

clean:
		rm -f $(OBJS)
		rm -f lib/my/*.o

fclean: clean
		rm -f $(NAME)
		rm -f lib/libmy.a
		rm -f lib/my/libmy.a

re:     fclean all

.PHONY: all
