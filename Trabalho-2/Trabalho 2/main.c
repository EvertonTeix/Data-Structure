#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include "fila.h"
#include "pilha.h"

int main()
{

    Fila *normal = criaFila();
    Fila *prioritaria = criaFila();
    Pilha *pilha = criaPilha();
    int senhaNormal = 1;
    int senhaPrioritaria = 1;
    int n, p, contador = 0;

    do
    {
        printf("\nMENU DE CONTROLE\n1 - Menu caixa\n2 - Menu cliente\n3 - Encerrar\n");
        printf("Digite a opcao desejada: ");
        scanf("%d", &n);

        if (n == 3){
            exit(1);
        }

        int num, op;

        switch (n){

        case 1:

            do{
                printf("\nCAIXA\n1 - Chamar o proximo\n2 - Visualizar filas\n3 - Ultimas chamadas\n4 - Voltar ao menu anterior\n");
                printf("Digite a opcao desejada: ");
                scanf("%d", &op);

                if (op == 4){
                    break;
                }

                switch (op){

                case 1:

                        if ((!filaVazia(normal) && (contador == 2 || contador == 1))) {

                            // Chama um cliente da fila normal
                            Senha *cliente = remova(normal);
                            printf("\nCliente da fila normal chamado: ");
                            imprimeSenha(cliente);
                            push(pilha, cliente);
                            contador++;


                        } else if ((!filaVazia(prioritaria) && (contador == 3 || contador == 0))) {

                            // Chama um cliente da fila prioritária
                            Senha *cliente = remova(prioritaria);
                            printf("\nCliente da fila prioritaria chamado:");
                            imprimeSenha(cliente);
                            push(pilha, cliente);
                            contador = 1;


                        } else if(filaVazia(prioritaria) && filaVazia(normal)){
                            printf("\nFilas vazias. Aguarde clientes.\n");

                        }else if(filaVazia(normal)){

                            Senha *cliente = remova(prioritaria);
                            printf("\nCliente da fila prioritaria chamado:");
                            imprimeSenha(cliente);
                            push(pilha, cliente);
                            contador = 0;


                        }else if (filaVazia(prioritaria)){

                            Senha *cliente = remova(normal);
                            printf("\nCliente da fila normal chamado: ");
                            imprimeSenha(cliente);
                            push(pilha, cliente);
                            contador = 0;

                        }
                    
                    break;
            
                case 2:

                    printf("\nFila Normal: %d clientes\n\n", tamanhoFila(normal));
                    imprimeFila(normal);
                    printf("\nFila Prioritaria: %d clientes\n\n", tamanhoFila(prioritaria));
                    imprimeFila(prioritaria);
                    printf("\n");
                    break;
                    
                case 3:

                    if (pilhaVazia(pilha)){

                        printf("\nNao ha registro das ultimas chamadas\n");

                    }else{

                        printf("\n");
                        imprimePilha(pilha);
                    }

                    break;

                case 4:

                    break;

                default:

                    if (getchar() != '\n'){
                        printf("\nOpcao Invalida!\n");
                    }else{
                        printf("Opcao Invalida!\n");
                    }
                    
                    break;
                }
            } while (op != 4);

            break;

        case 2:

            do{
                printf("\nRETIRAR SENHA\n1 - Normal\n2 - Prioritaria\n3 - Voltar ao menu anterior\n");
                printf("Digite a opcao desejada: ");
                scanf("%d", &p);

                if (p == 3){

                    break;
                }

                switch (p){

                case 1:

                    if (tamanhoFila(normal) + 1 > 10){
                        printf("\nFila esta cheia.\n");

                    }else{

                        Senha *novaSenha = gerarSenhaNormal(senhaNormal);
                        printf("\nA senha retirada foi: ");
                        imprimeSenha(novaSenha);
                        insere(normal, novaSenha);
                        senhaNormal++;
                    }

                    break;

                case 2:
                
                    if (tamanhoFila(prioritaria) + 1 > 10){
                        printf("\nFila esta cheia.\n");

                    }else{

                        Senha *novaSenha = gerarSenhaPrioritaria(senhaPrioritaria);
                        printf("\nA senha retirada foi: ");
                        imprimeSenha(novaSenha);
                        insere(prioritaria, novaSenha);
                        senhaPrioritaria++;
                    }

                    break;

                case 3:

                    break;

                default:

                    if (getchar() != '\n'){
                        printf("\nOpcao Invalida!\n");
                    }else{
                        printf("Opcao Invalida!\n");
                    }

                    break;
                }
            } while (p != 3);

            break;

        default:

            if (getchar() != '\n'){
                printf("\nOpcao Invalida!\n");
            }else{
                printf("Opcao Invalida!\n");
            }

            break;
        }

    } while (n != 3);

    return 0;
}