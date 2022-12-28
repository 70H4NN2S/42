/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jniedens <jniedens@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 23:17:41 by jniedens          #+#    #+#             */
/*   Updated: 2022/12/23 11:31:09 by jniedens         ###   ########.fr       */
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

char	*ft_itoa(int n)
{
	char	*res;
	int		len;

	len = ft_getlen(n);
	res = (char *) ft_calloc(len + 1, sizeof(char));
	if (!res)
		return (NULL);
	if (n == 0)
		res[0] = '0';
	if (n < 0)
	{
		res[0] = '-';
		if (n == -2147483648)
		{
			res[--len] = '8';
			n /= 10;
		}
		n = -n;
	}
	while (len-- && n != 0)
	{
		res[len] = '0' + (n % 10);
		n /= 10;
	}
	return (res);
}
