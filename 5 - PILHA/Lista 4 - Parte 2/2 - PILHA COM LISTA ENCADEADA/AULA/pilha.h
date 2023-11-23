/*Arquivo de protótipo do tipo pilha*/

typedef struct lista Lista;

typedef struct  pilha Pilha;

/*Cria uma pilha vazia*/
Pilha* criaPilha();

/*Insere um elemento no início da lista*/
void push(Pilha *p, float valor);

/*Função de remoção*/
float pop(Pilha *p);

/*Varifica se a pilha está vazia*/
int pilhaVazia(Pilha *p);

/*Libera memória*/
void pilhaLibera(Pilha *p);

/*Imprime os elementos com lista encadeada*/
void pilhaImprime(Pilha *p);

