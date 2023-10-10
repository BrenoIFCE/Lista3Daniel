#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

#define LINHAS 3
#define COLUNAS 3

int main(void) {
  int i, j, matriz[LINHAS][COLUNAS];
  int x, contador = 0;
  srand(time(NULL));

  for (i = 0; i < LINHAS; i++) {
    for (j = 0; j < COLUNAS; j++) {
      matriz[i][j] = rand() % 100; 
    }
  }
  printf("Matriz gerada:\n");
  for (i = 0; i < LINHAS; i++) {
    for (j = 0; j < COLUNAS; j++) {
      printf("%d\t", matriz[i][j]);
    }
    printf("\n");
  }
  printf("Digite um valor inteiro x: ");
  scanf("%d", &x);
  for (i = 0; i < LINHAS; i++) {
    for (j = 0; j < COLUNAS; j++) {
      if (matriz[i][j] == x) {
        contador++;
      }
    }
  }
  printf("O valor %d aparece %d vezes na matriz.\n", x, contador);

  return 0;
}
