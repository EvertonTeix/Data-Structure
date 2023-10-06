#include <stdio.h>
#include <stdlib.h>
#include "vetor.h"

struct vetor{
    int tamanho;
    float *elementos;
};

Vetor* criaVetor(int n){

    if(n > 0){
        Vetor *v = (Vetor*)malloc(sizeof(Vetor));

        if(v == NULL){
            printf("\nMemoria insuficiente!\n");
            exit(1);
        }

        v->tamanho = n;
        v->elementos = (float*)malloc(n * sizeof(float));

        if(v->elementos == NULL){
            printf("\nMemoria insuficiente!\n");
            exit(1);
        }

        return v;
    }else {
        printf("Nao sera possivel criar um vetor de tamanho 0!");
        exit(1);
    }
}

void liberaVetor(Vetor* v){
    free(v->elementos);
    free(v);
}

int tamanhoVetor(Vetor* v){
    return v->tamanho;
}

float acessa(Vetor* v, int i){
    if(i < 0 || i >= v->tamanho){
        printf("\nPosicao invalida!\n");
        exit(1);
    }
    return v->elementos[i];
}

void atribui(Vetor* v, int i, float c){
    if(i < 0 || i >= v->tamanho){
        printf("\nPosicao invalida!\n");
        exit(1);
    }
    v->elementos[i] = c;
}

float maior(Vetor* v){

    float maior = v->elementos[0];
    
    for(int i = 0; i < v->tamanho; i++){
        if(v->elementos[i] > maior){
            maior = v->elementos[i];
        }
    }

    return maior;
}

float menor(Vetor* v){
    float menor = v->elementos[0];
    
    for(int i = 0; i < v->tamanho; i++){
        if(v->elementos[i] < menor){
            menor = v->elementos[i];
        }
    }

    return menor;
}

void listarVetor(Vetor* v){
    printf("Vetor: {");
    for(int i = 0; i < v->tamanho; i++){
        printf("%.2f ", v->elementos[i]);
    }
    printf("}");
}

float somaVetor(Vetor* v){
    float soma = 0;
    for(int i = 0; i < v->tamanho; i++){
        soma += v->elementos[i];
    }

    return soma;
}

float somaElementos(Vetor* v, int n){
    if(n > v->tamanho){
        printf("\nNumero invalido\n");
        return 0.0;
    }else{

        float soma = 0;

        for(int i = 0; i < n; i++){
            soma += v->elementos[i];
        }

        return soma;
    }
}

Vetor* somaVetores(Vetor* v1, Vetor* v2){
    if(v1->tamanho == v2->tamanho){

        Vetor *v = criaVetor(v1->tamanho);

        for(int i = 0; i < v->tamanho; i++){
            v->elementos[i] = v1->elementos[i] + v2->elementos[i];
        }
        return v;

    }else{
        printf("\nOs vetores nao tem o mesmo tamanho\n");
        return NULL;
    }
}

void mostrarSomaVetores(Vetor* v1, Vetor* v2){

    if(v1->tamanho == v2->tamanho){
        //entrada:
        printf("\n______ ENTRADA ______\n");
        printf("Vetor 1: {");
        for(int i = 0; i < v1->tamanho; i++){
            if(i < v1->tamanho -1){
                printf("%.2f, ", v1->elementos[i]);
            }
            else{
                printf("%.2f", v1->elementos[i]);
            }
        }

        printf("}\n");

        printf("Vetor 2: {");
        for(int i = 0; i < v2->tamanho; i++){
            if(i < v2->tamanho - 1){
                printf("%.2f, ", v2->elementos[i]);
            }
            else{
                printf("%.2f", v2->elementos[i]);
            }
        }
        printf("}\n");

        printf("\n______ SAIDA ______\n");

        for(int i = 0; i < v1->tamanho; i++){
            printf("%.2f + %.2f = %.2f\n", v1->elementos[i], v2->elementos[i], v1->elementos[i] + v2->elementos[i]);
        }
    }
}


