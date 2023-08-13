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

/*Retorna a circunferência de um circulo (lista 2 questão 1)*/
float circunferencia(Circulo *c);

/*Alterar raio do circulo (alternativa 'b' da questão 2 lista2)*/
void alteraRaio(Circulo *c, float r);

/*Altrar o valor do ponto (centro) do círculo - 2c*/
void alteraPonto(Circulo *c, float x, float y);

/*Mostrar coordenada do centro do circulo*/
void mostraCoordenadaCirculo(Circulo *c);