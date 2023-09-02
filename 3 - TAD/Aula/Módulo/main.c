#include <stdio.h>
#include <string.h>
#include "funcrec.h"

int main(){

    char vetor[50], n;

    printf("Digite um nome: ");
    scanf(" %[^\n]", vetor);

    printf("\nO tamanho e: %d", tamanho(vetor));

    printf("\nDigite uma letra para verificar as ocorrencias: ");
    scanf(" %c", &n);
    
    printf("\nO numero de ocorrencias e: %d\n", ocorrencia(vetor, n));

    imprime(vetor);
    printf("\n");
    imprimeReverso(vetor);

    return 0;
}