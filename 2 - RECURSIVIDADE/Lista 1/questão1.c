/*1. Faça uma função que recebe n e retorne o valor de 2^n.*/

#include <stdio.h>
#include <stdlib.h>

int potencia2(int n){

    if(n < 1){
        return 1;
    }else{
        return 2 * potencia2(n - 1);
    }
}

int main(){
    int n = 0;

    printf("Digite um numero: ");
    scanf("%d", &n);

    printf("O resultado e: %d", potencia2(n));
    return 0;
}