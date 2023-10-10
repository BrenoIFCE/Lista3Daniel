#include <stdio.h>
#include <stdlib.h>

#define LINHAS 3
#define COLUNAS 3
int main(void) {
  int i, j, matriz[LINHAS][COLUNAS];
  for(i=0; i<LINHAS; i++)
  {
    for(j=0; j<COLUNAS; j++)
    {
    printf("Elemento (%d,%d):", i+1, j+1);
    scanf("%d", &matriz[i][j]);
    } 
  }
  puts("Matriz completa:");
  for (i = 0; i < LINHAS; i++)
    {
    for (j = 0; j < COLUNAS; j++) 
    {
      printf("%d\t", matriz[i][j]);
    }
    printf("\n");
  }
  puts("Elementos da diagonal principal:");
  printf("Elemento (1,1): %d\n", matriz[0][0]);
  printf("Elemento (2,2): %d\n", matriz[1][1]);
  printf("Elemento (3,3): %d\n", matriz[2][2]);
  return 0;
}
