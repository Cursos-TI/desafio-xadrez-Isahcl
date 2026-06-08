#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
   int bispo = 5;
   int torre = 5;
   int rainha = 8;
   int cavalo = 2;
   int i;
   int j;
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
   printf("Movimentacao do Bispo: \n");
    for(int i = 0; i < bispo; i++){
    printf("Cima,direita\n");
   }
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("Movimentacao da Torre: \n");

    int contTorre = 0;
    while(contTorre < torre){
        printf("Direita\n");
        contTorre++;
    }
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("Movimentacao da Rainha: \n");

    int contRainha = 0;
    do {
        printf("Esquerda\n");
        contRainha++;
    } while(contRainha < rainha);
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    printf("Movimento do cavalo: \n");

    for(int i = 0; i < cavalo; i++){    //Loop externo para o primeiro movimento
        printf("Cima\n"); }
    
    int conthorizontal = 0;             //Loop interno para o segundo movimento
    while(conthorizontal < 1){
        printf("Direita\n");
        conthorizontal++;
    }
      

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
      
    void moverbispo(int casas){
        if (casas == 0){
            return;
        }
    
      printf("Diagonal superior direita\n");
      moverbispo(casas - 1);
    }

    void movertorre(int casas){
         if (casa == 0){
           return;
         }
         printf("Direita\n");
         movertorre(casas - 1);
    }
     
    void moverrainha(int casas){
        if (casas = 0){
            return;
        }
        printf("Esquerda\n");
        moverrainha(casas - 1);
        }
    
        int main(){
            printf("Movimento torre\n");
            movertorre(5);

            printf("\n Movimento bispo\n");
            moverbispo(5);

            printf("\n Movimento rainha\n");
            moverrainha(8);

            printf("\n Movimento cavalo\n");


            for (int vertical = 1; vertical <= 2; vertical++){
                if (vertical == 0){
                    continue;
                }
                printf("Cima\n");
            
                for(int horizontal = 1; horizontal <= 1; horizontal++){
                    printf("Direita\n");

                    if (horizontal == 1){
                        break;
                    }
                }
            }
        }
    return 0;

    }


