/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putvoidhex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jniedens <jniedens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 10:22:42 by jniedens          #+#    #+#             */
<<<<<<< HEAD:1.1__ft-printf/ft_putvoidhex.c
/*   Updated: 2023/01/03 12:40:31 by jniedens         ###   ########.fr       */
=======
/*   Updated: 2023/01/03 12:20:12 by jniedens         ###   ########.fr       */
>>>>>>> 5254b84ce3ef7c37ded92fe0b1d6bc8640fb46b6:1.1__ft-printf/src/ft_putpointer.c
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_ptrlen(unsigned long long n)
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

static void	ft_putptr(unsigned long long n)
{
	if (n >= 16)
	{
		ft_putptr(n / 16);
		ft_putptr(n % 16);
	}
	else
	{
		if (n < 10)
			ft_putchar(n + '0');
		else
			ft_putchar(n + 'a' - 10);
	}
}

int	ft_putpointer(unsigned long long n)
{
	int	len;

	if (n == (unsigned long long)0)
		return (ft_putstr("0x0"));
	else
	{
		len = 0;
		len += ft_printstr("0x");
		ft_putptr(n);
		len += ft_ptrlen(n);
		return (len);
	}
}

int main(void)
{
	char *s;

	printf("%p", s);
}
