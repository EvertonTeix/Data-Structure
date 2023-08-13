#include <stdio.h>
#include <stdlib.h>
#include "circulo.h"
#include "ponto.h"

int main(){

    //criando um círculo

    Circulo *meuCirculo;
    meuCirculo = circ_cria(0.0, 0.0, 3.0);

    //testando a função da área do círculo
    float area = circ_area(meuCirculo);
    printf("\nA area do circulo e: %.1f", area);

    //mostrar se um ponto está dentro do circulo

    //criando um ponto para teste:
    Ponto *ponto;

    ponto = cria(1.0, 2.0);

    /*mostrar coordenada do ponto criado (questão 1 da lista2)*/
    mostraCoordenadas(ponto);

    // Testando a função circ_interior
    if(circ_interior(meuCirculo, ponto)){
        printf("\nO ponto esta dentro do circulo");
    }else {
        printf("\nO ponto não esta dentro do circulo");
    }

    /*Testando a alternativa 'a' da questão 2*/
    printf("\nA circunferencia do circulo e: %.2f", circunferencia(meuCirculo));

    /*Alterar ponto do círculo: 2c*/
    alteraPonto(meuCirculo, 1.0, 1.0);

    /*Mostrando o ponto do círculo alterado:*/
    mostraCoordenadaCirculo(meuCirculo);

    // Liberando memória
    circ_libera(meuCirculo);
    libera(ponto);

    return 0;
}