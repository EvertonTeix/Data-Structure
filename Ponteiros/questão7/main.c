#include <stdio.h>
#include <stdlib.h>

void soma(int *a, int*b){

    *a = *a + *b;

}

int main()
{
    int a, b;

    printf("Digite um valor: ");
    scanf("%d", &a);

    printf("Digite outro valor: ");
    scanf("%d", &b);

    soma(&a,&b);

    printf("\nA: %d", a);
    printf("\nB: %d", b);
    return 0;
}
