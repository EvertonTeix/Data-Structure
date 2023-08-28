#include <stdio.h>

int tamanhoString(char *string){

    if(string[0] == '\0'){
        return 0;
    }else{
        return 1 + tamanhoString(string + 1);
    }
}
int main(){

    char vetor[] = "Everton";

    printf("%d", tamanhoString(vetor));

    return 0;
}