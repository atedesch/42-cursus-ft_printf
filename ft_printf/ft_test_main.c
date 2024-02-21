/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atedesch <atedesch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 22:20:47 by atedesch          #+#    #+#             */
/*   Updated: 2024/02/21 19:29:54 by atedesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	int		numero;
	int		numero2;
	int		num;
	char	carattere;
	char	*stringa;

	numero = 42;
	numero2 = 67;
	num = 42;
	carattere = 'a';
	stringa = "Ciao mondo!";
	ft_printf("Il numero (con i) è: %i\n", numero);
	ft_printf("Il numero (con d) è: %d\n", numero2);
	ft_printf("Conversione %%d: %d\n", num);
	ft_printf("Conversione %%i: %i\n", num);
	ft_printf("Conversione %%i con prefisso 0x: %i\n", 0x42);
	ft_printf("Conversione %%i con prefisso 0: %i\n", 052);
	ft_printf("Il carattere è: %c\n", carattere);
	ft_printf("La stringa è: %s\n", stringa);
	ft_printf("Hexadecimale: %x\n", numero);
	ft_printf("Esadecimale maiuscolo: %X\n", numero);
	ft_printf("Pointer: %p\n", &numero);
	ft_printf("Percentuale %%: %%%%\n");
	return (0);
}
