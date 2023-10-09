#include <stdio.h>
#include <stdlib.h>
#include "Lista.h"

int main(){

    Lista *lista1 = criaLista();
    Lista *lista2 = criaLista();

    /*
    Lista *buscar;
    Lista *ultimoNo;
    Lista *concatenada;

    
    
    lista1 = insere(lista1, 3);
    lista1 = insere(lista1, 4);

    lista2 = insere(lista2, 10);
    lista2 = insere(lista2, 9);
    lista2 = insere(lista2, 8);
    lista2 = insere(lista2, 7);*/

    lista1 = insere(lista1, 1);
    lista1 = insere(lista1, 2);
    lista1 = insere(lista1, 2);
    lista1 = insere(lista1, 2);
    lista1 = insere(lista1, 2);
    lista1 = insere(lista1, 2);
    lista1 = insereFinal(lista1, 5);

    lista2 = insere(lista2, 1);
    lista2 = insere(lista2, 2);

    imprime(lista1);

    printf("\n\n");

    lista1 = retiraElemento(lista1, 2);
    imprime(lista1);

    if(iguais(lista1,lista2) == 0){
        printf("\nAs listas sao iguais!");
    }else{
        printf("\nAs listas sao diferentes.");
    }

    /*if(vazia(lista) == 0){
        printf("\nLista nao vazia\n");
    }else{
        printf("\nLista vazia\n");
    }

    buscar = busca(lista, 2);

    if(buscar == NULL){
        printf("O elemento nao esta na lista");
    }else
        


    lista = remova(lista, 1);
    lista = remova(lista, 3);
    lista = remova(lista, 4);

    printf("\nElementos apos a remocao:\n");
    imprime(lista);

    if(vazia(lista) == 0){
        printf("\nLista nao vazia\n");
    }else{
        printf("\nLista vazia\n");
    }

    lista = insere(lista, 3);

    imprime(lista);
    lista = remova(lista, 3);
    
    imprime(lista);*/

    /*imprime(lista1);

    int n = 1;
    printf("\nMaiores que %d sao: %d", n, maioresQue(lista1, n));

    ultimoNo = ultimo(lista1);
    printf("\n\n");
    imprime(ultimoNo);

    concatenada = concatena(lista1, lista2);
    printf("\n\n");
    imprime(concatenada);

    */
    
    libera(lista1);
    libera(lista2);
    
    return 0;
}