/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jniedens <jniedens@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 22:22:20 by jniedens          #+#    #+#             */
/*   Updated: 2022/12/24 17:15:27 by jniedens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*newstr;

	len = ft_strlen(s);
	newstr = (char *) malloc(sizeof(char) * (len + 1));
	if (!newstr)
		return (NULL);
	return ((char *) ft_memcpy(newstr, s, (len + 1)));
}
