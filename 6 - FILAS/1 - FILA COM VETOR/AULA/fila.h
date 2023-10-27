/*Arquivo de protótipo do tipo fila*/

typedef struct fila Fila;

/*Cria uma fila vazia*/
Fila* criaFila();

/*Verifica se a fila está vazia*/
int filaVazia(Fila *f);

/*Insere intens na fila criada*/
void insere(Fila *f, float valor);

/*Remove o elemento da fila*/
float remova(Fila *f);

/*Libera a memória da fila*/
void libera(Fila *f);

/*Imprime os elementos com vetor*/
void filaImprime(Fila *f);
