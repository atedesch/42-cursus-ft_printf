/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atedesch <atedesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 22:02:49 by atedesch          #+#    #+#             */
/*   Updated: 2024/02/21 17:55:26 by atedesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_type(va_list args, const char c)
{
	int	len;

	len = 0;
	if (c == 'c')
		len = len + ft_putchar(va_arg(args, int));
	if (c == 's')
		len = len + ft_putstr(va_arg(args, char *));
	/*if (c == 'p')
		len = len + ft_putpointer(va_arg(args, unsigned long long));
	if (c == 'd')
		len = len + ft_putnbr(va_arg(args, int));
	if (c == 'i')
		len = len + ft_putnbr(va_arg(args, int));
	if (c == 'u')
		len = len + ft_putunsigned(va_arg(args, unsigned int));
	if (c == 'x')
		len = len + ft_puthex(va_arg(args, unsigned int), c);
	if (c == 'X')
		len = len + ft_puthex(va_arg(args, unsigned int), c);*/
	if (c == '%')
		len = len + ft_putchar('%');
	return (len);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		len;

	va_start(args, str);
	i = 0;
	len = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			len = len + check_type(args, str[i + 1]);
			i++;
		}
		else
		{
			ft_putchar(str[i]);
			len++;
		}
		i++;
	}
	va_end(args);
	return (len);
}
