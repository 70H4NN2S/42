/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jniedens <jniedens@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 10:28:58 by jniedens          #+#    #+#             */
/*   Updated: 2023/01/02 17:50:14 by jniedens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>

static int	ft_intlen(long n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static char	*ft_itoa(long n)
{
	char	*num;
	int		len;

	len = ft_intlen(n);
	num = (char *)malloc(sizeof(char) * (len + 1));
	if (!num)
		return (NULL);
	num[len] = '\0';
	if (n == 0)
		num[0] = '0';
	if (n < 0)
	{
		num[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		num[--len] = (n % 10) + '0';
		n /= 10;
	}
	return (num);
}

int	ft_putnbr(int n)
{
	char	*num;
	int		len;

	len = 0;
	num = ft_itoa(n);
	len = ft_printstr(num);
	free(num);
	return (len);
}
