/*
1 - fa�a uma fun��o (de forma interativa) que mostre a soma dos n primeiros n�meros inteiros;
2 - fa�a a vers�o recursiva da quest�o anterior;
*/

#include <stdio.h>
#include <stdlib.h>

// quest�o 1:

/*int main()
{
    int n, soma = 0;

    printf("Digite um numero: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        soma += i;
    }

    printf("%d", soma);

    return 0;
}

*/

// quest�o 2:

int soma(int n){

    if(n == 1){
        return 1;

    }else{
        return n + soma(n-1);
    }
}

int main (){
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    if(n < 0){
        printf("Valor negativo.");
    }else if (n == 0){
        printf("%d", n);
    }else{
    printf("\nSoma: %d", soma(n));
    }

    return 0;
}
