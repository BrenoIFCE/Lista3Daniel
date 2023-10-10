#include <stdio.h>
#include <stdlib.h>

#define TAM 80
int main(void) {
  char string1[TAM];
  char string2[TAM];
  int iguais = 1;
  char stringIgual;
  puts("Insira a primeira string:");
  fgets(string1, TAM, stdin);
  puts("Insira a segunda string:");
  fgets(string2, TAM, stdin);

  for (int i = 0; string1[i] != '\0'; i++) {
    if (string1[i] != string2[i]) {
      iguais = 0;
      break;
    }
  }
  if (iguais)
    puts("As duas strings são iguais.");
  else
    puts("As duas strings são diferentes.\n");
  //A partir daqui é usando função strcmp.
  stringIgual = strcmp(string1, string2);
  if (stringIgual)
    puts("Com função strcmp: as strings são diferentes");
  else
    puts("Com função strcmp: as strings são iguais.");
  return 0;
}
