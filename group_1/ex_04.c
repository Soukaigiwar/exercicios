#include <stdio.h>

int main(void){

    double  temperature_double = 98;
    int     temperature_int = 98.0;
    double  celsius_double;
    int     celsius_int;

    printf("Digite uma temperatura em Fahrenheit para ser convertida: ");
    scanf("%i", &temperature_int);
    scanf("%i", &temperature_double);
    celsius_int = (int)(temperature_int - 32) * (5.0 / 9.0);
    celsius_double = (temperature_double - 32.0) * (5.0 / 9.0);
    printf("\nResultado Inteiro: ");
    printf("\nA temperatura convertida em graus Celsius é: %d", celsius_int);
    printf("\nResultado Decimal: ");
    printf("\nA temperatura convertida em graus Celsius é: %.2f", celsius_double);

    return (0);
}