/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jniedens <jniedens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 15:25:24 by jniedens          #+#    #+#             */
/*   Updated: 2022/12/28 10:13:30 by jniedens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "libft/libft.h"
#define BUFF_SIZE  32

int	get_next_line(int const fd, char **line)
{
    char buffer[BUFF_SIZE + 1];
    size_t i;
    size_t size;

    if (!(*line = malloc(BUFF_SIZE)))
        return (-1);
    *line[0] = '\0';
    while (read(fd, buffer, BUFF_SIZE) > 0)
    {
        buffer[BUFF_SIZE + 1] = '\0';
        if (buffer[0] == '\n')
            return (1);
        if (ft_strchr(buffer, '\n') != NULL)
        {
            i = 0;
            size = ft_strlen(*line);
            buffer[BUFF_SIZE + 1] = '\0';
            while (buffer[i] != '\0')
            {
                if (buffer[i] == '\n')
                {
                    if (!(*line = realloc(*line, i + size)))
                        return (-1);
                    buffer[i] = '\0';
                    ft_strncat(*line, buffer, i);
                    return (1);
                }
                i++;
            }
        }
        if (!(*line = realloc(*line, BUFF_SIZE)))
            return (-1);
        ft_strncat(*line, buffer, BUFF_SIZE);
    }
    return (0);
}

int     main(void)
{
    int     fd;
    int     ret;
    char    *line;

    if ((fd = open("main.c", O_RDONLY)) < 3 && fd != 0)
        return (-1);
    printf("%d\n", fd);
    ret = get_next_line(fd, &line);
    printf("%d - %s\n", ret, line);
    ret = get_next_line(fd, &line);
    printf("%d - %s\n", ret, line);
    ret = get_next_line(fd, &line);
    printf("%d - %s\n", ret, line);
    ret = get_next_line(fd, &line);
    printf("%d - %s\n", ret, line);
    return (0);
}