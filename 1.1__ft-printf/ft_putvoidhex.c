/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putvoidhex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jniedens <jniedens@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 10:22:42 by jniedens          #+#    #+#             */
/*   Updated: 2023/01/02 16:29:00 by jniedens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ptrlen(uintptr_t n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
		len++;
		n /= 16;
	}
	return (len);
}

void	ft_putptr(uintptr_t n)
{
	if (n >= 16)
	{
		ft_putptr(n / 16);
		ft_putptr(n % 16);
	}
	else
	{
		if (n < 10)
			write(1, &(n + '0'), 1);
		else
			write(1, &(n + 'a' - 10), 1);
	}
}

int	ft_putpointer(unsigned long long n)
{
	int	len;

	len = 0;
	len += ft_printstr("0x");
	if (n == 0)
	{
		len++;
		write(1, "0", 1);
	}
	else
	{
		ft_putptr(n);
		len += ft_ptrlen(n);
	}
	return (len);
}
