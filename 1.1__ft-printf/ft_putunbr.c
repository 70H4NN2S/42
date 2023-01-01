/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jniedens <jniedens@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 10:31:16 by jniedens          #+#    #+#             */
/*   Updated: 2023/01/01 21:18:28 by jniedens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunbr(unsigned int n, int count)
{
	if (n >= 10)
	{
		count += ft_putunbr(n / 10, count);
		count += ft_putunbr(n % 10, count);
	}
	else
	{
		write(1, &n, 1);
		count++;
	}
	return (count);
}
