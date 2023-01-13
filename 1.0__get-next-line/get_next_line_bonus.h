/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jniedens <jniedens@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 17:28:59 by jniedens          #+#    #+#             */
/*   Updated: 2023/01/13 23:51:02 by jniedens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# ifndef MAX_FD
#  define MAX_FD 1024
# endif

# include <stdlib.h>
# include <unistd.h>

char	*get_next_line(int fd);

/* Utils */

size_t	ft_strlen(const char *str);
char	*ft_strdup(const char *str);
char	*ft_strjoin(char const *str1, char const *str2);
char	*ft_strchr(const char *str, int c);
char	*ft_substr(char const *str, unsigned int start, size_t len);

#endif
