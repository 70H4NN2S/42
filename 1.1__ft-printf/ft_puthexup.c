/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jniedens <jniedens@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 10:33:18 by jniedens          #+#    #+#             */
/*   Updated: 2023/01/01 21:07:53 by jniedens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexup(unsigned int n, int count)
{
	char	*hex;

	hex = "0123456789ABCDEF";
	if (n >= 16)
	{
		count += ft_puthexup(n / 16, count);
		count += ft_puthexup(n % 16, count);
	}
	else
	{
		write(1, &hex[n], 1);
		count++;
	}
	return (count);
}
