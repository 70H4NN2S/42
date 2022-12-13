/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jniedens <jniedens@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 23:53:11 by jniedens          #+#    #+#             */
/*   Updated: 2022/12/13 00:17:10 by jniedens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isupper(int c)
{
  return (c >= 'A' && c <= 'Z');
}
/*
Strange behavior with the not zero returned value!!!


int main(void)
{
  printf("%d\n", ft_isupper('Z'));
  printf("%d", isupper(65));
  printf("%d\n", ft_isupper('A'));
  printf("%d", isupper(90));
}
*/