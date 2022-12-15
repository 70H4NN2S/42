/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jniedens <jniedens@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 00:17:34 by jniedens          #+#    #+#             */
/*   Updated: 2022/12/15 15:21:20 by jniedens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalpha(int c)
{
  return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}

/*
int main () {
  
  char test[50];

  while (1) {
    printf("Enter a value('e' to exit): ");
    scanf("%s", test);
    if (test[0] == 'e' && test[1] == '\0')
      break;
    printf("Original function: %d\n", isalpha(test[0]));
    printf("Actual function: %d\n\n", ft_isalpha(test[0]));
  }
}
*/