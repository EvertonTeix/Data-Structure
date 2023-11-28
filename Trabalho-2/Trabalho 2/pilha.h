/*Arquivo de Protótipo das Funções do arquivo pilha.c*/

/*
Autores: 

Antonio Everton Coelho Teixeira - 540649
Carlos Thaynner de Araúro Barbosa - 555237
Hitalécio Gomes Mesquita - 554444

*/

/*Redefinição da struct lista*/
typedef struct lista Lista;

/*Redefinição da struct pilha*/
typedef struct pilha Pilha;

/*Função que cria pilha vazia*/
Pilha* criaPilha();

/*Função de inserir elementos na pilha*/
void push(Pilha *p, Senha *s);

/*Retorna se a pilha está vazia*/
int pilhaVazia(Pilha *p);

/*Função de desempilhar e retorna o elemento desempilhado*/
Senha* pop(Pilha *p);

/*Libera a pilha*/
void liberaPilha(Pilha *p);

/*Imprime a pilha*/
void imprimePilha(Pilha *p);