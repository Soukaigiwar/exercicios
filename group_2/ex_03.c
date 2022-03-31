#include <stdio.h>

int	main(void)
{
	float	price;

	printf("Digite o preço do produto: ");
	scanf("%f", &price);
	while (price < 100)
	{
		price *= 1.1;
		break ;
	}
	while (price >= 100)
	{
		price *= 1.2;
		break ;
	}
	printf("O novo preço é: %.2f\n", price);
	return (0);
}
