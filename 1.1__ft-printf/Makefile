# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jniedens <jniedens@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/01 11:28:16 by jniedens          #+#    #+#              #
#    Updated: 2023/01/01 11:32:50 by jniedens         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR	= ar
ARFLAGS = rcs
RM = rm -f

SRCS = ft_printf.c ft_putchar.c ft_puthexlow.c ft_puthexup.c ft_putnbr.c ft_putstr.c ft_putunbr.c ft_putvoidhex.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean $(NAME)

re: fclean all

.PHONY: all clean fclean re

