#include <stdio.h>
#include <stdlib.h>
#include "ListaEncadeada.h"

struct lista{
    int info;
    Lista* proximo;
};

Lista* criarLista(){
    return NULL;
}

Lista* insere(Lista * l, int i){
    Lista* no = (Lista*)malloc(sizeof(Lista));
    if(no == NULL){
        printf("Impossível criar no!");
    }

    no->info = i;
    no->proximo = l;

    return no;
}

void imprime(Lista* l){
    Lista* aux;
    for(aux = l; aux != NULL; aux = aux->proximo){
        printf("Info: %d\n", aux->info);
    }
}

int vazia(Lista * l){
    if(l == NULL){
        return 1;
    }
    return 0;
}

Lista* busca(Lista * l, int i){
    Lista* aux;
    for(aux = l; aux != NULL; aux = aux->proximo){
       if(aux->info == i){
        return aux;
       }
    }

    return NULL;
}

Lista* remova(Lista * l, int v){
    Lista* ant = NULL;
    Lista* p;

    //procura o elemento na lista, guardando o anterior
    while(p != NULL && p->info != v){
        ant = p;
        p = p->proximo;
    }

    //verifica se não achou o elemento
    if(p == NULL){
        return l;
    }

    //se encontrou remove o elemento
    if(ant == NULL){
        l = p->proximo; //o elemento está no início
    }else{
        ant->proximo = p->proximo; //o elemento está no meio ou no fim da lista
    }

    free(p);
    return l;
}

void libera(Lista *l){
    Lista *p = l;

    while(p != NULL){

    Lista *t = p->proximo; //guarda referencia para proximo
    free(p); //libera a memória apontada por p
    p = t; //faz p apontar para o próximo
    }
}