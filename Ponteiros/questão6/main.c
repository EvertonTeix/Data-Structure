#include <stdio.h>
#include <stdlib.h>


void dobro(int *a, int *b){

    *a = *a * 2;
    *b = *b * 2;
}

int main()
{
    int a, b;

    printf("Digite um numero: ");
    scanf("%d", &a);

    printf("Digite um numero: ");
    scanf("%d", &b);

    dobro(&a,&b);

    printf("A = %d\n", a);
    printf("B = %d\n", b);

    return 0;
}
