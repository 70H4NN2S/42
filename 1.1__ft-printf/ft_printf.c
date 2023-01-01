/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jniedens <jniedens@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 11:49:38 by jniedens          #+#    #+#             */
/*   Updated: 2023/01/01 21:25:37 by jniedens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static int	ft_check(char c, va_list args)
{
	if (c == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (c == 'd')
		return (ft_putnbr(va_arg(args, int), 0));
	else if (c == 'u')
		return (ft_putunbr(va_arg(args, unsigned int), 0));
	else if (c == 'x')
		return (ft_puthexlow(va_arg(args, unsigned int), 0));
	else if (c == 'X')
		return (ft_puthexup(va_arg(args, unsigned int), 0));
	else if (c == 'p')
		return (ft_putvoidhex(va_arg(args, unsigned long), 0));
	return (0);
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

int	main(void)
{
	printf("Test%cTest%c%c\n", 'a', 'z', 'b');
	ft_printf("Test%cTest%c%c\n", 'a', 'z', 'b');
}
