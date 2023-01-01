/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putvoidhex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jniedens <jniedens@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 10:22:42 by jniedens          #+#    #+#             */
/*   Updated: 2023/01/01 10:37:59 by jniedens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putvoidhex(unsigned long long n)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (n >= 16)
		ft_putvoidhex(n / 16);
	ft_putchar(hex[n % 16]);
}
