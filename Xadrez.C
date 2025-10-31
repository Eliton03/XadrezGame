#include <stdio.h>  // Biblioteca padrão de entrada e saída (printf, etc.)

int main() {

    // ===============================
    // TORRE - usando estrutura "for"
    // ===============================

    int casas_torre = 5;  // Quantidade de casas que a torre vai andar
    printf("=== Movimento da Torre ===\n");

    // A Torre anda em linha reta (horizontal ou vertical).
    // Aqui, simulamos 5 casas para a DIREITA.
    for (int i = 1; i <= casas_torre; i++) {
        printf("Casa %d: Direita\n", i);
    }

    printf("\n"); // Pula uma linha para separar os movimentos das peças


    // ===============================
    // BISPO - usando estrutura "while"
    // ===============================

    int casas_bispo = 5;  // Quantidade de casas que o bispo vai andar
    int contador_bispo = 1;  // Contador de controle do while
    printf("=== Movimento do Bispo ===\n");

    // O Bispo anda em DIAGONAL.
    // Aqui simulamos o movimento "Cima e Direita".
    while (contador_bispo <= casas_bispo) {
        printf("Casa %d: Cima e Direita\n", contador_bispo);
        contador_bispo++;  // Incrementa uma casa
    }

    printf("\n");


    // ===============================
    // RAINHA - usando estrutura "do-while"
    // ===============================

    int casas_rainha = 8;  // Quantidade de casas que a rainha vai andar
    int contador_rainha = 1;
    printf("=== Movimento da Rainha ===\n");

    // A Rainha pode se mover em todas as direções.
    // Aqui simulamos o movimento 8 casas para a ESQUERDA.
    do {
        printf("Casa %d: Esquerda\n", contador_rainha);
        contador_rainha++;  // Incrementa o contador
    } while (contador_rainha <= casas_rainha);

    printf("\n=== Fim da Simulação ===\n");

    return 0; // Fim do programa
}
