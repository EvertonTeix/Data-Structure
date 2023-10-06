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

