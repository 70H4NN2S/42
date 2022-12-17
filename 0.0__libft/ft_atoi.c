/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jniedens <jniedens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 15:51:06 by jniedens          #+#    #+#             */
/*   Updated: 2022/12/16 14:31:55 by jniedens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *s)
{
	long int	res;
	int			sign;

	sign = 1;
	res = 0;
	while ((*s >= 9 && *s <= 13) || *s == ' ')
		++s;
	if (*s == '-')
		sign = -1;
	if (*s == '-' || *s == '+')
		++s;
	while (ft_isdigit(*s))
	{
		res = res * 10 + (*s - 48);
		++s;
	}
	return (res * sign);
}
