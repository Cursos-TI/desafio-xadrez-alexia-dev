#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
#include <stdio.h>

int main() {
    /*---------- Nível Novato - Movimentação das Peças ----------*/
    // Declaração de constantes para o número de casas
    const int MOVIMENTOS_TORRE = 5;   // Torre move 5 casas para direita
    const int MOVIMENTOS_BISPO = 5;   // Bispo move 5 casas na diagonal
    const int MOVIMENTOS_RAINHA = 8;  // Rainha move 8 casas para esquerda

    /*---------- Implementação de Movimentação do Bispo ----------*/
    // Variável de controle para o loop
    int contador_bispo = 0;  
    
    printf("Bispo (diagonal superior direita):\n");
    // Loop while para movimento diagonal
    while(contador_bispo < MOVIMENTOS_BISPO) {
        printf("Cima Direita\n");  // Combinação de duas direções
        contador_bispo++;  // Atualização do contador
    }

    /*---------- Implementação de Movimentação da Torre ----------*/
    printf("\nTorre (movimento para direita):\n");
    // Loop for para movimento retilíneo
    for(int i = 0; i < MOVIMENTOS_TORRE; i++) {
        printf("Direita\n");  // Direção única
    }

    /*---------- Implementação de Movimentação da Rainha ----------*/
    // Variável de controle para o loop
    int contador_rainha = 0;  
    
    printf("\nRainha (movimento para esquerda):\n");
    // Loop do-while para garantir execução mínima
    do {
        printf("Esquerda\n");  // Direção única
        contador_rainha++;  // Atualização do contador
    } while(contador_rainha < MOVIMENTOS_RAINHA);

    return 0;
}