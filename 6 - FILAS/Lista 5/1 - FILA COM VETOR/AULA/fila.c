#include <stdlib.h>
#include <stdio.h>
#include "fila.h"

#define TAM 100

struct fila{
    int qtdeItens;
    int inicio;
    float vet[TAM];
};

Fila* criaFila(){
    Fila *f = (Fila*)malloc(sizeof(Fila));

    if(f == NULL){
        printf("Memoria Insuficiente!");
        exit(1);
    }

    f->qtdeItens = 0;
    f->inicio = 0;

    return f;
}

int filaVazia(Fila *f){
    return (f->qtdeItens == 0);
}

void insere(Fila *f, float valor){
    int fim;
    if(f->qtdeItens == TAM){
        printf("Fila esta cheia!");
        exit(1);
    }

    fim = (f->inicio + f->qtdeItens) % TAM;
    f->vet[fim] = valor;
    f->qtdeItens++;
}

float remova(Fila *f){
    float valor;
    
    if(filaVazia(f)){
        printf("Fila vazia!");
        exit(1);
    }

    valor = f->vet[f->inicio];
    f->inicio = (f->inicio + 1)%TAM;
    f->qtdeItens--;
    return valor;
}

void libera(Fila *f){
    free(f);
}

void filaImprime(Fila *f){
    for (int i = 0; i < f->qtdeItens; i++){
        printf("%.2f ",f->vet[(f->inicio + i) % TAM]);
    }
}
