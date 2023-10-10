#include <stdio.h>
#include <stdlib.h>

#define TAM 50
int main(void) {
  char string[TAM], stringInvertida[TAM];
  int i, k, fim = 0;
  puts("Digite uma string:");
  fgets(string, TAM, stdin);

  while(string[fim] != '\0' && string[fim] != '\n') fim++;
  i = fim - 1;
  k = 0;
  while(k < fim)
  {
    stringInvertida[k] = string[i];
    i--;
    k++;
  }
  stringInvertida[k] = '\0';
  printf("String invertida:\n%s\n", stringInvertida);
  return 0;
}
