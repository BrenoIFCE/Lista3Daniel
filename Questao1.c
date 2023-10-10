#include <stdio.h>
#include <stdlib.h>

#define TAM 15

int main(void) {

  float vetor[TAM];
  float maior, menor;

  puts("Insira os 15 elementos do vetor: ");
  for (int i = 0; i < 15; i++) {
    printf("Elemento %d:", i + 1);
    scanf("%f", &vetor[i]);

    if (i == 0) {
      maior = vetor[i];
      menor = vetor[i];
    } else {
      if (vetor[i] > maior)
        maior = vetor[i];
      if (vetor[i] < menor)
        menor = vetor[i];
    }
  }
  float total = maior + menor;
  printf("A soma do maior e do menor elemento é %.2f", total);

  return 0;
}
