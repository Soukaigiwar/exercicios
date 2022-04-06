#include <stdio.h>

void    options(void)
{
    printf("\n\t\t\t\t01 - A vista com 10% de desconto.");
    printf("\n\t\t\t\t02 - Duas vezes com o preço da etiqueta.");
    printf("\n\t\t\t\t03 - De 3 a 10 vezes com juros de 3% ao mês");
    printf("\n\t\t\t\t\tSomente para compras acima de R$ 100,00");
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
            printf("Digite quantas parcelas de 3 até 10:");
            scanf("%d", &installments);
            if (installments > 2 && installments < 11)
                option_3(total, installments);
                break;
        default:
            break;
    }
}

void    option_1(float total)
{
    total *= 0.9;
    printf("\nValor total com essa opção foi: %.2f", total);
}

void    option_2(float total)
{
    total *= 0.5;
    printf("\nPague em 2x de R$: %.2f", total);
}

void    option_3(float total, int installments)
{
    total = (total / installments) * (1 + (0.03 * installments);
    printf("\nValor total com essa opção foi: %.2f", total);
}

int main(void)
{
    float   total;
    int     option;
    int     installments;

    printf("Digite o total gasto:");
    scanf("%.2f", &total);
    printf("\nForma de pagamento:\t");
    options();
    printf("\n\n");
    return (0);
}
