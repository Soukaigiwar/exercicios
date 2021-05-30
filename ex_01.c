/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex_01.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shenriqu <shenriqu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 22:41:52 by shenriqu          #+#    #+#             */
/*   Updated: 2021/05/28 23:19:46 by shenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// http://www.telecom.uff.br/
// ~marcos/protocolos/www.cic.unb.br/
// docentes/jacobi/Extensao/ListaExerc.pdf

// Fazer um programa em C que pergunta um valor em metros e imprime o
// correspondente em decímetros, centímetros e milímetros.

#include <stdio.h>

int	main(void)
{
	int	valor_lido;
	int	valor_decimetros;
	int	valor_centimetros;
	int	valor_milimetros;

	valor_lido = 0;
	printf("Escreva o valor desejado em metros: ");
	scanf("%i", &valor_lido);
	valor_decimetros = valor_lido * 10;
	valor_centimetros = valor_lido * 100;
	valor_milimetros = valor_lido * 1000;
	printf("O valor convertido em:\n");
	printf("Decímetros foi: %i dm. \n", valor_decimetros);
	printf("Centímetros foi: %i cm. \n", valor_centimetros);
	printf("Milímetros foi: %i mm. \n", valor_milimetros);
	return (0);
}
