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
    int tabuleiro[10][10] = {0};  // Inicializa o tabuleiro com 0 (água)

    // Coloca um navio horizontal ocupando 3 casas
    tabuleiro[2][4] = 3;  // Posição (C, 5)
    tabuleiro[2][5] = 3;  // Posição (C, 6)
    tabuleiro[2][6] = 3;  // Posição (C, 7)

    // Coloca um navio vertical ocupando 3 casas
    tabuleiro[5][7] = 3;  // Posição (F, 8)
    tabuleiro[6][7] = 3;  // Posição (G, 8)
    tabuleiro[7][7] = 3;  // Posição (H, 8)

    // Exibe o tabuleiro
    exibirTabuleiro(tabuleiro);

    return 0;
}
