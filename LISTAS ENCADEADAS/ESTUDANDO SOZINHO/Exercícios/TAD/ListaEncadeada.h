//Arquivo de protótipo de ListaEncadeada.c

//Tipo exportado
typedef struct lista Lista;

//criar lista vazia
Lista* criarLista();

/*Insere um elemento no início da lista e retorna
a lista atualizada */
Lista* insere(Lista * l, int i);

/*Imprime os valores dos elementos */
void imprime(Lista* l);

//Verifica se alista está vazia
int vazia(Lista * l);

/*Retorna o ponteiro que aponta para o elemento
ou NULL caso contrário*/
Lista* busca(Lista * l, int i);

/*Remove um elemento da lista*/
Lista* remova(Lista * l, int v);

/*Libera todos os espaços usados pela lista*/
void libera(Lista *l);