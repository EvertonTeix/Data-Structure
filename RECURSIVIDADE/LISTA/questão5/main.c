#include <stdio.h>
#include <stdlib.h>

int fatorial(int n){

    if(n == 0 || n == 1){
        return 1;
    } else {
        return n * fatorial(n-1);
    }
}

float valorSerie(int n){

    if(n == 1){
        return 1;
    }else{
        return (1.0 / fatorial(n)) + valorSerie(n-1);
    }
}
int main()
{
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);

    printf("\n Valor final: %.2f", valorSerie(n));
    return 0;
}
