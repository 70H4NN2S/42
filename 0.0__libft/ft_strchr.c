/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jniedens <jniedens@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 15:47:31 by jniedens          #+#    #+#             */
/*   Updated: 2022/12/23 15:54:42 by jniedens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	*ptr;
	unsigned char	chr;

	ptr = (unsigned char *) s;
	chr = (unsigned char) c;
	while (*ptr)
	{
		if (*ptr == chr)
			return (ptr);
		ptr++;
	}
	if (!chr)
		return (ptr);
	return (NULL);
}
