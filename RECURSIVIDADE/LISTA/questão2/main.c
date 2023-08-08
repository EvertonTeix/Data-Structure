#include <stdio.h>
#include <stdlib.h>

int tamanhoString(char *string){

    if(string[0] == '\0'){
        return 0;
    } else {
        return 1 + tamanhoString(string + 1);
    }
}
int main()
{
    char string[100];

    printf("Digite uma string: ");
    scanf("%[^\n]", &string);

    printf("Resultado: %d\n", tamanhoString(&string));
    return 0;
}
