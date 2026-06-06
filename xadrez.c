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
      return 0;
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    

