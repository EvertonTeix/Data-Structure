#include <stdio.h>
#include <stdlib.h>
#include "circulo.h"
#include <math.h>

struct circulo {
    Ponto *ponto;
    float raio;
};

Circulo* circ_cria(float x, float y, float r){
    Circulo *c = (Circulo*) malloc(sizeof(Circulo));
    if (c == NULL){
		printf("Memoria insuficiente!\n");
		exit(1);
	}
    c->ponto = cria(x,y);
    c->raio = r;
    return c;
}

void circ_libera(Circulo *c){
    libera(c->ponto);
    free(c);
}

float circ_area(Circulo *c){
    float area;
    area =  PI * c->raio * c->raio;
    return area;
}

int circ_interior(Circulo *c, Ponto *p){
    float dist = distancia(c->ponto,p);
    if (dist < c->raio) {
        return 1;
    }else {
        return 0;
    }   
}

float circunferencia(Circulo *c){
    return 2 * c->raio * PI;
}

void alteraPonto(Circulo *c, float x, float y){
    atribui(c->ponto, x, y); //usando função do TAD ponto.
}

void mostraCoordenadaCirculo(Circulo *c){
    mostraCoordenadas(c->ponto);
}

void acessaCirculo(Circulo *c, Ponto *p, float *r){

    float x, y;
    acessa(c->ponto, &x, &y);
    *r = c->raio;
    atribui(p, x, y);
}

void mostraElementosCirculo(Circulo *c) {

    float x, y;
    acessa(c->ponto, &x, &y);
    printf("\nCentro: (%.2f, %.2f) Raio: %.2f\n", x, y, c->raio);
}
