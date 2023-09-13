#include <stdio.h>
#include <stdlib.h>
#include "circulo.h"

int main(){

    float x, y, raio;

    printf("Digite os valores para o circulo: ");
    printf("\nDigite o x: ");
    scanf("%f", &x);

    printf("\nDigite o y: ");
    scanf("%f", &y);

    printf("\nDigite o raio: ");
    scanf("%f", &raio);

    Circulo *c = circ_cria(x,y,raio);

    printf("\nA area do circulo e: %.2f", circ_area(c));
    printf("\nA circunferencia do circulo e: %.2f", circunferencia(c));

    mostraElementosCirculo(c);

    float novoX, novoY, novoRaio;
    printf("\nDigite os novos valores para o ponto do circulo: ");
    printf("\nDigite o x: ");
    scanf("%f", &novoX);
    printf("\nDigite o y: ");
    scanf("%f", &novoY);
    alteraPonto(c, novoX, novoY);
    mostraElementosCirculo(c);

    printf("\nDigite o valor para alterar o raio: ");
    scanf("%f", &novoRaio);
    alteraRaio(c,novoRaio);
    mostraElementosCirculo(c);

    printf("\nA nova area do circulo e: %.2f", circ_area(c));
    printf("\nA nova circunferencia do circulo e: %.2f", circunferencia(c));

    float xp, yp;

    printf("\nDigite um ponto para saber se esta dentro do circulo: (x,y): ");
    scanf("%f%f", &xp, &yp);

    Ponto *p = cria(xp, yp);

    if(circ_interior(c,p)){
        printf("\nO ponto esta dentro do circulo.");
    }else{
        printf("\nO ponto nao esta dentro do circulo.");
    }

    circ_libera(c);
    return 0;
}