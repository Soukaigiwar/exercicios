#include <stdio.h>

int	main(void)
{
	float	value_a;
	float	value_b;
	char	*operator;
	float	result;

	result = 1000.55;

	printf("Digite um valor: ");
	scanf("%f", &value_a);
	printf("Escolha entre [+] [-] [*] [/] : ");
	scanf("%s", operator);
	printf("Digite outro valor: ");
	scanf("%f", &value_b);

	switch (*operator)
	{
	case '+':
		result = value_a + value_b;
		printf("%.2f %s %.2f = %.2f\n", value_a, operator, value_b, result);
		break;
	case '-':
		result = value_a - value_b;
		printf("%.2f %s %.2f = %.2f\n", value_a, operator, value_b, result);
		break;
	case '*':
		result = value_a * value_b;
		printf("%.2f %s %.2f = %.2f\n", value_a, operator, value_b, result);
		break;
	case '/':
		result = value_a / value_b;
		printf("%.2f %s %.2f = %.2f\n", value_a, operator, value_b, result);
		break;
	default:
		printf("Operador inválido.");
		break;
	}
	return (0);
}
