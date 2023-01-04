# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jniedens <jniedens@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/01 11:28:16 by jniedens          #+#    #+#              #
#    Updated: 2023/01/03 12:45:23 by jniedens         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR	= ar
ARFLAGS = rcs
RM = rm -f

SRCS = ./src/ft_printf.c ./src/ft_putchar.c ./src/ft_puthexlow.c \
		./src/ft_puthexup.c ./src/ft_putnbr.c ./src/ft_putstr.c \
		./src/ft_putunbr.c ./src/ft_putpointer.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

