#include <stdio.h>
#include <stdlib.h>

int somaVetor(int *n, int tamanho){

    if(tamanho == 0){
        return 0;
    }else{
        return n[tamanho - 1] + somaVetor(n, tamanho -1);
    }

}
int main()
{
    int vetor[5];

    for(int i = 0; i < 5; i++){
        printf("Digite o valor %d: ", i+1);
        scanf("%d", &vetor[i]);
    }

    printf("Soma: %d", somaVetor(&vetor, 5));
    return 0;
}
