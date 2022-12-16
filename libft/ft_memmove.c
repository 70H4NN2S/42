/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jniedens <jniedens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 18:45:53 by jniedens          #+#    #+#             */
/*   Updated: 2022/12/16 16:00:29 by jniedens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*ptr_dest;
	char		*ptr_src;
	char		*last_src;
	char		*last_dest;

	ptr_dest = dest;
	ptr_src = src;
	if (ptr_dest < ptr_src)
		while (n--)
			*ptr_dest++ = *ptr_src++;
	else
	{
		*last_src = ptr_src + (n - 1);
		*last_dest = ptr_dest + (n - 1);
		while (n--)
			*last_dest-- = *last_src--;
	}
	return (dest);
}
