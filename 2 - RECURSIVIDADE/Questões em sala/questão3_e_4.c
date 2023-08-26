/*
3 - Faça uma função (de forma iterativa) para calcular a base x elevado a um expoente y.
4 - Faça a versão recursiva da função anterior.*/


#include <stdlib.h>
#include <stdio.h>

int potencia(int x, int y){

    int resultado = 1;

    for(int i = y; i > 0; i--){
        resultado *= x;
    }

    return resultado;
}

int potenciaRecursiva(int x, int y){
    if(y == 0){
        return 1;
    }else{
        return x * potenciaRecursiva(x, y-1);
    }
}
int main(){

    int x, y;

    printf("Digite um numero para representar a base: ");
    scanf("%d", &x);

    printf("Digite um numero para representar o expoente: ");
    scanf("%d", &y);

    printf("\nO resultado e: %d", potencia(x, y));
    printf("\nDe forma recursiva: %d", potenciaRecursiva(x, y));

    return 0;
}