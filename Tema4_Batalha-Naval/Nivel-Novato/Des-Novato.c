#include <stdio.h>
int main()
{

    char linhas[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int colunas[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

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

        printf("*** Tabuleiro Batalha Naval ***\n");

    printf("    %c %c %c %c %c %c %c %c %c %c \n", linhas[0], linhas[1], linhas[2], linhas[3],
           linhas[4], linhas[5], linhas[6], linhas[7], linhas[8], linhas[9]);

    printf(" %d  %d %d %d %d %d %d %d %d %d %d \n", colunas[0], tabuleiro[0][0], tabuleiro[0][1], tabuleiro[0][2], tabuleiro[0][3],
           tabuleiro[0][4], tabuleiro[0][5], tabuleiro[0][6], tabuleiro[0][7], tabuleiro[0][8], tabuleiro[0][9]);
    printf(" %d  %d %d %d %d %d %d %d %d %d %d \n", colunas[1], tabuleiro[1][0], tabuleiro[1][1], tabuleiro[1][2], tabuleiro[1][3],
           tabuleiro[1][4], tabuleiro[1][5], tabuleiro[1][6], tabuleiro[1][7], tabuleiro[1][8], tabuleiro[1][9]);
    printf(" %d  %d %d %d %d %d %d %d %d %d %d \n", colunas[2], tabuleiro[2][0], tabuleiro[2][1], tabuleiro[2][2], tabuleiro[2][3],
           tabuleiro[2][4], tabuleiro[2][5], tabuleiro[2][6], tabuleiro[2][7], tabuleiro[2][8], tabuleiro[2][9]);
    printf(" %d  %d %d %d %d %d %d %d %d %d %d \n", colunas[3], tabuleiro[3][0], tabuleiro[3][1], tabuleiro[3][2], tabuleiro[3][3],
           tabuleiro[3][4], tabuleiro[3][5], tabuleiro[3][6], tabuleiro[3][7], tabuleiro[3][8], tabuleiro[3][9]);
    printf(" %d  %d %d %d %d %d %d %d %d %d %d \n", colunas[4], tabuleiro[4][0], tabuleiro[4][1], tabuleiro[4][2], tabuleiro[4][3],
           tabuleiro[4][4], tabuleiro[4][5], tabuleiro[4][6], tabuleiro[4][7], tabuleiro[4][8], tabuleiro[4][9]);
    printf(" %d  %d %d %d %d %d %d %d %d %d %d \n", colunas[5], tabuleiro[5][0], tabuleiro[5][1], tabuleiro[5][2], tabuleiro[5][3],
           tabuleiro[5][4], tabuleiro[5][5], tabuleiro[5][6], tabuleiro[5][7], tabuleiro[5][8], tabuleiro[5][9]);
    printf(" %d  %d %d %d %d %d %d %d %d %d %d \n", colunas[6], tabuleiro[6][0], tabuleiro[6][1], tabuleiro[6][2], tabuleiro[6][3],
           tabuleiro[6][4], tabuleiro[6][5], tabuleiro[6][6], tabuleiro[6][7], tabuleiro[6][8], tabuleiro[6][9]);
    printf(" %d  %d %d %d %d %d %d %d %d %d %d \n", colunas[7], tabuleiro[7][0], tabuleiro[7][1], tabuleiro[7][2], tabuleiro[7][3],
           tabuleiro[7][4], tabuleiro[7][5], tabuleiro[7][6], tabuleiro[7][7], tabuleiro[7][8], tabuleiro[7][9]);
    printf(" %d  %d %d %d %d %d %d %d %d %d %d \n", colunas[8], tabuleiro[8][0], tabuleiro[8][1], tabuleiro[8][2], tabuleiro[8][3],
           tabuleiro[8][4], tabuleiro[8][5], tabuleiro[8][6], tabuleiro[8][7], tabuleiro[8][8], tabuleiro[8][9]);
    printf("%d  %d %d %d %d %d %d %d %d %d %d \n", colunas[9], tabuleiro[9][0], tabuleiro[9][1], tabuleiro[9][2], tabuleiro[9][3],
           tabuleiro[9][4], tabuleiro[9][5], tabuleiro[9][6], tabuleiro[9][7], tabuleiro[9][8], tabuleiro[9][9]);

    return 0;
}
