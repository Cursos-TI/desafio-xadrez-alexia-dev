#include <stdio.h>

// Constantes com o número de casas a serem movidas para cada peça
#define MOVES_TORRE 5
#define MOVES_BISPO 5
#define MOVES_RAINHA 8

int main() {
    // Simulação da Torre com loop for (movimento horizontal para direita)
    printf("Torre:\n");
    for (int i = 0; i < MOVES_TORRE; i++) {
        printf("Direita\n");
    }

    // Simulação do Bispo com loop while (movimento diagonal superior-direito)
    printf("\nBispo:\n");
    int contador_bispo = 0;
    while (contador_bispo < MOVES_BISPO) {
        printf("Cima Direita\n");
        contador_bispo++;
    }

    // Simulação da Rainha com loop do-while (movimento horizontal para esquerda)
    printf("\nRainha:\n");
    int contador_rainha = 0;
    do {
        printf("Esquerda\n");
        contador_rainha++;
    } while (contador_rainha < MOVES_RAINHA);

    return 0;
}