#include <stdio.h>
#include <stdlib.h>

int fatorial(int n){
    if(n <=1){
        return 1;
    }else{
        return n * fatorial(n-1);
    }
}

float serie(int n){
    if(n == 1){
        return 1;
    }else{
        return (1.0 / fatorial(n)) + serie(n-1);
    }
}

int main(){

    int n;
    
    printf("Digite um numero: ");
    scanf("%d", &n);

    printf("O resultado e: %.2f", serie(n));

    return 0;
}