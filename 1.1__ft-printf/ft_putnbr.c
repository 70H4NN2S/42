/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jniedens <jniedens@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 10:28:58 by jniedens          #+#    #+#             */
/*   Updated: 2023/01/01 21:10:27 by jniedens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n, int count)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		count += 11;
	}
	else if (n < 0)
	{
		write(1, "-", 1);
		count++;
		n = n * -1;
	}
	if (n >= 10)
	{
		count += ft_putnbr(n / 10, count);
		count += ft_putnbr(n % 10, count);
	}
	else
	{
		write(1, &n, 1);
		count++;
	}
	return (count);
}
