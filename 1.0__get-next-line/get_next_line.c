/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jniedens <jniedens@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 15:25:24 by jniedens          #+#    #+#             */
/*   Updated: 2023/01/06 21:18:52 by jniedens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char		*buffer;
	static char	*str;
	int			i;

	return (str);
}

int	main(void)
{
	int		fd;
	char	buff[1000];

	fd = open("abc.txt", O_CREAT | O_RDONLY);
	printf("Filedescriptor: %d", fd);
}
