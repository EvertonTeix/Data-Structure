/*Arquivo de prtótipo do tipo Lista.c*/

typedef struct lista Lista;

/*Retorna uma lista vazia*/
Lista* criaLista();

/*Insere um elemento no início da lista e retorna a lista atualizada */
Lista* insere(Lista * l, int i);

/*Imprime os valores dos elementos */
void imprime(Lista * l);

/*Retorna 1 se vazia ou 0 se não vazia */
int vazia(Lista * l);

/*Retorna o ponteiro que aponta para o elemento ou NULL caso contrário*/
Lista* busca(Lista * l, int i);

/*Remove um elemento da lista*/
Lista* remova(Lista * l, int v);

/*Libera todos os espaços usados pela lista*/
void libera(Lista *l);

/*Insere no final da lista*/
Lista* insereFinal(Lista * l, int i);

/*Retorna o número de nós da lista que possuem o campo info com valores maiores
que n*/
int maioresQue(Lista *l, int n);

/*Retorna o ponteiro para o último nó de uma lista de inteiros.*/
Lista* ultimo(Lista *l);

/*Recebe duas listas de inteiros e retorna a lista resultante da
concatenação das duas listas recebidas como parâmetro.*/
Lista* concatena(Lista *l1, Lista *l2);

/*Receba como parâmetros uma lista e um valor inteiro n, retire
da lista todas as ocorrências de n e retorne a lista resultante.*/
Lista* retiraElemento(Lista *l, int n);

/*Testa se duas listas passadas como parâmetros são iguais.*/
int iguais(Lista *l1, Lista *l2);