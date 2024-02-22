/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atedesch <atedesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 21:20:58 by atedesch          #+#    #+#             */
/*   Updated: 2024/02/22 21:21:24 by atedesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	get_size(unsigned int n)
{
	int	size;

	size = 0;
	while (n != 0)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

static void	print_unsigned(unsigned int n)
{
	if (n > 9)
	{
		print_unsigned(n / 10);
		print_unsigned(n % 10);
	}
	else
		ft_putchar(n + '0');
}

int	ft_putunsigned(unsigned int n)
{
	if (n == 0)
		return (ft_putchar('0'));
	print_unsigned(n);
	return (get_size(n));
}
