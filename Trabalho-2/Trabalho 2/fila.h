/*Arquivo de Protótipo das Funções do arquivo fila.c*/

/*
Autores: 

Antonio Everton Coelho Teixeira - 540649
Carlos Thaynner de Araúro Barbosa - 555237
Hitalécio Gomes Mesquita - 554444

*/

#define TAM 10

/*Redefinição da struct fila*/
typedef struct fila Fila;

/*Redefinição da struct senha*/
typedef struct senha Senha;

/*Cria uma fila vazia.*/
Fila* criaFila();

/*Verifica se uma fila está vazia.*/
int filaVazia(Fila *f);

/*Insere elementos numa fila.*/
void insere(Fila *f, Senha* num);

/*Remove elementos de uma fila e retorna o elemento removido.*/
Senha* remova(Fila *f);

/*Imprime a fila.*/
void imprimeFila(Fila *f);

/*Imprime a senha retirada*/
void imprimeSenha(Senha *senha);

/*Libera o espaço alocado para a fila.*/
void liberaFila(Fila *f);

/*Retorna o tamanho da fila*/
int tamanhoFila(Fila *f);

/*Gera uma senha do tipo normal*/
Senha* gerarSenhaNormal(int num);

/*Gera uma senha do tipo prioritária*/
Senha* gerarSenhaPrioritaria(int num);


