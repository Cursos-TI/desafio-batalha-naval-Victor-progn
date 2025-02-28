#include <stdio.h>

int matrix [10] [10];
// Função para exibir o tabuleiro
void exibirTabuleiro(int tabuleiro[10][10]) {
    // Cabeçalho com as letras das linhas
    printf("  ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", i + 1);  // Exibe os números das colunas de 1 a 10
    }
    printf("\n");

    // Exibe o tabuleiro com as letras das linhas
    for (int i = 0; i < 10; i++) {
        printf("%c ", 'A' + i);  // Exibe as letras das linhas de A a J
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);  // Exibe o valor de cada célula (0 ou 3)
        }
        printf("\n");
    }
}

int main() {
    int tabuleiro[10][10] = {0}; // Inicializa o tabuleiro com água (0)

    // Colocando os navios
    // Navio na diagonal (A1, B2, C3)
    tabuleiro[0][0] = 3;
    tabuleiro[1][1] = 3;
    tabuleiro[2][2] = 3;

    // Navio na vertical (F3, G3, H3)
    tabuleiro[5][2] = 3;
    tabuleiro[6][2] = 3;
    tabuleiro[7][2] = 3;

    // Navio na horizontal direita (E7, E8, E9)
    tabuleiro[4][6] = 3;
    tabuleiro[4][7] = 3;
    tabuleiro[4][8] = 3;

    // Navio na horizontal esquerda (J6, I7, H8)
    tabuleiro[7][7] = 3;
    tabuleiro[8][6] = 3;
    tabuleiro[9][5] = 3;

    // Imprimir o tabuleiro
    exibirTabuleiro(tabuleiro);

    return 0;
}
