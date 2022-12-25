# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jniedens <jniedens@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/16 15:10:03 by jniedens          #+#    #+#              #
#    Updated: 2022/12/25 12:37:35 by jniedens         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memmove.c ft_memset.c ft_strlen.c ft_memcpy.c ft_bzero.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strrchr.c ft_strchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_putchar_fd.c ft_putstr_fd.c ft_itoa.c ft_putnbr_fd.c ft_strnstr.c ft_strnstr.c ft_putendl_fd.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_strmapi.c ft_striteri.c

SRCS_BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstdelone.c ft_lstclear.c

OBJS = $(SRCS:.c=.o)
OBJS_BONUS = $(SRCS_BONUS:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror
ARFLAGS = -rcs
RM = rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	ar $(ARFLAGS) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

bonus: $(OBJS) $(OBJS_BONUS)
	ar $(ARFLAGS) $(NAME) $(OBJS) $(OBJS_BONUS)

clean:
	$(RM) $(OBJS) $(OBJS_BONUS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
