/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jniedens <jniedens@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 11:49:38 by jniedens          #+#    #+#             */
/*   Updated: 2022/12/30 20:35:20 by jniedens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}


void	ft_putstr_fd(char *s, int fd)
{
	int	len;

	len = 0;
	while (s[len])
		len++;
	write(fd, s, len);
}

void	ft_check(char c, va_list args)
{
	char	*arg;

	arg = va_arg(args, char *);
	if (c == 's')
		ft_putstr_fd(arg, 1);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;

	if (!str)
		return (0);
	i = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
			ft_check(str[++i], args);
		else
			ft_putchar_fd(str[i], 1);
		i++;
	}
	va_end(args);
	return (i);
}

int	main(void)
{
	ft_printf("He%s, i am %s.", "llo", "Johannes", "asd");
}
