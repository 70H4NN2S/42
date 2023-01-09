/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jniedens <jniedens@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 15:25:24 by jniedens          #+#    #+#             */
/*   Updated: 2023/01/09 23:15:09 by jniedens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	ft_read_and_append(char **buffer, int fd)
{
	char	*temp;
	char	*buf;
	int		size;

	buf = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
		return (-1);
	size = read(fd, buf, BUFFER_SIZE);
	while (size > 0)
	{
		buf[size] = '\0';
		temp = *buffer;
		*buffer = ft_strjoin(*buffer, buf);
		free(temp);
		if (ft_strchr(*buffer, '\n'))
			break ;
		size = read(fd, buf, BUFFER_SIZE);
	}
	free(buf);
	return (size);
}



char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*line;
	int			size;

	if (fd < 0 || BUFFER_SIZE < 1)
		return (NULL);
	size = ft_read_and_append(&buffer, fd);
	if (size < 0)
		return (NULL);
	if (size == 0 && !buffer)
		return (NULL);
	line = ft_save_and_clear(&buffer);
	return (line);
}
