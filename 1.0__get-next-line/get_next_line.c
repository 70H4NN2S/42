/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jniedens <jniedens@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 15:25:24 by jniedens          #+#    #+#             */
/*   Updated: 2023/01/07 22:37:59 by jniedens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
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
}
