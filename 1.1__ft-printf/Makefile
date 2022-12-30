LIBFT = ./libft/libft.a

NAME = libftprintf.a

SRCS = ft_printf.c
OBJS = $(SRCS:.c=.o)

CC = gcc
CFLAGS = -c -Wall -Wextra -Werror
ARFLAGS = -rcs
RM = rm -rf

all : $(NAME)

$(NAME): $(OBJS)
	$(MAKE) bonus -C ./libft
	cp $(LIBFT) $(NAME)
	$(CC) $(CFLAGS) $(SRCS)
	ar $(ARFLAGS) $(NAME) $(OBJS)

clean :
	$(MAKE) clean -C ./libft
	rm -rf $(OBJS)

fclean : clean
	$(MAKE) fclean -C ./libft
	rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re
