/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jniedens <jniedens@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:34:43 by jniedens          #+#    #+#             */
/*   Updated: 2022/12/15 15:21:36 by jniedens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalnum(int c)
{
  return (ft_isalpha(c) || ft_isdigit(c));
}

/*
int main () {
  
  char test[50];

  while (1) {
    printf("Enter a value('e' to exit): ");
    scanf("%s", test);
    if (test[0] == 'e' && test[1] == '\0')
      break;
    printf("Original function: %d\n", isalnum(test[0]));
    printf("Actual function: %d\n\n", ft_isalnum(test[0]));
  }
}
*/