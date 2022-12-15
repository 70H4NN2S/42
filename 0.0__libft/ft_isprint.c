/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jniedens <jniedens@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 15:28:31 by jniedens          #+#    #+#             */
/*   Updated: 2022/12/15 15:38:39 by jniedens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isprint(int c)
{
  return (c >= 32 && c <= 126);
}

/*
int main () {
  
  char test = 'a';
  
  printf("Original function: %d\n", isprint(test));
  printf("Actual function: %d\n\n", ft_isprint(test));
}
*/