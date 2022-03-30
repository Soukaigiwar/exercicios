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
	int	value;
	int	decimeters_value;
	int	centimeters_value;
	int	millimeters_value;

	value = 0;
	printf("Escreva o valor desejado em metros: ");
	scanf("%i", &value);
	decimeters_value = value * 10;
	centimeters_value = value * 100;
	millimeters_value = value * 1000;
	printf("O valor convertido em:\n");
	printf("Decímetros foi: %i dm. \n", decimeters_value);
	printf("Centímetros foi: %i cm. \n", centimeters_value);
	printf("Milímetros foi: %i mm. \n", millimeters_value);
	return (0);
}
