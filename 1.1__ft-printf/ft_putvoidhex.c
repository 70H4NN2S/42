/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putvoidhex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jniedens <jniedens@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 10:22:42 by jniedens          #+#    #+#             */
/*   Updated: 2023/01/02 16:01:41 by jniedens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putpointer(unsigned long long n)
{
	int	len;

	len = ft_printstr("0x");
	if (n == 0)
		len += write(1, "0", 1);
	else
		len += ft_puthexlow(n, 0);
	return (len);
}
