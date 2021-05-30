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
	int	multiplicando;
	int	multiplicador;
	int	produto;

	multiplicando = 1;
	multiplicador = 1;
	while (multiplicando < 10)
	{
		printf("Tabuada do %i \n", multiplicando);
		while (multiplicador <= 10)
		{
			produto = multiplicando * multiplicador;
			printf("%i X %i = %i\n", multiplicando, multiplicador, produto);
			multiplicador++;
		}
		multiplicador = 1;
		multiplicando++;
		printf("\n");
	}
	return (0);
}
