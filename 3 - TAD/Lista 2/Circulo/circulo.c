#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "circulo.h"
#include "ponto.h"

struct circulo{
    Ponto *p;
    float raio;
};

Circulo* circ_cria(float x, float y, float r){
    Circulo* circulo = (Circulo*) malloc(sizeof(Circulo));
    if(circulo == NULL){
        printf("Memoria insuficiente!\n");
        exit(1);
    }
    circulo->p = cria(x,y);
    circulo->raio = r;
    return circulo;
}

void circ_libera(Circulo *c){
    libera(c->p);
    free(c);
}

float circ_area(Circulo *c){
    return PI * pow(c->raio, 2);
}

float circunferencia(Circulo *c){
    return 2 * PI * c->raio;
}

void alteraRaio(Circulo *c, float r){
    c->raio = r;
}

void alteraPonto(Circulo *c, float x, float y){
    atribui(c->p, x, y);
}

void acessaCirculo(Circulo *c, Ponto *p, float *r){

    float x, y;
    acessa(c->p, &x, &y);
    atribui(p, x, y);
    *r = c->raio;
}

void mostraElementosCirculo(Circulo *c){

    float x,y;
    acessa(c->p, &x,&y);

    printf("\nCirculo: ");
    printf("\nRaio: %.2f", c->raio);
    printf("\nCentro: (%.2f,%.2f)", x,y);

}

int circ_interior(Circulo *c, Ponto *p){
    float dist = distancia(c->p,p);
    if (dist <= c->raio) {
        return 1;
    }else {
        return 0;
    }   
}