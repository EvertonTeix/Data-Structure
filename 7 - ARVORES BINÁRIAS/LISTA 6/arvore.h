//protótipo do tipo arvore.c

typedef struct arv Arv;


/*Cria uma arvore vazia*/
Arv* criaVazia();

//Cria uma arvore nao vazia
Arv* cria(int c, Arv *sae, Arv *sad);

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
int pertence(Arv *a, int c);

/*Retorna a quantidade de nos de uma arvore binaria*/
int nos(Arv *a);

/*Retorna a quantidade de folhas de uma arvore binaria*/
int folhas(Arv *a);

/*Retorna a quantidade de nós que possuem apenas um filho*/
int um_filho(Arv *a);

/*Insere um elemento na arvore binaria*/
Arv* insere(Arv *a, int n);

/*Consulta se o no esta na arvore*/
int consultarNo(Arv *a, int n);

/*Remove um no da arvore*/
Arv* retira(Arv* a, int v);
