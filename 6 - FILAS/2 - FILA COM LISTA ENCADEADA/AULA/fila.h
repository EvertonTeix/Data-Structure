/*Arquivo de protótipo do tipo fila.c*/

typedef struct lista Lista;
typedef struct fila Fila;

/*Cria uma fila vazia*/
Fila* criaFila();

/*Insere um elemento no final da lista*/
void insere(Fila *f, float valor);

/*Remove um elemento da fila*/
float remova(Fila *f);

/*Verifica se a fila está vazia*/
int filaVazia(Fila *f);

/*Libera memória*/
void filaLibera(Fila *f);

/*Imprime os elementos com lista encadeada*/
void filaImprime(Fila *f);

