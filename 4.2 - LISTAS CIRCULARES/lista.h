/*Arquivo de protótipo do tipo lista.c*/

typedef struct listaCircular LCircular;

/*Inserindo o primeiro elemento e retorna uma lista*/
LCircular* insereListaVazia(LCircular *l, int elemento);

/*Insere os demais elementos e retorna a lista atualizada*/
LCircular* insereFinal(LCircular *l, int elemento);

/*Imprime a lista*/
void imprimeCircular(LCircular *l);

