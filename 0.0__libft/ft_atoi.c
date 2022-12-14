/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jniedens <jniedens@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 15:51:06 by jniedens          #+#    #+#             */
/*   Updated: 2022/12/14 16:07:47 by jniedens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *s)
{
  long int  res;
  int   sign;

  sign = 1;
  res = 0;
  while (ft_isspace(*s))
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
