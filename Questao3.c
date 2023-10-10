#include <stdio.h>
#include <stdlib.h>

#define TAM 80
int main(void) {

  char str[TAM];
  puts("Digite uma palavra:");
  scanf("%[^\n]", str);
  int i=0;
  while(str[i]!='\0') i++;
  printf("Quantidade caracteres: %d", i);
  return 0;
}
