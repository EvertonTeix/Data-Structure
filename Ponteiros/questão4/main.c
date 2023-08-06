#include <stdio.h>
#include <stdlib.h>

void trocarValores(int *a, int *b){
    int auxiliar = *a;
    *a = *b;
    *b = auxiliar;
}

int main()
{
    int a,b;

    printf("Digite o valor de A: ");
    scanf("%d", &a);

    printf("Digite o valor de B: ");
    scanf("%d", &b);

    trocarValores(&a,&b);

    printf("\nA: %d, B: %d", a,b);

    return 0;
}
