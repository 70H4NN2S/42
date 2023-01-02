/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jniedens <jniedens@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 11:33:24 by jniedens          #+#    #+#             */
/*   Updated: 2023/01/02 10:31:51 by jniedens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int		ft_printf(const char *str, ...);
int		ft_putchar(char c);
int		ft_puthexlow(unsigned int n, int count);
int		ft_puthexup(unsigned int n, int count);
int		ft_putnbr(int n, int count);
int		ft_putstr(char *s);
int		ft_putunbr(unsigned int n, int count);
int		ft_putvoidhex(unsigned long long n, int count);

#endif
