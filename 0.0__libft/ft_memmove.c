/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jniedens <jniedens@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 18:45:53 by jniedens          #+#    #+#             */
/*   Updated: 2022/12/15 20:04:58 by jniedens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void  *ft_memmove(void *dest, const void *src, size_t n)
{
  char *ptr_dest = dest;
  const char  *ptr_src = src;
  if (ptr_dest < ptr_src)
    while (n--)
      *ptr_dest++ = *ptr_src++;
  else
  {
    const char *last_src = ptr_src + (n - 1);
    char *last_dest = ptr_dest + (n - 1);
    while (n--)
      *last_dest-- = *last_src--;
  }
  return dest;
}
/*
int main () {
   char dest[] = "oldhous";
   const char src[]  = "newshous";

   printf("Before memmove dest = %s, src = %s\n", dest, src);
   ft_memmove(dest, src, 5);
   printf("After memmove dest = %s, src = %s\n", dest, src);

   return(0);
}
*/