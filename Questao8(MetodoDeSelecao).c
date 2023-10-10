#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 100


int gerarNumeroAleatorio(int min, int max) 
{
    return min + rand() % (max - min + 1);
}

void trocar(int *a, int *b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void ordenacaoPorSelecao(int vetor[], int tamanho) 
{
    for (int i = 0; i < tamanho - 1; i++) 
    {
        int indiceMenor = i;
        for (int j = i + 1; j < tamanho; j++) 
        {
            if (vetor[j] < vetor[indiceMenor]) 
            {
                indiceMenor = j;
            }
        }
        trocar(&vetor[i], &vetor[indiceMenor]);
    }
}

int main() 
{
    int minimo, maximo;

    printf("Digite o valor mínimo do intervalo: ");
    scanf("%d", &minimo);

    printf("Digite o valor máximo do intervalo: ");
    scanf("%d", &maximo);

    if (minimo >= maximo) 
    {
        printf("O valor mínimo deve ser menor que o valor máximo.\n");
        return 1; 
    }
    srand(time(NULL));
  
    int vetor[TAM];
  
    for (int i = 0; i < TAM; i++) 
    {
        vetor[i] = gerarNumeroAleatorio(minimo, maximo);
    }
  
    ordenacaoPorSelecao(vetor, TAM);
    printf("Vetor ordenado em ordem crescente:\n");
  
    for (int i = 0; i < TAM; i++) 
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    return 0;
}
