/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jniedens <jniedens@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 11:33:24 by jniedens          #+#    #+#             */
/*   Updated: 2023/01/01 11:44:39 by jniedens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int		ft_printf(const char *str, ...);
void	ft_putchar(char c);
void	ft_puthexlow(unsigned int n);
void	ft_puthexup(unsigned int n);
void	ft_putnbr(int n);
void	ft_putstr(char *s);
void	ft_putunbr(unsigned int n);
void	ft_putvoidhex(unsigned long long n);

#endif
