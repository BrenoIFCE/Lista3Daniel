#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int inicio, final;
    puts("Insira o início do vetor:");
    scanf("%d", &inicio);
    puts("Insira o final do vetor:");
    scanf("%d", &final);
    int i, contador = 0, troca, copia, vetor[final];

    srand(time(NULL));
    for(i = inicio; i < final; i++){
    vetor[i] = rand() % final;
    }

    // antes da ordenação
    printf("Antes da ordenacao:\n");
    for(i = inicio; i < final; i++){
        printf("%d\n", vetor[i]);
    }

    // ordena o vetor
    do{ 
        troca = 0;
        contador++; 
        for(i = inicio; i < final; i++){ 
            if(vetor[i] > vetor[i+1]){
                copia = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = copia;
                troca = 1;
            }
        }
    }while(troca);

    // após a ordenação
    printf("\nApós a ordenação:\n");
    for(i = inicio; i < 100; i++){
        printf("%d\n", vetor[i+1]);
    }

    return 0;
}
