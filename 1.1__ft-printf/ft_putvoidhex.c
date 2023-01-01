/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putvoidhex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jniedens <jniedens@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 10:22:42 by jniedens          #+#    #+#             */
/*   Updated: 2023/01/01 21:19:59 by jniedens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putvoidhex(unsigned long long n, int count)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (n >= 16)
	{
		count += ft_putvoidhex(n / 16, count);
		count += ft_putvoidhex(n % 16, count);
	}
	else
	{
		write(1, &hex[n], 1);
		count++;
	}
	return (count);
}
