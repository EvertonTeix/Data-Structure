#include <stdio.h>
#include <stdlib.h>
#include "Lista.h"

int main(){

    Lista *lista = criaLista();
    Lista *buscar;

    lista = insere(lista, 1);

    /*if(vazia(lista) == 0){
        printf("\nLista nao vazia\n");
    }else{
        printf("\nLista vazia\n");
    }

    lista = insere(lista, 2);
    imprime(lista);

    buscar = busca(lista, 2);

    if(buscar == NULL){
        printf("O elemento nao esta na lista");
    }else
        

    lista = insere(lista, 3);
    lista = insere(lista, 4);
    imprime(lista);

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


    lista = insereFinal(lista, 3);
    lista = insereFinal(lista, 4);
    imprime(lista);
    libera(lista);

    return 0;
}