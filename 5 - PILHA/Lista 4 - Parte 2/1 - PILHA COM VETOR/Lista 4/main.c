#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main(){

    Pilha *p = criaPilha();
    float valor = 0;
    int qnt;

    printf("Digite quantos numero voce deseja colocar na pilha: ");
    scanf("%d", &qnt);

    for(int i = 0; i < qnt; i++){
        printf("Divite o valor %d da pilha: ", i+1);
        scanf("%f", &valor);
        push(p, valor);
    }

    printf("\n");
    pilhaImprime(p);

    printf("\n");

    valor = pop(p);

    printf("\n");
    pilhaImprime(p);

    printf("\nValor do topo: %.2f", topo(p));


    pilhaLibera(p);
    return 0;
}