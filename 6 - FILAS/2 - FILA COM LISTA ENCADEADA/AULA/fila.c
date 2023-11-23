#include <stdlib.h>
#include <stdio.h>
#include "fila.h"

struct lista{
    float info;
    Lista *prox;
};

struct fila{
    Lista *inicio;
    Lista *fim
};

Fila* criaFila(){

    Fila *f = (Fila*) malloc(sizeof(Fila));
    f->inicio = NULL;
    f->fim = NULL;
    return f;
}

void insere(Fila *f, float valor){

    Lista *novo = (Lista*) malloc(sizeof(Lista));

    novo->info = valor;
    novo->prox = NULL;

    if(f->fim != NULL){
        f->fim->prox = novo;
    }else{
        f->inicio = novo;
    }
    
    f->fim = novo;
}

float remova(Fila *f){

    Lista *t;
    float valor;
    
    if(filaVazia(f)){
        printf("Fila vazia!\n"); 
        exit(1);
    }

    t = f->inicio;
    valor = t->info;
    f->inicio = t->prox;

    if(f->inicio == NULL){
        f->fim = NULL;
    }

    free(t);
    return valor;

}

int filaVazia(Fila *f){
    return (f->inicio == NULL);
}

void filaLibera(Fila *f){

    Lista *q = f->inicio;

    while(q != NULL){
        Lista *t = q->prox;
        free(q);
        q = t;
    }

    free(f);
}

void filaImprime(Fila *f){

    Lista *q;

    for(q = f->inicio; q != NULL; q = q->prox){
        printf("%f\n", q->info);
    }
}