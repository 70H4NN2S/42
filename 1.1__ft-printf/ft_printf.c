/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jniedens <jniedens@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 11:49:38 by jniedens          #+#    #+#             */
/*   Updated: 2023/01/02 16:08:45 by jniedens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static int	ft_check(char c, va_list args)
{
	int	count;

	count = 0;
	if (c == 'c')
		count += (ft_putchar(va_arg(args, int)));
	else if (c == 's')
		count += (ft_printstr(va_arg(args, char *)));
	else if (c == 'd')
		count += (ft_putnbr(va_arg(args, int)));
	else if (c == 'u')
		count += (ft_putunbr(va_arg(args, unsigned int), 0));
	else if (c == 'x')
		count += (ft_puthexlow(va_arg(args, unsigned int), 0));
	else if (c == 'X')
		count += (ft_puthexup(va_arg(args, unsigned int), 0));
	else if (c == 'p')
		count += (ft_putpointer(va_arg(args, unsigned long long)));
	else if (c == '%')
	{
		count++;
		write(1, "%", 1);
	}
	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			len += ft_check(str[i + 1], args);
			i++;
		}
		else
			len += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (len);
}
