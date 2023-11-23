#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"

struct arv
{
    char info;
    struct arv *esq;
    struct arv *dir;
};

Arv *criaVazia()
{
    return NULL;
}

Arv *cria(char c, Arv *sae, Arv *sad)
{

    Arv *a = (Arv *)malloc(sizeof(Arv));

    if (a == NULL)
    {
        printf("Memoria Insuficiente.");
        exit(1);
    }

    a->info = c;
    a->esq = sae;
    a->dir = sad;

    return a;
}

int arvoreVazia(Arv *a)
{
    return (a == NULL);
}

Arv *libera(Arv *a)
{
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
        printf("%c ", a->info);
        imprime(a->esq);
        imprime(a->dir);
    }
}

int pertence(Arv *a, char c)
{
    if (arvoreVazia(a))
    {
        return 0;
    }
    else
    {
        return a->info == c ||
               pertence(a->esq, c) ||
               pertence(a->dir, c);
    }
}

void imprimeSim(Arv *a)
{
    if (!arvoreVazia(a))
    {
        imprimeSim(a->esq);
        printf("%c ", a->info);
        imprimeSim(a->dir);
    }
}

void imprimePos(Arv *a)
{
    if (!arvoreVazia(a))
    {
        imprimePos(a->esq);
        imprimePos(a->dir);
        printf("%c ", a->info);
    }
}
