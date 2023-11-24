#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "arvore.h"

struct arv
{
    char vet[100];
    Arv *esq;
    Arv *dir;

};

Arv *criaVazia(){
    return NULL;
}

Arv *cria(char vet[], Arv *sae, Arv *sad){

    Arv *a = (Arv *)malloc(sizeof(Arv));

    if (a == NULL){
        printf("Memoria Insuficiente.");
        exit(1);
    }

    strcpy(a->vet, vet);
    a->dir = sad;
    a->esq = sae;

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
        puts(a->vet);
        imprime(a->esq);
        imprime(a->dir);
    }
}

int pertence(Arv *a, char vet[]){

    if (arvoreVazia(a)){
        return 0;
    }else{
        return strcmp(a->vet, vet) || pertence(a->esq, vet) || pertence(a->dir, vet);
    }
}

void imprimeSim(Arv *a){
    if (!arvoreVazia(a)){
        imprimeSim(a->esq);
        puts(a->vet);
        imprimeSim(a->dir);
    }
}

void imprimePos(Arv *a){
    if (!arvoreVazia(a)){
        imprimePos(a->esq);
        imprimePos(a->dir);
        puts(a->vet);
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

void imprimeRaiz(Arv *a){
    puts(a->vet);
}

void atendimento(Arv *a){

    char s;

    if(arvoreVazia(a)){
        return;
    }else{

        if(a->esq != NULL && a->dir != NULL){

            puts(a->vet);
            printf("\nDigite uma resposta (S ou N):");
            scanf(" %c", &s);

            while (getchar() != '\n');

            if(s == 'S'){
                atendimento(a->esq);
            }else if(s == 'N'){
                atendimento(a->dir);
            }
        }
    }
}