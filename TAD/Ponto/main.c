#include <stdio.h>
#include "ponto.h"

/*
 Crie dois pontos;
 Calcule e mostre a distância entre esses dois pontos;
 Mostre as coordenadas dos pontos;
 Altere o valor de um dos pontos;
*/

int main(){
	
	Ponto *meuPonto1;
	Ponto *meuPonto2;

	float dist, x1, y1, x2, y2;

	meuPonto1 = cria(2.0, 4.5);
	meuPonto2 = cria(0.0, 0.0);

	dist = distancia(meuPonto1, meuPonto2);
	printf("A distancia entre os dois pontos criados e: %2.1f", dist);

	acessa(meuPonto1, &x1, &y1);
	acessa(meuPonto1, &x2, &y2);

	printf("\nCoordenada ponto 1: (%.1f, %.1f)\n", x1, y1);
	printf("Coordenada ponto 2: (%.1f, %.1f)\n", x2, y2);

	atribui(meuPonto1, 3.0, 4.0);
	acessa(meuPonto1, &x1, &y1);

	printf("\nNova coordenada ponto 1: (%.1f, %.1f)\n", x1, y1);
	printf("Coordenada ponto 2: (%.1f, %.1f)\n", x2, y2);

	return 0; 
} 