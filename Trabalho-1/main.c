#include <stdio.h>
#include <stdlib.h>
#include "vetor.h"
#define TAM 3

int main(){

    float c;
    Vetor *v1 = criaVetor(TAM);
    Vetor *v2 = criaVetor(TAM);

    printf("\n______ VETOR 1 ______\n");
    for(int i = 0; i < TAM; i++){
        printf("Digite o valor da posicao %d do vetor: ", i+1);
        scanf("%f", &c);
        atribui(v1, i, c);
    }

    printf("\n______ VETOR 2 ______\n");
    for(int i = 0; i < TAM; i++){
        printf("Digite o valor da posicao %d do vetor: ", i+1);
        scanf("%f", &c);
        atribui(v2, i, c);
    }

    mostrarSomaVetores(v1,v2);

    printf("\n");

    printf("\nO tamanho do vetor 1 e: %d", tamanhoVetor(v1));
    printf("\nO tamanho do vetor 2 e: %d", tamanhoVetor(v2));

    float i;
    printf("\n\nDigite a posicao que deseja acessar o conteudo do vetor 1: ");
    scanf("%f", &i);
    printf("\nO conteudo da posicao do vetor digitado e: %.2f",acessa(v1, i));

    printf("\n\nDigite a posicao que deseja acessar o conteudo do vetor 2: ");
    scanf("%f", &i);
    printf("\nO conteudo da posicao do vetor digitado e: %.2f", acessa(v2, i));

    printf("\nDigite a posicao que deseja atribuir o conteudo do vetor 1: ");
    scanf("%f", &i);
    printf("\nDigite o conteudo que deseja atribuir: ");
    scanf("%f", &c);
    listarVetor(v1);
    printf("\n\n");
    atribui(v1, i, c);
    listarVetor(v1);

    printf("\n______MAIOR ELEMENTOS______");
    printf("\nVetor 1: %.2f", maior(v1));
    printf("\nVetor 2: %.2f", maior(v2));

    printf("\n______MENOR ELEMENTOS______");
    printf("\nVetor 1: %.2f", menor(v1));
    printf("\nVetor 2: %.2f", menor(v2));
    
    printf("\n______SOMA ELEMENTOS______");
    printf("\nVetor 1: %.2f", somaVetor(v1));
    printf("\nVetor 2: %.2f", somaVetor(v2));

    printf("\nDigite ate que posicao que voce deseja somar os valores do vetor 1: ");
    scanf("%f", &i);
    printf("\nA soma dos n elementos do vetor 1 e: %.2f", somaElementos(v1, i));

    printf("\nDigite ate que posicao que voce deseja somar os valores do vetor 2: ");
    scanf("%f", &i);
    printf("\nA soma dos n elementos do vetor 1 e: %.2f", somaElementos(v2, i));

    Vetor *sumVetores = somaVetores(v1,v2);

    listarVetor(sumVetores);
    mostrarSomaVetores(v1, v2);

    liberaVetor(v1);
    liberaVetor(v2);
    liberaVetor(sumVetores);

    return 0;
}