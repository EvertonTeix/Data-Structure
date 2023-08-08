/*
3 - faça uma função (de forma interativa) para calcular a base x elevado a um expoente y;
4 - faça a versão recursiva da função anterior;
*/

//questão 1

#include <stdio.h>
#include <stdlib.h>

/*int expoente (int x, int y){

    int resposta = 1;

    for(int i = 0; i < y; i++){
        resposta *= x;
    }

    return resposta;
}
int main()
{
    int x,y;

    printf("Digite o numero que vai representar a base: ");
    scanf("%d", &x);

    printf("Digite o numero que vai representar o expoente: ");
    scanf("%d", &y);

    printf("\nO resultado e: %d", expoente(x,y));
    return 0;
}
*/

//questão 2

int expoenteRecursivo(int x, int y){

    if(y == 0){
        return 1;
    }else{
        return x * expoenteRecursivo(x, y-1);
    }
}

int main(){

    int x,y;

    printf("Digite o numero que vai representar a base: ");
    scanf("%d", &x);

    printf("Digite o numero que vai representar o expoente: ");
    scanf("%d", &y);

    printf("\nO resultado e: %d", expoenteRecursivo(x,y));

    return 0;
}
