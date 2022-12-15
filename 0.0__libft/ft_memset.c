/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jniedens <jniedens@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:09:59 by jniedens          #+#    #+#             */
/*   Updated: 2022/12/15 16:36:10 by jniedens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void  *ft_memset(void *s, int c, size_t n)
{
  unsigned char *ptr;

  ptr = (unsigned char*) s;
  while (n-- > 0)
    *(ptr++) = (unsigned char) c;
  return (s);
}
/*
int main () {
  char text[] = "abcdefghij";
  char *res = memset(text, '-', 5);
  char *ft_res = ft_memset(text, '-', 5);
  printf("memset   : %s\n", res);
  printf("ft_memset: %s\n", ft_res);
}
*/