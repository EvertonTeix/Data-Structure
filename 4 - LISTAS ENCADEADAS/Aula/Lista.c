#include <stdio.h>
#include <stdlib.h>
#include "Lista.h"

struct lista{
    int info;
    Lista *proximo;
};

Lista* criaLista(){
    return NULL;
}

Lista* insere(Lista * l, int i){
    Lista *novo = (Lista*) malloc(sizeof(Lista));
    novo->info = i;
    novo->proximo = l;
    return novo;
}

Lista* insereFinal(Lista * l, int i){
    Lista *p; //ponteiro auxiliar
    Lista *novo = (Lista*) malloc(sizeof(Lista));

        if(novo == NULL){
            printf("Memoria insuficiente");
        }

        novo->info = i;
        novo->proximo = NULL;
        
        for (p = l; p->proximo != NULL; p = p->proximo){
            
        }

        p->proximo = novo;

    return l;
}

void imprime(Lista * l){
    Lista *p; //ponteiro auxiliar
    for (p = l; p != NULL; p = p->proximo){
    printf("info = %d\n",p->info);
    }
}

int vazia(Lista * l){
    if (l == NULL)
        return 1;
    else
        return 0;
}

Lista* busca(Lista * l, int i){
    Lista *p; //ponteiro auxiliar
    for(p = l; p != NULL; p = p->proximo){
        if(p->info == i)
        printf("\nElemento encontrado: %d\n\n", p->info);
        return p;
    }
        return NULL;
}

Lista* remova(Lista * l, int v){

    Lista *ant = NULL; //guarda o elemento anterior
    Lista *p = l; //ponteiro auxiliar

    //procura o elemento na lista, guardando o anterior
    while(p != NULL && p->info != v){
        ant = p;
        p = p->proximo;
    }

    //verifica se não achou o elemento
    if(p == NULL)
        return l; //retorna a lista original

    //se encontrou remove o elemento
    if(ant == NULL){
        //o elemento a ser removido está no início
        l = p->proximo;
    }
    else{
        //remove o elemento do meio da lista
        ant->proximo = p->proximo;
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