#include <stdio.h>

int	factorial(int number)
{
	int	result;
	int	i;

	result = number;
	i = number;
	while (i-- > 1)
		result *= i;
	return (result);
}

int	factorial_recursive(int number)
{
	int	result;

	result = number;
	if (number-- > 1)
		return (result *= factorial_recursive(number));
	return (result);
}

int	main(void)
{
	int	number;

	number = 6;
	printf("\nO fatorial de %d é: %d.\n", number, factorial(number));
	printf("\nO fatorial (recursivo) de %d é: ", number);
	printf("%d.\n", factorial_recursive(number));
	return (0);
}
