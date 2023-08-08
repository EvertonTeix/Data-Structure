/*
1 - faça uma função (de forma interativa) que mostre a soma dos n primeiros números inteiros;
2 - faça a versão recursiva da questão anterior;
*/

#include <stdio.h>
#include <stdlib.h>

// questão 1:

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

// questão 2:

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
