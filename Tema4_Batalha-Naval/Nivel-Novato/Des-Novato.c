/*
#include <stdio.h>
int main()
{
       // Criação do cabeçalho, referente a colunas
       char colunas[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

       // Criação da númeração das linhas
       int linhas[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

       // Criação do tabuleiro
       int tabuleiro[10][10] = {
           {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
           {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
           {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
           {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
           {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
           {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
           {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
           {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
           {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
           {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}};

       // Posicionando o navio no tabuleiro na vertical
       int navio1[3] = {4, 5, 6};
       for (int i = 0; i < 3; i++)
       {
              int linha1 = navio1[i];
              int coluna1 = 4;
              tabuleiro[linha1][coluna1] = 3;
       }

       // Posicionando o navio no tabuleiro na horizontal
       int navio2[3] = {0, 1, 2};
       for (int i = 0; i < 3; i++)
       {
              int coluna2 = navio2[i];
              int linha2 = 1;
              tabuleiro[linha2][coluna2] = 3;
       }
       
       printf("   "); // Fazendo o loop para exibir o cabeçalho
       for (int j = 0; j < 10; j++)
       {
              printf("  %c", colunas[j]);
       }
       printf("\n"); // Fazendo o loop para exibir as linhas e o tabuleiro
       for (int i = 0; i < 10; i++)
       {
              printf(" %2d ", linhas[i]);
              for (int j = 0; j < 10; j++)
              {
                     printf(" %d ", tabuleiro[i][j]);
              }
              printf("\n");
       }

       return 0;
}
*/

#include <stdio.h>

#define TAMANHO_TABULEIRO 10

int main() {
    char colunas[TAMANHO_TABULEIRO] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int linhas[TAMANHO_TABULEIRO] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];

    // Inicializa o tabuleiro com 0 (vazio)
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Define as coordenadas do navio
    int linha_navio = 5; // Linha onde o navio será posicionado
    int coluna_navio = 3; // Coluna onde o navio será posicionado

    // Atribui o navio ao tabuleiro (valor 3)
    tabuleiro[linha_navio][coluna_navio] = 3; // Posiciona o navio no tabuleiro

    // Imprime as colunas
    for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
        printf("  %c", colunas[j]);
    }
    printf("\n");

    // Imprime o tabuleiro com o navio
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        printf("%2d", linhas[i]);
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            if (tabuleiro[i][j] == 3) {
                printf(" N "); // Exibe 'N' se a célula contém o navio
            } else {
                printf(" 0 "); // Exibe '0' se a célula está vazia
            }
        }
        printf("\n");
    }

    return 0;
}