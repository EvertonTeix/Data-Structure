#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int main(){

    Fila *f = criaFila();
    int elementos = 0;
    float valor = 0;
    float removido;

    printf("Digite quantos elementos deseja adicionar na fila: ");
    scanf("%d", &elementos);

    for(int i = 0; i < elementos; i++){
        valor = rand()%100;
        insere(f, valor);
    }

    filaImprime(f);

    printf("\n\n");

    removido = remova(f);
    filaImprime(f);

    printf("\n\n");

    insere(f, 7);
    insere(f, 9);
    insere(f, 3);
    insere(f, 0);
    insere(f, 11);

    filaImprime(f);
    printf("\n");

    libera(f);
    return 0;
}