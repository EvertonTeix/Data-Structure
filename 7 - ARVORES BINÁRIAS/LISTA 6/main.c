#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"

int main(){

    Arv *a = criaVazia();

    a = insere(a, 10);
    imprime(a);
    printf("\n");

    a = insere(a, 2);
    imprime(a);
    printf("\n");

    a = insere(a, 1);
    a = insere(a, 3);

    imprime(a);
    printf("\n");

    a = retira(a, 10);
    imprime(a);
    printf("\n");

    int n;

    printf("\nDigite o numero que vc deseja saber se pertence ou nao a arvore: ");
    scanf("%d", &n);

    if(consultarNo(a,n)){
        printf("\nNo esta na arvore");
    }else{
        printf("\nNo nao esta na arvore");
    }


    
    printf("\nA quantidade de nos da arvore e: %d\n", nos(a));
    printf("\nA quantidade de folhas da arvore e: %d\n", folhas(a));
    printf("\nA quantidade de nos que so tem um filho e: %d\n", um_filho(a));

    int c;

    printf("\nDigite o numero que vc deseja saber se pertence ou nao a arvore: ");
    scanf("%d", &c);

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