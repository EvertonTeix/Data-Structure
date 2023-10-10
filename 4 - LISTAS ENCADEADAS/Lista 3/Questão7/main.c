#include <stdio.h>
#include <stdlib.h>
#include "pessoa.h"

int main(){

    Pessoa *p1 = criarLista();

    p1 = inserirContato(p1, 19, "Everton");
    p1 = inserirContato(p1, 20, "Maik");
    p1 = inserirContato(p1, 70, "Zeca Pagodinho");

    printf("\n");
    mostrarLista(p1);

    p1 = removerContato(p1, "Maik");

    printf("\nLista apos remocao:\n");
    mostrarLista(p1);
    printf("\n\n");

    buscarMostrarContato(p1, "Zeca Pagodinho");

    liberarLista(p1);

    return 0;
}
