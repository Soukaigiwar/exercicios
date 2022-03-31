#include <stdio.h>

int	main(void)
{
	float	price;

	printf("Digite o preço do produto: ");
	scanf("%f", &price);
	if (price < 100)
		price *= 1.1;
	else
		price *= 1.2;
	printf("O novo preço é: %.2f\n", price);
	return (0);
}
