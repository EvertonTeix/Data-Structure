#include <stdio.h>
#include <string.h>

void imprimirStringRecursiva(char *string){

    if(string[0] != '\0'){
        printf("%c\n", string[0]);
        imprimirStringRecursiva(string + 1);
    }
}

int main(){

    char vetor[] = "Hello World";

    imprimirStringRecursiva(vetor);
    return 0;
}