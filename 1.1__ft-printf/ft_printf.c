/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jniedens <jniedens@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 11:49:38 by jniedens          #+#    #+#             */
/*   Updated: 2023/01/01 10:57:55 by jniedens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		n = 147483648;
	}
	if (n < 0)
	{
		ft_putchar('-');
		n = n * -1;
	}
	if (n >= 10)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + '0');
}

void	ft_putunbr(unsigned int n)
{
	if (n >= 10)
		ft_putunbr(n / 10);
	ft_putchar(n % 10 + '0');
}

void	ft_puthexlow(unsigned int n)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (n >= 16)
		ft_puthexlow(n / 16);
	ft_putchar(hex[n % 16]);
}

void	ft_puthexup(unsigned int n)
{
	char	*hex;

	hex = "0123456789ABCDEF";
	if (n >= 16)
		ft_puthexup(n / 16);
	ft_putchar(hex[n % 16]);
}

void	ft_putvoidhex(unsigned long long n)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (n >= 16)
		ft_putvoidhex(n / 16);
	ft_putchar(hex[n % 16]);
}

void	ft_check(char c, va_list args)
{
	if (c == 'c')
		ft_putchar(va_arg(args, int));
	else if (c == 's')
		ft_putstr(va_arg(args, char *));
	else if (c == 'd')
		ft_putnbr(va_arg(args, int));
	else if (c == 'u')
		ft_putunbr(va_arg(args, unsigned int));
	else if (c == 'x')
		ft_puthexlow(va_arg(args, unsigned int));
	else if (c == 'X')
		ft_puthexup(va_arg(args, unsigned int));
	else if (c == 'p')
		ft_putvoidhex(va_arg(args, unsigned long));
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;

	i = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			if (str[i] == '%')
				ft_putchar('%');
			else
				ft_check(str[i], args);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (0);
}

int		main(void)
{
	//No Flag
	printf("\nprintf no flag string test\n");
	ft_printf("ft_printf no flag string test\n");

	//%%
	printf("printf\t\t: ");
	printf("%%\n");
	ft_printf("ft_printf\t: ");
	ft_printf("%%\n");

	//d
	printf("printf\t\t: ");
	printf("%d\n", 650);
	ft_printf("ft_printf\t: ");
	ft_printf("%d\n", 650);
    return (0);
}
