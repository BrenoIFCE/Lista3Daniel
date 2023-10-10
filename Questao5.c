#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 50

int main(void) {

  char string1[TAM];
  char string2[TAM];
  puts("Digite uma string:");
  fgets(string1, TAM, stdin);
  puts("Digite outra string:");
  fgets(string2, TAM, stdin);
  
  //Sem usar a função strcat.
  printf("Sem função strcat:\n%s%s\n", string1, string2);

  //A partir daqui é usando função strcat.
  strcat(string1, string2);
  printf("Com função strcat:\n");
  printf(string1);
  return 0;
}
