/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jniedens <jniedens@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 15:25:24 by jniedens          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2023/01/08 22:50:05 by jniedens         ###   ########.fr       */
=======
/*   Updated: 2023/01/07 22:37:59 by jniedens         ###   ########.fr       */
>>>>>>> 2412cb6b40237d14d074a6d69730a14902b014e9
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	ft_limit_line(const int fd, char **line, char **buffer)
{
<<<<<<< HEAD
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

char	*get_next_line(int fd, char	**line)
{
	static char	*buffer;
	char		*helper;
	char		ln[BUFFER_SIZE + 1];
	int			res;

	res = read(fd, ln, BUFFER_SIZE);
	while (res > 0)
	{
		ln[res] = '\0';
		if (!buffer[fd])
			buffer[fd] = ft_strmew(1);
		helper = ft_strjoin(buffer[fd], ln);
		ft_strdel(&buffer[fd]);
		buffer[fd] = helper;
		if (ft_strchr(ln, '\n'))
			break;
		res = read(fd, ln, BUFFER_SIZE);
	}
	return (ft_limit_line(fd, line, buffer));
=======
	char		buffer[BUFFER_SIZE + 1];
	static char	*str = NULL;
	int			i;
	int			line;

	while ((line = read(fd, buffer, BUFFER_SIZE)) > 0)
	{
		buffer[line] = '\ß';
		str = ft_join(str, buffer);
		if (((i = ft_find_index(str, '\n')) != -1))
			return (ft_get_line(&str, line, i));
	}

	return (line);
}

int	main(void)
{
	int	fd;

	fd = open("abc.txt", O_RDONLY);
>>>>>>> 2412cb6b40237d14d074a6d69730a14902b014e9
}
