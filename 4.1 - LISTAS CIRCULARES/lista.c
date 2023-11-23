#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

struct listaCircular{
    int info;
    LCircular *proximo;
};

LCircular* insereListaVazia(LCircular *l, int elemento){

    LCircular *novo = (LCircular*) malloc(sizeof(LCircular));

    if(novo == NULL){
        printf("Memoria Insuficiente!");
        exit(1);
    }

    novo->info = elemento;
    novo->proximo = novo; //único elemento que aponta para ele mesmo

    return novo;
}

LCircular* insereFinal(LCircular *l, int elemento){

    LCircular *aux = l;
    LCircular *ant = NULL;

    do{
        ant = aux;
        aux = aux->proximo;
    }while (aux != l); //enquanto não voltar para o início da lista

    LCircular *novo = (LCircular*) malloc(sizeof(LCircular));

    novo->info = elemento;
    novo->proximo = l; //novo último elemento que aponta para início
    ant->proximo = novo; //último antes da inserção aponta para novo

    return l;
}

void imprimeCircular(LCircular *l){

    LCircular *p =  l; //aponta para nó inicial

    if (p != NULL){

        do{

        printf("%d ",p->info);
        p = p->proximo;

        }while (p != l);

        printf("\n");
    }
}

