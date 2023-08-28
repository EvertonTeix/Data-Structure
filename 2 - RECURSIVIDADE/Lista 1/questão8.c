#include <stdio.h>

int numeroOcorrencias(char *string, char n){
    if(string[0] == '\0'){
        return 0;
    }else{
        if (string[0] == n){
            return 1 + numeroOcorrencias(string + 1, n);
        } else {
            return numeroOcorrencias(string + 1, n);
        }
    }
}
int main(){

    char vetor[] = "everton";
    char n = 'e';

    printf("%d", numeroOcorrencias(vetor, n));
    return 0;
}