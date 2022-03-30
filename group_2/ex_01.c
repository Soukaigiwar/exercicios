#include <stdio.h>

int	main(void)
{
	int	first;
	int	second;

	printf("Digite o primeiro valor: ");
	scanf("%d", &first);
	printf("Digite o segundo valor: ");
	scanf("%d", &second);
	if (first == second)
	{
		printf("\nValores iguais\n");
	}
	else if (first < second)
	{
		printf("\nPrimeira lista:");
		printf("\nPrimeiro número: %d", first);
		printf("\nSegundo número: %d", second);
		printf("\nSegunda lista:");
		printf("\nSegundo número: %d", second);
		printf("\nPrimeiro número: %d\n", first);
	}
}
