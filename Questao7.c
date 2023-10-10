#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define TAM 20

int main(void) {
  int inteiro[TAM];
  float soma = 0.0, produto = 1.0;
  srand(time(NULL));
  for(int i=0; i < 3; i++){
    int numerador = rand() % TAM;
    printf("%d\n", numerador);
    inteiro[i] = numerador;
    soma += numerador;
    produto *= numerador;
  }
  //Média aritmética
  float mediaAritmetica = soma / 3;
  //Média geométrica
  float mediaGeometrica = pow(produto, 1.0 / 3);
  
  printf("Média aritmética: %.2f\n", mediaAritmetica);
  printf("Média geométrica: %.2f\n", mediaGeometrica);
  return 0;
}
