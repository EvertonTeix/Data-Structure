/*
Autores: 

Antonio Everton Coelho Teixeira - 540649
Carlos Thaynner de Araúro Barbosa - 555237
Hitalécio Gomes Mesquita - 554444

Descrição geral do TAD:

Este TAD trabalha a manipulação de vetores usando tipo estruturado e alocação dinâmica, e tem as funcionalidades descritas abaixo: 
*/

/*Aquivo de protótipo do tipo vetor.c*/

typedef struct vetor Vetor;

/*Função que cria um vetor de tamanho n*/
Vetor* criaVetor(int n);

/*Função que libera a memória alocada para um vetor.*/
void liberaVetor(Vetor* v);

/*Função que retorna o tamanho de um vetor.8*/
int tamanhoVetor(Vetor* v);

/*Função que acessa o conteúdo de uma determinada posição i do vetor.*/
float acessa(Vetor* v, int i);

/*Função que atribui um conteúdo c a uma determinada posição i do vetor.*/
void atribui(Vetor* v, int i, float c);

/*Função que retorna o maior elementos do vetor.*/
float maior(Vetor* v);

/*Função que retorna o menor elementos do vetor.*/
float menor(Vetor* v);

/*Função que lista todos os elementos do vetor. A listagem deve se apresentar de forma organizada como uma lista na mesma linha.*/
void listarVetor(Vetor* v);

/*Função que retorna a soma de todos os elementos de um vetor.*/
float somaVetor(Vetor* v);

/*Função que retorna a soma dos n primeiros elementos do vetor.*/
float somaElementos(Vetor* v, int n);

/*Função que retorna um vetor resultante da soma dos elementos
correspondentes de dois vetores. A função deverá verificar se os vetores pas-
sados tem o mesmo tamanho.*/
Vetor* somaVetores(Vetor* v1, Vetor* v2);

/*Função que mostra a soma dos elementos correspondentes
de dois vetores do mesmo tamanho. A função deverá verificar se os vetores passados tem o mesmo tamanho.*/
void mostrarSomaVetores(Vetor* v1, Vetor* v2);