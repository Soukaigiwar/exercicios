/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex_02.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shenriqu <shenriqu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 22:41:52 by shenriqu          #+#    #+#             */
/*   Updated: 2021/05/28 23:52:14 by shenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// http://www.telecom.uff.br/
// ~marcos/protocolos/www.cic.unb.br/
// docentes/jacobi/Extensao/ListaExerc.pdf

//Fazer um programa em C que imprime uma tabela com a tabuada de 1 a 9

#include <stdio.h>

int	main(void)
{
	int	multiplicand;
	int	multiplier;
	int	product;

	multiplicand = 1;
	multiplier = 1;
	while (multiplicand < 10)
	{
		printf("Tabuada do %i \n", multiplicand);
		while (multiplier <= 10)
		{
			product = multiplicand * multiplier;
			printf("%i X %i = %i\n", multiplicand, multiplier, product);
			multiplier++;
		}
		multiplier = 1;
		multiplicand++;
		printf("\n");
	}
	return (0);
}
