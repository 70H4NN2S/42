/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jniedens <jniedens@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 10:28:58 by jniedens          #+#    #+#             */
/*   Updated: 2023/01/02 10:49:58 by jniedens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_intlen(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		n *= -1;
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		sign;

	len = ft_intlen(n);
	sign = 1;
	if (n < 0)
	{
		sign = -1;
		len++;
	}
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (len--)
	{
		str[len] = (n % 10) * sign + '0';
		n /= 10;
	}
	if (sign == -1)
		str[0] = '-';
	return (str);
}

int	ft_putnbr(int n)
{
	char	*num;
	int		len;

	num = ft_itoa(n);
	len = ft_printstr(num);
	free(num);
	return (len);
}
