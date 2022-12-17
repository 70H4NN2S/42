/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jniedens <jniedens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 16:41:56 by jniedens          #+#    #+#             */
/*   Updated: 2022/12/17 17:03:09 by jniedens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (NULL);
	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n - 1)
		++i;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
