#include <stdio.h>
#include <stdlib.h>
#include "ListaEncadeada.h"

int main() {

    Lista* lista = criarLista();
    int n, j = 0;

    printf("Digite quantos nos voce quer colocar na lista: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("Digite a info do no %d:  ", i+1);
        scanf("%d", &j);
        lista = insere(lista, j);
    }

    imprime(lista);
    
    int k;

    printf("\nDigite o valor que deseja buscar: ");
    scanf("%d", &k);

    if(busca(lista, k) != NULL){
        printf("\nElemento esta na lista.\n");
    }else{
        printf("\nElemento nao esta na lista.\n");
    }

    int l;
    printf("\nDigite o valor que deseja remover: ");
    scanf("%d", &l);

    remova(lista, l);
    imprime(lista);
    libera(lista);
    
    return 0;
}
