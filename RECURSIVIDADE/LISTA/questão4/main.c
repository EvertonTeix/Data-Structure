#include <stdio.h>
#include <stdlib.h>

void imprime(char *string){

    if(string[0] != '\0'){
        printf("%c\n", string[0]);
        imprime(string + 1);
    }

}

void imprimeReverso(char *string){

    if(string[0] != '\0'){
        imprimeReverso(string + 1);
        printf("%c", string[0]);
    }

}

int main()
{
    imprimeReverso("palavra");
    return 0;
}
