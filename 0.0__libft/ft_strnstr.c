/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jniedens <jniedens@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 22:49:37 by jniedens          #+#    #+#             */
/*   Updated: 2022/12/20 21:41:36 by jniedens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[0] == '\0' || big == little)
		return (&big[0]);
	while (len-- && big[i])
	{
		if (big[i] == little[j])
		{
			while (big[i + j] == little[j] && little[j] && (len - j))
			{
				j++;
			}
			if (!little[j])
				return (&big[i]);
		}
		j = 0;
		i++;
	}
	return (NULL);
}
