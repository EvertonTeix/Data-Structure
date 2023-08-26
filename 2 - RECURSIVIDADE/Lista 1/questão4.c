#include <stdio.h>
#include <stdlib.h>

int somaVetor(int *v, int n){

    if(n == 0){
        return v[0];
    }else{
        return v[n] + somaVetor(v, n-1);
    }
}

int main(){

    int v[10];

    for(int i = 0; i < 10; i++){
        printf("Digite o valor %d do vetor", i+1);
        scanf("%d", &v[i]);
    }

    printf("A soma dos elementos do vetor e: %d", somaVetor(v, 9));

    return 0;
}