/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jniedens <jniedens@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 15:25:24 by jniedens          #+#    #+#             */
/*   Updated: 2023/01/09 23:11:55 by jniedens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	ft_limit_line(const int fd, char **line, char **buffer)
{
	char	*helper;

	if (ft_strchr(buffer[fd], '\n'))
	{
		*line = ft_strdupchr(buffer[fd], '\n');
		helper = ft_strdup(buffer[fd] + ft_strlen(*line) + 1);
		ft_strdel(&buffer[fd]);
		if (ft_strlen(helper) > 0)
			buffer[fd] = helper;
		else
			ft_strdel(&helper);
	}
	else if (buffer[fd])
	{
		*line = ft_strdup(buffer[fd]);
		ft_strdel(&buffer[fd]);
	}
	return (1);
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
