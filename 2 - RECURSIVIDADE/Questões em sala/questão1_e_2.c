/*
1 - Faça uma função (de forma interativa) que mostre a soma dos n primeiros numeros inteiros
2 - Faça a versão recursiva da função anterior*/


#include <stdlib.h>
#include <stdio.h>

int soma(int n){
    int soma = 0;

    for(int i = 1; i <= n; i++){
        soma += i;
    }

    return soma;
}

int somaRecursiva(int n){
    if(n == 1){
        return 1;
    }else{
        return n + somaRecursiva(n-1);
    }
}

int main(){

    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    printf("\nA soma e: %d", soma(n));
    printf("\nDe forma recursiva: %d", somaRecursiva(n));

    return 0;
}