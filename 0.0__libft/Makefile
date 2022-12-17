# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jniedens <jniedens@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/16 15:10:03 by jniedens          #+#    #+#              #
#    Updated: 2022/12/17 17:02:08 by jniedens         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memmove.c ft_memset.c ft_strlen.c ft_memcpy.c ft_bzero.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strrchr.c ft_strchr.c ft_strnstr.c

OBJS = $(SRC:.c=.o)

CC = gcc

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

all: $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: clean all

.PHONY: all clean fclean re