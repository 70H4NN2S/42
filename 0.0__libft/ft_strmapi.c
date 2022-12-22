/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jniedens <jniedens@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 18:38:52 by jniedens          #+#    #+#             */
/*   Updated: 2022/12/22 18:49:47 by jniedens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*newstr;
	size_t	len;
	size_t	i;

	if (!s)
		return (ft_strdup(""));
	len = ft_strlen(s);
	newstr = (char *) malloc(sizeof(char) * (len + 1));
	if (!newstr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		newstr[i] = (*f)(i, s[i]);
		++i;
	}
	newstr[i] = 0;
	return (newstr);
}
