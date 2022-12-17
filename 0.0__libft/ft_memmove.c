/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jniedens <jniedens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 18:45:53 by jniedens          #+#    #+#             */
/*   Updated: 2022/12/16 23:50:14 by jniedens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dst && !src)
		return (NULL);
	d = (unsigned char *) dst;
	s = (unsigned char *) src;
	if (s < d)
	{
		d = (unsigned char *) dst + n - 1;
		s = (unsigned char *) src + n - 1;
		while (d >= (unsigned char *) dst)
			*(d--) = *(s--);
	}
	else
		ft_memcpy(dst, src, n);
	return (dst);
}
