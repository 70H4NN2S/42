/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jniedens <jniedens@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 15:25:24 by jniedens          #+#    #+#             */
/*   Updated: 2023/01/10 00:00:19 by jniedens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>


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

static char	*ft_save_and_clear(char **buffer)
{
	char	*line;
	char	*temp;

	if (ft_strchr(*buffer, '\n'))
	{
		line = ft_strdupchar(*buffer, '\n');
		temp = *buffer;
		*buffer = ft_strdup(ft_strchr(*buffer, '\n') + 1);
		free(temp);
	}
	else
	{
		line = ft_strdup(*buffer);
		free(*buffer);
		*buffer = NULL;
	}
	return (line);
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

int	main(void)
{
	int	fd = open("test.txt", O_RDONLY);
	char *line;
	int i;

	i = 1;
	while (i < 30)
	{
		(line = get_next_line(fd));
		printf("%2d| %s", i, line);
		if (!line)
			printf("\n");
		free(line);
		++i;
	}
	close(fd);
	return (0);
}
