/*Arquivo de protótipo do tipo pessoa.c*/

typedef struct pessoa Pessoa;

/*Retorna uma nova lista vazia*/
Pessoa* criarLista();

/*Insere um elemento na lista e retorna a lista atualizada*/
Pessoa* inserirContato(Pessoa *p, int i, char nome[]);

/*Remove um elemento da lista e retorna a lista atualizada*/
Pessoa* removerContato(Pessoa *p, char nome[]);

/*Mostra a lista de contatos*/
void mostrarLista(Pessoa *p);

/*Buscar e mostrar um contato*/
void buscarMostrarContato(Pessoa *p, char nome[]);

/*Libera a lista*/
void liberarLista(Pessoa *p);