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

    printf("Endere�o de x: %p\n", &x);
    printf("Endere�o de y: %p\n", &y);

    if (&x > &y) {
        printf("Conte�do do endere�o maior (x): %d\n", x);
    } else if (&y > &x) {
        printf("Conte�do do endere�o maior (y): %d\n", y);
    } else {
        printf("Os endere�os s�o iguais!\n");
    }

    return 0;
}
