/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jniedens <jniedens@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 15:09:23 by jniedens          #+#    #+#             */
/*   Updated: 2022/12/15 15:32:04 by jniedens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isascii(int c)
{
  return (c >= 0 && c <= 127);
}

/*
int main () {
  
  char test[50];

  while (1) {
    printf("Enter a value('e' to exit): ");
    scanf("%s", test);
    if (test[0] == 'e' && test[1] == '\0')
      break;
    printf("Actual function: %d\n\n", ft_isascii(test[0]));
  }
}
*/