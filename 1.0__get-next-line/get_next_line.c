/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jniedens <jniedens@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 15:25:24 by jniedens          #+#    #+#             */
/*   Updated: 2023/01/11 15:39:47 by jniedens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/**
 * @brief	get line from buffer
 *
 * @param	char 	**buffer	pointer to buffer string
 * @return	char	*line		line read from buffer
 */
static char	*ft_get_line(char **buffer)
{
	char	*line;
	char	*temp;
	char	*len;

	len = ft_strchr(*buffer, '\n');
	if (len)
	{
		line = ft_substr(*buffer, 0, len - *buffer + 1);
		temp = ft_strdup(len + 1);
		free(*buffer);
		*buffer = temp;
		if (!**buffer)
		{
			free(*buffer);
			*buffer = NULL;
		}
		return (line);
	}
	else
	{
		line = ft_strdup(*buffer);
		free(*buffer);
		*buffer = NULL;
	}
	return (line);
}

/**
 * @brief	read data from fd and append it to line string until newline is found
 *
 * @param	int		fd			file descriptor
 * @param	char	**buffer	pointer to buffer string
 * @return	int		bytes_read	last bytes read from fd
 */
static int	ft_read(int fd, char **buffer)
{
	char	*temp;
	char	*buf;
	int		bytes_read;

	buf = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
		return (-1);
	bytes_read = read(fd, buf, BUFFER_SIZE);
	while (bytes_read > 0)
	{
		buf[bytes_read] = '\0';
		if (!*buffer)
			*buffer = ft_strdup(buf);
		else
		{
			temp = ft_strjoin(*buffer, buf);
			free(*buffer);
			*buffer = temp;
		}
		if (ft_strchr(*buffer, '\n'))
			break ;
		bytes_read = read(fd, buf, BUFFER_SIZE);
	}
	free(buf);
	return (bytes_read);
}

/**
 * @brief	returns a line read from a file descriptor
 *
 * @param	int		fd	file descriptor
 * @return	char*		line read from file descriptor
 */
char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*line;
	int			bytes_read;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	bytes_read = ft_read(fd, &buffer);
	if (bytes_read < 0)
		return (NULL);
	if (!bytes_read && !buffer)
		return (NULL);
	line = ft_get_line(&buffer);
	return (line);
}
