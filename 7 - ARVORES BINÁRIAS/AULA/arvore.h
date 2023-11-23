//protótipo do tipo arvore.c

typedef struct arv Arv;


/*Cria uma arvore vazia*/
Arv* criaVazia();

//Cria uma arvore nao vazia
Arv* cria(char c, Arv *sae, Arv *sad);

/*Retorna se a árvore está vazia ou não*/
int arvoreVazia(Arv *a);

//Libera Arvore
Arv* libera(Arv *a);

//Imprime a arvore pré-ordem trata raiz, percorre sae, percorre sad;
void imprime(Arv *a);

//Imprime arvore simétrica percorre sae, trata raiz, percorre sad;
void imprimeSim(Arv *a);

//Imprime arvore pós-ordem percorre sae, percorre sad, trata raiz.
void imprimePos(Arv *a);

//Retorna se a informação pertence ou não à árvore
int pertence(Arv *a, char c);
