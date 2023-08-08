#include <stdio.h>
#include <stdlib.h>

int ocorrencia(char *string, char letra){

    if(string[0] == '\0'){
        return 0;
    }
    else {
        int contador = 0;
        if (string[0] == letra) {
            contador = 1;
        }
        return contador + ocorrencia(string + 1, letra);
    }

}

int main()
{
    char string[100], letra;

    printf("Digite a string: ");
    scanf(" %[^\n]", &string);
    getchar();

    printf("Digite a letra: ");
    scanf(" %c", &letra);

    printf("\nNumero de ocorrencias: %d\n", ocorrencia(string, letra));
    return 0;
}
