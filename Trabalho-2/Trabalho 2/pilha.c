#include <Stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fila.h"
#include "pilha.h"

struct lista{

    Senha *info;
    struct lista *prox;

};

struct pilha{

    Lista *primeiro;

};

Pilha* criaPilha(){

    Pilha *p = (Pilha*)malloc(sizeof(Pilha));

    if(p==NULL){
        printf("Memoria Insuficiente!\n");
    }

    p->primeiro = NULL;

    return p;
}

void push(Pilha *p, Senha *s){

    Lista *novo = (Lista*)malloc(sizeof(Lista));

    if(novo==NULL){
        printf("Memoria Insuficiente!\n");
    }

    novo->info=s;
    novo->prox=p->primeiro;

    p->primeiro = novo;
}

int pilhaVazia(Pilha *p){
    return (p->primeiro==NULL);
}

void liberaPilha(Pilha *p){

    Lista *q = p->primeiro;

    while(q!=NULL){
        Lista *t = q->prox;
        free(q);
        q = t;
    }

    free(p);
}

void imprimePilha(Pilha *p){

    Lista *q;

    for(q=p->primeiro;q!=NULL;q=q->prox){
        imprimeSenha(q->info);
    }
}