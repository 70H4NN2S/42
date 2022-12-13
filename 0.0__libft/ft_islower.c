/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jniedens <jniedens@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 00:10:39 by jniedens          #+#    #+#             */
/*   Updated: 2022/12/13 00:16:55 by jniedens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_islower(int c)
{
  return (c >= 'a' && c <= 'z');
}
/*
also some strange behavior with 
int main(void)
{
  printf("%d\n", ft_islower('b'));
  printf("%d", islower('b'));
}
*/