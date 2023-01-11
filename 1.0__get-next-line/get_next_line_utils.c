/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jniedens <jniedens@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 00:09:58 by jniedens          #+#    #+#             */
/*   Updated: 2023/01/11 14:53:13 by jniedens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/**
 * @brief	Calculates the length of a string.
 *
 * @param	char	*str	The string to be measured.
 * @return	size_t	i		The length of the string.
 */
size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/**
 * @brief	duplicates a string
 *
 * @param	char	*str	string to be duplicated
 * @return	char	*cpy	duplicate of str
 */
char	*ft_strdup(const char *str)
{
	char	*cpy;
	size_t	i;

	i = 0;
	cpy = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (!cpy)
		return (NULL);
	while (str[i])
	{
		cpy[i] = str[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

/**
 * @brief	joins two strings
 *
 * @param	char const	*str1	string to be joined
 * @param	char const	*str2	string to be joined
 * @return	char		*str	result of the join
 */
char	*ft_strjoin(char const *str1, char const *str2)
{
	char	*str;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!str1 || !str2)
		return (NULL);
	str = (char *)malloc(sizeof(char)
			* (ft_strlen(str1) + ft_strlen(str2) + 1));
	if (!str)
		return (NULL);
	while (str1[i])
	{
		str[i] = str1[i];
		i++;
	}
	while (str2[j])
	{
		str[i] = str2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}

/**
 * @brief	searches for a character in a string
 *
 * @param	char	*str	string to be searched
 * @param	char	c		character to be searched for
 * @return	char* 			pointer to the first occurence of c in str or NULL
 */
char	*ft_strchr(const char *str, int c)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return ((char *)str + i);
		i++;
	}
	if (str[i] == c)
		return ((char *)str + i);
	return (NULL);
}

/**
 * @brief	create a substring from a string with a given start and length
 *
 * @param	char const		*str	string to be cut
 * @param	unsigned int	start	starting point of the substring
 * @param	size_t			len		length of the substring
 * @return	char			*sub	substring of str
 */
char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	i = 0;
	if (!str)
		return (NULL);
	if (start >= ft_strlen(str))
		return (ft_strdup(""));
	if (len > ft_strlen(str + start))
		len = ft_strlen(str + start);
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	while (i < len)
	{
		sub[i] = str[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
