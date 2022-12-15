/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jniedens <jniedens@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:26:23 by jniedens          #+#    #+#             */
/*   Updated: 2022/12/15 15:16:27 by jniedens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isdigit(int c)
{
  return (c >= '0' && c <= '9');
}

/*
int main () {
  
  char test[50];

  while (1) {
    printf("Enter a value('e' to exit): ");
    scanf("%s", test);
    if (test[0] == 'e' && test[1] == '\0')
      break;
    printf("Original function: %d\n", ft_isdigit(test[0]));
    printf("Actual function: %d\n\n", isdigit(test[0]));
  }
}
*/