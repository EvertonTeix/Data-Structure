#include "ponto.h"
#define PI 3.14

//Arquivo de protótipo de circulo.c

//Tipo exportado
typedef struct circulo Circulo;

//Funções exportadas

/*Criando*/
Circulo* circ_cria(float x, float y, float r);

/*Libera a memória*/
void circ_libera(Circulo *c);

/*Retorna a área do circulo*/
float circ_area(Circulo *c);

/*Verifica se o ponto está dentro do circulo*/
int circ_interior(Circulo *c, Ponto *p);