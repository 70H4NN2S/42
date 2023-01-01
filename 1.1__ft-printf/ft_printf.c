/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jniedens <jniedens@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 11:49:38 by jniedens          #+#    #+#             */
/*   Updated: 2023/01/01 11:45:10 by jniedens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_check(char c, va_list args)
{
	if (c == 'c')
		ft_putchar(va_arg(args, int));
	else if (c == 's')
		ft_putstr(va_arg(args, char *));
	else if (c == 'd')
		ft_putnbr(va_arg(args, int));
	else if (c == 'u')
		ft_putunbr(va_arg(args, unsigned int));
	else if (c == 'x')
		ft_puthexlow(va_arg(args, unsigned int));
	else if (c == 'X')
		ft_puthexup(va_arg(args, unsigned int));
	else if (c == 'p')
		ft_putvoidhex(va_arg(args, unsigned long));
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;

	i = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			if (str[i] == '%')
				ft_putchar('%');
			else
				ft_check(str[i], args);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (0);
}
