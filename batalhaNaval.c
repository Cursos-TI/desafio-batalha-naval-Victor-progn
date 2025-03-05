#include <stdio.h>
#define tam 11

int tabuleiro[10][10]; // Tabuleiro 10x10

// Função para exibir o tabuleiro
void exibirTabuleiro(int tabuleiro[10][10]) {
    // Cabeçalho com os números das colunas
    printf("   ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", i + 1);  // Exibe os números das colunas de 1 a 10
    }
    printf("\n");

    // Exibe o tabuleiro com as letras das linhas
    for (int i = 0; i < 10; i++) {
        printf("%c  ", 'A' + i);  // Exibe as letras das linhas de A a J
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);  // Exibe o valor de cada célula (0 ou 3)
        }
        printf("\n");
    }
}

int main() {
    char matriz[tam][tam];
    int i, j;

    // Preenchendo a primeira linha com letras de A a J
    matriz[0][0] = ' ';  // Primeira posição é um espaço
    for (j = 1; j < tam; j++) {
        matriz[0][j] = 'A' + (j - 1);  // Letras de A a J
    }

    // Preenchendo a primeira coluna com números de 1 a 9
    for (i = 1; i < tam; i++) {
        matriz[i][0] = '0' + i;  // Números de 1 a 9 (como caractere)
    }

    // Preenchendo o restante da matriz com '0'
    for (i = 1; i < tam; i++) {
        for (j = 1; j < tam; j++) {
            matriz[i][j] = '0';  // Preenchendo com '0'
        }
    }

    // Atualizando as posições para mostrar o valor '3' corretamente
    matriz[8][3] = '3';
    matriz[7][3] = '3';
    matriz[6][3] = '3';

    matriz[1][3] = '3';
    matriz[1][2] = '3';
    matriz[1][1] = '3';

    matriz[1][7] = '3';
    matriz[1][8] = '3';
    matriz[1][9] = '3';

    matriz[3][7] = '3';
    matriz[4][8] = '3';
    matriz[5][9] = '3';

    matriz[4][1] = '3';
    matriz[4][2] = '3';
    matriz[4][3] = '3';

    // Inicializando o tabuleiro com 0s
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Preenchendo com valores específicos

    tabuleiro[1][0] = 0;
    tabuleiro[1][1] = 1;
    tabuleiro[1][2] = 1;
    tabuleiro[1][3] = 1;
    tabuleiro[1][4] = 0;
    
    tabuleiro[2][0] = 0;
    tabuleiro[2][1] = 0;
    tabuleiro[2][2] = 1;
    tabuleiro[2][3] = 0;
    tabuleiro[2][4] = 0;

    tabuleiro[0][0] = 1;
    tabuleiro[0][1] = 1;
    tabuleiro[0][2] = 1;
    tabuleiro[0][3] = 1;
    tabuleiro[0][4] = 1;

    tabuleiro[4][5] = 1;
    tabuleiro[4][4] = 1;
    tabuleiro[4][3] = 1;
    tabuleiro[4][6] = 1;
    tabuleiro[4][7] = 1;
    tabuleiro[3][5] = 1;
    tabuleiro[2][5] = 1;
    tabuleiro[5][5] = 1;
    tabuleiro[6][5] = 1;

    tabuleiro[7][1] = 1;
    tabuleiro[7][0] = 1;
    tabuleiro[7][2] = 1;
    tabuleiro[6][1] = 1;
    tabuleiro[8][1] = 1;


    // Exibindo o tabuleiro
    exibirTabuleiro(tabuleiro);

    // Imprimindo a matriz
    printf("\nMatriz com letras e números:\n");
    for (i = 0; i < tam; i++) {
        for (j = 0; j < tam; j++) {
            if (i == 10 && j == 0) {
                printf("%3s ", "10");  // Exibindo "10" na posição correta
            } else {
                printf("%3c ", matriz[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}
