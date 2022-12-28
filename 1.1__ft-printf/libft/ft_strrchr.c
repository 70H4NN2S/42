/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jniedens <jniedens@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 14:59:54 by jniedens          #+#    #+#             */
/*   Updated: 2022/12/23 15:39:25 by jniedens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	n;

	n = ft_strlen(s) + 1;
	while (n--)
		if (s[n] == (unsigned char) c)
			return ((char *)&s[n]);
	return (NULL);
}
