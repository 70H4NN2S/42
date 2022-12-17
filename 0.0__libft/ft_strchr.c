/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jniedens <jniedens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 15:47:31 by jniedens          #+#    #+#             */
/*   Updated: 2022/12/17 16:35:30 by jniedens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t			i;
	unsigned char	uc;

	i = 0;
	uc = (unsigned char) c;
	while (s[i])
	{
		if (s[i] == uc)
			return (&s[i]);
		i++;
	}
	if (!uc)
		return (&s[i]);
	return (NULL);
}
