/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atedesch <atedesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 19:12:53 by atedesch          #+#    #+#             */
/*   Updated: 2024/02/21 19:33:04 by atedesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	char	*string_out;
	int		len;

	string_out = ft_itoa(n);
	len = ft_putstr(string_out);
	free(string_out);
	return (len);
}
