#include <stdio.h>

int main() {
    int tabuleiro[10][10];

    // Inicializa o tabuleiro com água (0)
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Coordenadas de início dos navios
    int linha_h = 2, coluna_h = 3; // navio horizontal
    int linha_v = 5, coluna_v = 6; // navio vertical

    // Posiciona navio horizontal (3 casas na mesma linha)
    printf("Coordenadas do navio horizontal:\n");
    for (int i = 0; i < 3; i++) {
        tabuleiro[linha_h][coluna_h + i] = 3;
        printf(" -> (%d, %d)\n", linha_h, coluna_h + i);
    }

    // Posiciona navio vertical (3 casas na mesma coluna)
    printf("Coordenadas do navio vertical:\n");
    for (int i = 0; i < 3; i++) {
        tabuleiro[linha_v + i][coluna_v] = 3;
        printf(" -> (%d, %d)\n", linha_v + i, coluna_v);
    }

    // Exibe o tabuleiro
    printf("\n--- TABULEIRO ---\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}