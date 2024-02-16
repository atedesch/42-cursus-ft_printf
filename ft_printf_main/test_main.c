/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atedesch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 22:20:47 by atedesch          #+#    #+#             */
/*   Updated: 2024/02/16 22:29:38 by atedesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf/ft_printf.h"
#include "../ft_printf/*.c"

int main(void)
{
	int numero = 42;
	char carattere = 'a';
	char *stringa = "Ciao mondo!";
	
	ft_printf("Il numero è: %d\n", numero);
	ft_printf("Il carattere è: %c\n", carattere);
	ft_printf("La stringa è: %s\n", stringa);
	ft_printf("Hexadecimale: %x\n", numero);
	ft_printf("Esadecimale maiuscolo: %X\n", numero);
	ft_printf("Pointer: %p\n", &numero);
	ft_printf("Percentuale %%: %%%%\n");
	return (0);
}
