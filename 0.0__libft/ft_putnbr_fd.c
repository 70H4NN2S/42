/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jniedens <jniedens@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 00:36:59 by jniedens          #+#    #+#             */
/*   Updated: 2022/12/20 21:49:26 by jniedens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_getlen(int n)
{
	if (n >= 10)
		return (ft_getlen(n / 10) + 1);
	else if (n <= -10)
		return (ft_getlen(n / -10) + 2);
	else if (n < 0)
		return (2);
	else
		return (1);
}

static int	ft_getnum(long n, int unit)
{
	while (unit--)
		n /= 10;
	return (n % 10);
}

void	ft_putnbr_fd(int n, int fd)
{
	int		i;
	int		len;
	long	nbr;

	i = 0;
	nbr = n;
	len = ft_getlen(n);
	if (nbr < 0)
	{
		ft_putchar_fd('-', fd);
		i++;
		nbr *= -1;
	}
	while (len - i)
	{
		ft_putchar_fd('0' + ft_getnum(nbr, len - i - 1), fd);
		i++;
	}
}
