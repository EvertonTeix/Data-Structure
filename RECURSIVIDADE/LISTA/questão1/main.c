#include <stdio.h>
#include <stdlib.h>

int potencia(int n){

    if(n == 0){
        return 1;
    } else {
        return 2 * potencia(n-1);
    }
}
int main()
{
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    printf("Resultado de 2 elevado ao numero digitado: %d\n", potencia(n));
    return 0;
}
