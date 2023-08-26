#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int somatorio(int  n){
    if(n == 1){
        return 1;
    }else{
        return pow(n, 2) + somatorio(n-1);
    }
}
int main(){

    int n;
    
    printf("Digite um numero: ");
    scanf("%d", &n);

    printf("O resultado e: %d", somatorio(n));
    return 0;
}