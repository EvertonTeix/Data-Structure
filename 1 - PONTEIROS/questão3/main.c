#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(0, "Portuguese");

    int x, y;

    printf("Digite o valor de x: ");
    scanf("%d", &x);

    printf("Digite o valor de y: ");
    scanf("%d", &y);

    printf("Endereço de x: %p\n", &x);
    printf("Endereço de y: %p\n", &y);

    if (&x > &y) {
        printf("Conteúdo do endereço maior (x): %d\n", x);
    } else if (&y > &x) {
        printf("Conteúdo do endereço maior (y): %d\n", y);
    } else {
        printf("Os endereços são iguais!\n");
    }

    return 0;
}
