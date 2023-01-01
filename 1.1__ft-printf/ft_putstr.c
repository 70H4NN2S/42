/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jniedens <jniedens@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 23:14:20 by jniedens          #+#    #+#             */
/*   Updated: 2023/01/01 22:27:48 by jniedens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int		i;
	char	*str;

	i = 0;
	if (s == NULL)
	{
		str = "(null)";
		while (str[i])
			i++;
		write(1, str, i);
		return (i);
	}
	while (s[i])
		i++;
	write(1, s, i);
	return (i);
}
