#include <stdio.h>

int main() {

  int read_value;
  
  read_value = 0;
  
  printf("Digite qualquer número inteiro: ");
  scanf("%i", &read_value);
  printf("\nO valor digitado em Hexadecimal é: %x.", read_value);
  printf("\nO valor digitado em Octadecimal é: %o.", read_value);
  return 0;
}
