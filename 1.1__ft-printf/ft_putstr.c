/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jniedens <jniedens@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 23:14:20 by jniedens          #+#    #+#             */
/*   Updated: 2023/01/02 10:40:30 by jniedens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	write(1, s, i);
	return (i);
}

int	ft_printstr(char *s)
{
	int	i;

	i = 0;
	if (s == NULL)
		return (ft_putstr("(null)"));
	else
		return (ft_putstr(s));
}
