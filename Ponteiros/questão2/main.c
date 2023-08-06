#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int y;

    if(&x > &y){
        printf("X: %p (maior)\n", &x);
        printf("Y: %p\n", &y);
    } else if (&y > &x){
        printf("X: %p\n", &x);
        printf("Y: %p  (maior)\n", &y);
    } else
    printf("Valores iguais!\n");
    return 0;
}
