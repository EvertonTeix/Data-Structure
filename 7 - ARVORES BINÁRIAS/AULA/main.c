#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"

int main()
{

    Arv *a = cria('a',
                  (cria('b',
                       cria('z', criaVazia(), criaVazia()),
                       criaVazia())),
                  (cria('c',
                       cria('g', criaVazia(), criaVazia()),
                       cria('h', criaVazia(), criaVazia()))));

    imprime(a);

    char c;

    printf("\nDigite o caractere que vc deseja saber se pertence ou nao a arvore: ");
    scanf("%c", &c);

    if(pertence(a, c)){
        printf("\nO caractere digitdo pertence a arvore.");
    }else{
        printf("\nO caractere digitado nao pertence a arvore.");
    }

    if(!arvoreVazia(a)){
        printf("\nA arvore nao esta vazia!");
    }else{
        printf("\nA arvore esta vazia!");
    }

    printf("\n\n");
    imprimeSim(a);

    printf("\n\n");
    imprimePos(a);

    libera(a);

    return 0;
}