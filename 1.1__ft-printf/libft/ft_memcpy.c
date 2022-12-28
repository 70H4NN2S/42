/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jniedens <jniedens@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 19:44:47 by jniedens          #+#    #+#             */
/*   Updated: 2022/12/23 12:13:29 by jniedens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dest, const void *restrict src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dest && ! src)
		return (NULL);
	d = (unsigned char *) dest;
	s = (unsigned char *) src;
	while (n--)
		*(d++) = *(s++);
	return (dest);
}
