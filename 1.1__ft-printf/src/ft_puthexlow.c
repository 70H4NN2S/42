/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexlow.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jniedens <jniedens@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 10:32:23 by jniedens          #+#    #+#             */
/*   Updated: 2023/01/02 15:23:50 by jniedens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexlow(unsigned int n, int count)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (n >= 16)
	{
		count = ft_puthexlow(n / 16, count);
		count = ft_puthexlow(n % 16, count);
	}
	else
	{
		write(1, &hex[n], 1);
		count++;
	}
	return (count);
}
