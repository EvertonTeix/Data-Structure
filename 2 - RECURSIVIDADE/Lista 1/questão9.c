#include <stdio.h>
#include <stdlib.h>

void mostrarString(char *string){
    if(string[0] == '\0'){
        return;
    }else{
        mostrarString(string + 1);
        printf("%c", *string);
    }
}

int main(){

    char vetor[] = "Hello World";
    mostrarString(vetor);

    return 0;
}