#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main(){

    LCircular *l;

    l = insereListaVazia(l, 2);
    imprimeCircular(l);

    l = insereFinal(l, 23);
    l = insereFinal(l, 3);
    l = insereFinal(l, 21);
    l = insereFinal(l, 27);
    l = insereFinal(l, 90);
    imprimeCircular(l);

    return 0;
}