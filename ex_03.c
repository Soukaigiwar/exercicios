#include <stdio.h>

int main() {

  int value;
  
  value = 0;
  
  printf("Digite qualquer número inteiro: ");
  scanf("%i", &value);
  printf("\nO valor digitado em Hexadecimal é: %x.", value);
  printf("\nO valor digitado em Octadecimal é: %o.", value);
  return (0);
}
