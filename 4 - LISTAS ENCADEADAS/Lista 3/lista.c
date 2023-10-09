#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

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

int maioresQue(Lista *l, int n){
    Lista *p;
    int contador = 0;

    for (p = l; p != NULL; p = p->proximo){
        if(p->info > n){
            contador++;
        }
    }

     return contador;
}

Lista* insereFinal(Lista * l, int i){
    Lista *p = l; //ponteiro auxiliar
    Lista *novo = (Lista*) malloc(sizeof(Lista));
    Lista *ant = NULL;

    if(novo == NULL){
        printf("Memoria insuficiente");
        exit(1);
    }

    novo->info = i;
    novo->proximo = NULL;

    if(vazia(l)){
        return novo;
    }

    while (p != NULL){
        ant = p;
        p = p->proximo;
    }

    ant->proximo = novo;

    return l;
        
}

Lista* ultimo(Lista *l){
    Lista *p;
    for (p = l; p != NULL; p = p->proximo){
        if(p->proximo == NULL)
            return p;
    }
}

Lista* concatena(Lista *l1, Lista *l2){
    Lista *p;
    
    for(p = l1; p != NULL; p = p->proximo){
        if(p->proximo == NULL){
            p->proximo = l2;
            return l1;
        }
    }
}

Lista* retiraElemento(Lista *l, int n){
    
    Lista *ant = NULL;
    Lista *p = l;

    while(p != NULL){

        if(p->info == n){
            if(ant == NULL){
                l = p->proximo;
            }else{
                ant->proximo = p->proximo;
            }
        }else{
            ant = p;
        }

        p = p->proximo;

    }
    
    return l;
}

int tamanhoLista(Lista *l){
    Lista *p;
    int contador = 0;

    for(p = l; p != NULL; p = p->proximo){
        contador++;
    }
    
    return contador;
}

int iguais(Lista *l1, Lista *l2){
    Lista *p1 = l1, *p2 = l2;
    int contador = 0;

    
    if(tamanhoLista(l1) == tamanhoLista(l2)){

        while(p1 != NULL && p2 != NULL){
            if(p1->info == p2->info){
                contador++;
            }else{
                return 1;
            }

            p2 = p2->proximo;
            p1 = p1->proximo;
        }

        if(contador == tamanhoLista(l1)){
            return 0;
        }else{
            return 1;
        }
    }else{
        return 1;
    }
}