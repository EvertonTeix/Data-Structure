#include <stdio.h>
#include "ponto.h"

/*
• Crie dois pontos;
• Calcule e mostre a distância entre esses dois pontos;
• Mostre as coordenadas de um dos pontos;
• Altere o valor de um dos pontos;
*/

int main(){

	Ponto *p1 = cria(2.0, 2.5);
	Ponto *p2 = cria(1.0, 3.0);

	printf("\nA distancia entre esses dois pontos e: %f", distancia(p1, p2));

	float x1, y1, x2, y2;

	acessa(p1, &x1, &y1);
	acessa(p2, &x2, &y2);

	printf("\nAs coordenad.\as do ponto 1 e: (%.2f, %.2f)", x1, y1);
	printf("\nAs coordenadas do ponto 2 e: (%.2f, %.2f)", x2, y2);

	atribui(p2, 5.0, 6.0);
	acessa(p2, &x2, &y2);
	
	printf("\nNovos valores do ponto 2: (%.2f, %.2f)", x2, y2);

		
	return 0; 
	
} 