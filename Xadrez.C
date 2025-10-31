#include <stdio.h>  // Biblioteca padrão de entrada e saída

// ==============================================
// FUNÇÕES RECURSIVAS - TORRE, BISPO E RAINHA
// ==============================================

// --- Função recursiva para movimentar a TORRE ---
void moverTorre(int passo, int total) {
    if (passo > total) {
        return; // Caso base: fim da recursão
    }
    printf("Casa %d: Direita\n", passo);
    moverTorre(passo + 1, total); // Chamada recursiva (próxima casa)
}

// --- Função recursiva para movimentar o BISPO ---
// Inclui loops aninhados para simular movimento diagonal (vertical + horizontal)
void moverBispo(int passo, int totalVertical, int totalHorizontal) {
    if (passo > totalVertical) {
        return; // Caso base
    }

    // Loop externo: representa o movimento vertical ("Cima")
    for (int v = 1; v <= totalVertical; v++) {
        // Loop interno: representa o movimento horizontal ("Direita")
        for (int h = 1; h <= totalHorizontal; h++) {
            printf("Movimento %d-%d: Cima e Direita\n", v, h);
        }
    }

    // Avança para o próximo movimento recursivamente
    moverBispo(passo + 1, totalVertical, totalHorizontal);
}

// --- Função recursiva para movimentar a RAINHA ---
void moverRainha(int passo, int total) {
    if (passo > total) {
        return; // Caso base
    }
    printf("Casa %d: Esquerda\n", passo);
    moverRainha(passo + 1, total); // Chamada recursiva
}

// ==============================================
// FUNÇÃO COM LOOPS COMPLEXOS - CAVALO
// ==============================================

void moverCavalo(int casasCima, int casasDireita) {
    printf("=== Movimento do Cavalo ===\n");

    // Loop externo: controla o movimento vertical (para cima)
    // Loop interno: controla o movimento horizontal (para a direita)
    for (int i = 1, j = 1; i <= casasCima || j <= casasDireita; i++, j++) {

        if (i <= casasCima) {
            printf("Casa %d: Cima\n", i);
        }

        if (i == casasCima) {
            int k = 1;
            while (k <= casasDireita) {
                printf("Casa %d: Direita\n", casasCima + k);
                k++;

                // Exemplo de controle de fluxo:
                if (k > casasDireita) {
                    break; // Sai do while quando terminar as casas à direita
                }
            }
        }

        // Usa continue para pular iterações desnecessárias
        if (i > casasCima) {
            continue;
        }
    }

    printf("\n"); // Linha em branco ao final
}

// ==============================================
// FUNÇÃO PRINCIPAL
// ==============================================

int main() {
    int casas_torre, casas_bispo_v, casas_bispo_h, casas_rainha;
    int cavalo_cima, cavalo_direita;

    printf("=========================================\n");
    printf("   🧠 DESAFIO FINAL - MOVIMENTOS COMPLEXOS\n");
    printf("=========================================\n\n");

    // Entrada de dados do usuário
    printf("Digite quantas casas a TORRE deve andar (para a direita): ");
    scanf("%d", &casas_torre);

    printf("Digite quantas casas o BISPO deve andar (para cima): ");
    scanf("%d", &casas_bispo_v);
    printf("Digite quantas casas o BISPO deve andar (para a direita): ");
    scanf("%d", &casas_bispo_h);

    printf("Digite quantas casas a RAINHA deve andar (para a esquerda): ");
    scanf("%d", &casas_rainha);

    printf("Digite quantas casas o CAVALO deve andar para cima: ");
    scanf("%d", &cavalo_cima);
    printf("Digite quantas casas o CAVALO deve andar para a direita: ");
    scanf("%d", &cavalo_direita);

    printf("\n=== Movimento da Torre ===\n");
    moverTorre(1, casas_torre);
    printf("\n");

    printf("=== Movimento do Bispo ===\n");
    moverBispo(1, casas_bispo_v, casas_bispo_h);
    printf("\n");

    printf("=== Movimento da Rainha ===\n");
    moverRainha(1, casas_rainha);
    printf("\n");

    moverCavalo(cavalo_cima, cavalo_direita);

    printf("=== Fim da Simulação ===\n");
    return 0;
}
