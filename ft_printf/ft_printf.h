/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atedesch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 21:41:17 by atedesch          #+#    #+#             */
/*   Updated: 2024/02/16 22:04:00 by atedesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <stdarg.h>

# ifdef __APPLE__
#  define NIL_STRING "0x0"
# endif
# ifdef __unix__
#  define NIL_STRING "(nil)"
# endif

int		ft_putchar(char c);
int		ft_putstr(char *s);
char	*ft_itoa(int n);

int		ft_printf(const char *str, ...);
int		ft_putnbr(int n);
int		ft_puthex(unsigned int n, char c);
int		ft_putunsigned(unsigned int n);
int		ft_putpointer(unsigned long long n);

#endif