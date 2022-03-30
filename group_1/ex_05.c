#include <stdio.h>
#include <math.h>

// Obs. to use math.h, compile with -lm flag

int	product(int first_n, int second_n)
{
	int	result;

	result = first_n * (second_n * second_n);
	return (result);
}

int	square(int number)
{
	return (number * number);
}

double	sum_of_square(int first_n, int second_n)
{
	int		result;
	double	soma_dos_quadrados;

	soma_dos_quadrados = (double)square(first_n) + square(second_n);
	return (soma_dos_quadrados);
}

int	modulus(int number)
{
	if (number < 0)
		return (-number);
	return (number);
}

int	main(void)
{
	int	first_n;
	int	second_n;

	printf("Digite um número:");
	scanf("%d", &first_n);
	printf("Digite outro agora: ");
	scanf("%d", &second_n);
	printf("\nA soma dos dois é: %d", first_n + second_n);
	printf("\nA multiplicação dos quadrados é: %d", product(first_n, second_n));
	printf("\nO quadrado do primeiro número é: %d", square(first_n));
	printf("\nA raiz quadrada da soma dos quadrados é: ");
	printf("%.2f", sqrt(sum_of_square(first_n, second_n)));
	printf("\nO módulo do primeiro número é: %d", modulus(first_n));
	printf("\n");
	return (0);
}
