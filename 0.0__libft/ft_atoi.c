/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jniedens <jniedens@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 15:51:06 by jniedens          #+#    #+#             */
/*   Updated: 2022/12/15 14:57:45 by jniedens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *s)
{
  long int  res;
  int   sign;

  sign = 1;
  res = 0;
  while ((*s >= 9 && *s <= 13) || *s == ' ')
    ++s;
  if (*s == '-')
    sign = -1;
  if (*s == '-' || *s == '+')
    ++s;
  while (ft_isdigit(*s))
  {
    res = res * 10 + (*s - 48);
    ++s;
  }
  return (res * sign);
}

/* String in, int out */
/* 
int main () {
  
  char test[50];

  while (1) {
    printf("Enter a value('e' to exit): ");
    scanf("%s", test);
    if (test[0] == 'e' && test[1] == '\0')
      break;
    printf("Original function: %d\n", atoi(test));
    printf("Actual function: %d\n\n", ft_atoi(test));
  }
}
*/