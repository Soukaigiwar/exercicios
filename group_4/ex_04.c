#include <stdio.h>

int	options(int total);

void	main_menu(void)
{
	float	total;
	int		option;

	printf("\nDigite o total gasto ou 0 para sair R$ ");
	scanf("%f", &total);
	if (total == 0)
		options(0);
	options(total);
	printf("\n\n");
}

void	option_1(float total)
{
	total *= 0.9;
	printf("\nValor total com essa opção foi R$ %.2f", total);
}

void	option_2(float total)
{
	total *= 0.5;
	printf("\nPague em 2x de R$ %.2f", total);
}

void	option_3(float total, int installments)
{
	total = (total / installments) * (1 + (0.03 * installments));
	printf("\nCom essa opção, voce paga\n");
	printf("%d parcelas de R$ %.2f ", installments, total);
	printf("que da o total de R$ %.2f\n", installments * total);
}

int	options(int total)
{
	int	option;
	int	installments;

	if (total == 0)
	{
		printf("Até logo. Volte sempre!\n");
		return (0);
	}
	printf("\nForma de pagamento:\t");
	printf("\n\t\t1 - A vista com 10 porcento de desconto.");
	printf("\n\t\t2 - Duas vezes com o preço da etiqueta.");
	printf("\n\t\t3 - De 3 a 10 vezes com juros de 3 porcento ao mês");
	printf("\n\t\t    Somente para compras acima de R$ 100,00\n");
	printf("\n\t\t0 - Sair.\n");
	scanf("%d", &option);
	switch (option)
	{
		case 1:
			option_1(total);
			break;
		case 2:
			option_2(total);
			break;
		case 3:
			printf("\nDigite quantas parcelas de 3 até 10:\n");
			scanf("%d", &installments);
			if (installments > 2 && installments < 11)
				option_3(total, installments);
			break;
		case 0:
			printf("Até logo. Volte sempre!\n");
			break;
		default:
			printf("Erro na opção selecionada.\n");
			main_menu();
			break;
	}
}


int	main(void)
{
	main_menu();
	return (0);
}
