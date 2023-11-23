#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

struct lista{
    float info;
    Lista *prox;
};

struct pilha{
    Lista *topo;
};

Pilha* criaPilha(){
    Pilha *p = (Pilha*) malloc(sizeof(Pilha));

    if(p == NULL){
        printf("Memoria Insuficiente.");
        exit(1);
    }

    p->topo = NULL;

    return p;
}

void push(Pilha *p, float valor){
    Lista *novo = (Lista*)malloc(sizeof(Lista));

    if(novo == NULL){
        printf("Memoria Insuficiente");
        exit(1);
    }

    novo->info = valor;
    novo->prox = p->topo;
    p->topo = novo;
}

int pilhaVazia(Pilha *p){
    return (p->topo == NULL);
}

float pop(Pilha *p){
    float topo;
    Lista *t;

    if(pilhaVazia(p)){
        printf("Pilha vazia!");
        exit(1);
    }

    t = p->topo;
    topo = t->info;
    p->topo = t->prox;
    free(t);

    return topo;
}

void pilhaLibera(Pilha *p){
    Lista *q = p->topo;

    while(q != NULL){
        Lista *t = q->prox;
        free(q);
        q = t;
    }

    free(p);
}

void pilhaImprime(Pilha *p){
    Lista *q;
    for(q = p->topo; q != NULL; q = q->prox){
    printf("%f\n", q->info);
    }
}
