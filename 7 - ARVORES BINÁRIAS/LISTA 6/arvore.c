#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"

struct arv
{
    int info;
    struct arv *esq;
    struct arv *dir;
};

Arv *criaVazia(){
    return NULL;
}

Arv *cria(int c, Arv *sae, Arv *sad){

    Arv *a = (Arv *)malloc(sizeof(Arv));

    if (a == NULL){
        printf("Memoria Insuficiente.");
        exit(1);
    }

    a->info = c;
    a->esq = sae;
    a->dir = sad;

    return a;
}

int arvoreVazia(Arv *a){
    return (a == NULL);
}

Arv *libera(Arv *a){
    if (!arvoreVazia(a))
    {
        libera(a->esq);
        libera(a->dir);
        free(a);
    }

    return NULL;
}

void imprime(Arv *a)
{
    if (!arvoreVazia(a))
    {
        printf("%d ", a->info);
        imprime(a->esq);
        imprime(a->dir);
    }
}

int pertence(Arv *a, int c){

    if (arvoreVazia(a)){
        return 0;
    }else{
        return a->info == c || pertence(a->esq, c) || pertence(a->dir, c);
    }
}

void imprimeSim(Arv *a){
    if (!arvoreVazia(a)){
        imprimeSim(a->esq);
        printf("%d ", a->info);
        imprimeSim(a->dir);
    }
}

void imprimePos(Arv *a){
    if (!arvoreVazia(a)){
        imprimePos(a->esq);
        imprimePos(a->dir);
        printf("%d ", a->info);
    }
}

int nos(Arv *a){

    if (arvoreVazia(a)){
        return 0;
    }

    return 1 + nos(a->esq) + nos(a->dir);
}

int folhas(Arv *a){

    if(arvoreVazia(a->dir) && arvoreVazia(a->dir)){
        return 1;
    }else{
        return 0 + folhas(a->esq) + folhas(a->dir);
    }

}

int um_filho(Arv *a){


    if(arvoreVazia(a)){
        return 0;
    }else{

        if((!arvoreVazia(a->dir) && arvoreVazia(a->esq)) || (!arvoreVazia(a->esq) && arvoreVazia(a->dir))){
            return 1;
        }else{
            return 1 + um_filho(a->esq) + um_filho(a->dir);
        }

    }
}

Arv *insere(Arv *a, int n){
    
    if(a == NULL){
        a = cria(n, NULL, NULL);

    }else if(n > a->info){
        a->dir = insere(a->dir, n);

    }else if(n < a->info){
        a->esq = insere(a->esq, n);
    }
}

int consultarNo(Arv *a, int n){   //geralmente faz funções de busca para retornar true ou false;

    if(arvoreVazia(a)){
        return 0;
    }else if(n == a->info){
        return 1;
    }else if(n > a->info){
        consultarNo(a->dir, n);
    }else if(n < a->info){
        consultarNo(a->esq, n);
    }
}

Arv* retira(Arv* a, int v){

    if (a == NULL){
        printf("Arvore vazia\n");
        return NULL;

        }else if (v < a->info){
            a->esq = retira(a->esq,v);

        }else if (v > a->info){
            a->dir = retira(a->dir,v);

    }else { //achou o elemento

        if (a->esq == NULL && a->dir == NULL){ //é uma folha
            free(a);
            a = NULL;

        }else if (a->esq == NULL) { //só tem filhos à direita
            Arv* temp = a;
            a = a->dir;
            free(temp);

        }else if (a->dir == NULL) { //só tem filhos à esquerda
            Arv* temp = a;
            a = a->esq;
            free(temp);

        }else { //tem os dois filhos
            Arv* temp = a->esq;

            while (temp->dir != NULL) { //busca elemento maior abaixo para trocar de posição
                temp = temp->dir;
            }

            a->info = temp->info; //troca
            temp->info = v;
            a->esq = retira(a->esq,v);
    }
    
        return a;
    }
}
