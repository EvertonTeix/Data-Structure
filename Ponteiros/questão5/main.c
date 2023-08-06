#include <stdio.h>
#include <stdlib.h>

void funcaoTrocaValores(int *a, int *b){

    if(*a < *b){
        int auxiliar = *a;
        *a = *b;
        *b = auxiliar;
    }
}

int main()
{
    int a,b;

    printf("Digite um numero: ");
    scanf("%d", &a);

    printf("Digite um numero: ");
    scanf("%d", &b);

    funcaoTrocaValores(&a,&b);

    printf("A = %d \n", a);
    printf("B = %d \n", b);

    return 0;
}
