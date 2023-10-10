#include <stdio.h>

#define TAM 20
int main(void) {
  char string[TAM];
  char caractere;
  int conter = 0;
  
  printf("Insira a string: ");
  scanf("%s", string);
  printf("Insira o caractere: ");
  scanf(" %c", &caractere);

  for(int i=0; string[i] != '\0'; i++)
  {
    if(string[i] == caractere)
    {
      conter = 1;
      break;
    }
  }
 if(conter) printf("A string contém o caractere '%c'.\n",caractere);
 else printf("A string não contém o caractere '%c'.\n", caractere);
 return 0;
}
