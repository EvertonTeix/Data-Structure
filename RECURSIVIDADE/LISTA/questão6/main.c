#include <stdio.h>
#include <stdlib.h>

int somatorio(int n){

    if(n == 1){
        return 1;
    }else {
        return (n*n) + somatorio(n-1);
    }
}

int main()
{
    int n;
    printf("Digite um valor: ");
    scanf("%d", &n);

    printf("O resultado e: %d", somatorio(n));
    return 0;
}
