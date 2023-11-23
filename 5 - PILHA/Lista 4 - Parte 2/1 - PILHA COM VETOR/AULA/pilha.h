/*Arquivo de protótipo do tipo pilha*/

typedef struct pilha Pilha;

/*Cria uma pilha vazia*/
Pilha* criaPilha();

/*Insere um elemento na pilha */
void push(Pilha *p, float valor);       //push == inserir

/*Verifica se a pilha está vazia*/
int pilhaVazia(Pilha *p);

/*Remove o elemento do topo*/
float pop(Pilha *p);                    //pop == remover do topo

/*Libera a pilha*/
void pilhaLibera(Pilha *p);

/*Imprime os elementos com vetor*/
void pilhaImprime(Pilha *p);