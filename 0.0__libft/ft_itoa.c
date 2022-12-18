/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jniedens <jniedens@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 23:17:41 by jniedens          #+#    #+#             */
/*   Updated: 2022/12/19 00:33:07 by jniedens         ###   ########.fr       */
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

static int	ft_getn(long n, int unit)
{
	while (unit--)
		n /= 10;
	return (n % 10);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		i;
	int		len;
	long	nbr;

	i = 0;
	nbr = n;
	len = ft_getlen(n);
	res = (char *) malloc(sizeof(char) * (len + 1));
	if (res)
	{
		if (nbr < 0)
		{
			res[i] = '-';
			i++;
			nbr *= -1;
		}
		while (len - i)
		{
			res[i] = 48 + ft_getn(nbr, len - i - 1);
			i++;
		}
		res[i] = '\0';
	}
	return (res);
}
