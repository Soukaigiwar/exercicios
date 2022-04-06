#include <stdio.h>

int main(void)
{
    float   total;
    int     option;
    char    pay_method[3];

    printf("Digite o total gasto:");
    scanf("%.2f", &total);
    printf("\nForma de pagamento:\t");
    printf("\n\t\t\t\t01 - A vista com 10% de desconto.");
    printf("\n\t\t\t\t02 - Duas vezes com o preço da etiqueta.");
    printf("\n\t\t\t\t03 - De 3 a 10 vezes com juros de 3% ao mês");
    printf("\n\t\t\t\t\tSomente para compras acima de R$ 100,00");
    scanf("%d", &option);
    return (0);
}