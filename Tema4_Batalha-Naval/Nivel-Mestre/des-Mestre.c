#include <stdio.h>

#define TABULEIRO 10

int main()
{

    char colunas[TABULEIRO] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int linhas[TABULEIRO] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int tabuleiro[TABULEIRO][TABULEIRO] = {0};
    int cruz[TABULEIRO][TABULEIRO];
    int octaedro[TABULEIRO][TABULEIRO];
    int cone[TABULEIRO][TABULEIRO];
    int navio_vertical[TABULEIRO][TABULEIRO];
    int navio_horizontal[TABULEIRO][TABULEIRO];
    int navio_diagonal_1[TABULEIRO][TABULEIRO];
    int navio_diagonal_2[TABULEIRO][TABULEIRO];

    // Posicionando a Cruz
    for (int i = 0; i < TABULEIRO; i++)
    {
        for (int j = 0; j < TABULEIRO; j++)
        {
            if ((i == 0 && j == 5) || (i == 1 && j == 5) ||
                (i == 3 && j == 5) || (i == 4 && j == 5) ||
                (i == 2 && j == 3) || (i == 2 && j == 4) ||
                (i == 2 && j == 5) || (i == 2 && j == 6) ||
                (i == 2 && j == 7))
            {
                cruz[i][j] = 1;
            }
            else
            {
                cruz[i][j] = 0;
            }
        }
    }

    // Posicionando o Octaedro
    for (int i = 0; i < TABULEIRO; i++)
    {
        for (int j = 0; j < TABULEIRO; j++)
        {
            if ((i == 7 && j == 1) || (i == 8 && j == 0) ||
                (i == 8 && j == 1) || (i == 8 && j == 2) ||
                (i == 9 && j == 1))
            {
                octaedro[i][j] = 2;
            }
            else
            {
                octaedro[i][j] = 0;
            }
        }
    }

    // Posicionando o Cone
    for (int i = 0; i < TABULEIRO; i++)
    {
        for (int j = 0; j < TABULEIRO; j++)
        {
            if ((i == 6 && j == 6) || (i == 7 && j == 5) ||
                (i == 7 && j == 6) || (i == 7 && j == 7) ||
                (i == 8 && j == 4) || (i == 8 && j == 5) ||
                (i == 8 && j == 6) || (i == 8 && j == 7) ||
                (i == 8 && j == 8))
            {
                cone[i][j] = 5;
            }
            else
            {
                cone[i][j] = 0;
            }
        }
    }

    // Posicionando o Navio na Vertical
    for (int i = 0; i < TABULEIRO; i++)
    {
        for (int j = 0; j < TABULEIRO; j++)
        {
            if ((i == 5 && j == 4) || (i == 6 && j == 4) ||
                (i == 7 && j == 4))
            {
                navio_vertical[i][j] = 3;
            }
            else
            {
                navio_vertical[i][j] = 0;
            }
        }
    }

    // Posicionando o Navio na Horinzontal
    for (int i = 0; i < TABULEIRO; i++)
    {
        for (int j = 0; j < TABULEIRO; j++)
        {
            if ((i == 3 && j == 0) || (i == 3 && j == 1) ||
                (i == 3 && j == 2))
            {
                navio_horizontal[i][j] = 3;
            }
            else
            {
                navio_horizontal[i][j] = 0;
            }
        }
    }

    // Posicionando o Navio na Diagonal
    for (int i = 0; i < TABULEIRO; i++)
    {
        for (int j = 0; j < TABULEIRO; j++)
        {
            if ((i == 5 && j == 7) || (i == 6 && j == 8) ||
                (i == 7 && j == 9))
            {
                navio_diagonal_1[i][j] = 3;
            }
            else
            {
                navio_diagonal_1[i][j] = 0;
            }
        }
    }

    // Posicionando o Navio na Diagonal
    for (int i = 0; i < TABULEIRO; i++)
    {
        for (int j = 0; j < TABULEIRO; j++)
        {
            if ((i == 0 && j == 4) || (i == 1 && j == 3) ||
                (i == 2 && j == 2))
            {
                navio_diagonal_2[i][j] = 3;
            }
            else
            {
                navio_diagonal_2[i][j] = 0;
            }
        }
    }

    printf("*** Tabuleiro Batalha Naval ***\n");
    printf("\n");
    printf("  ");
    for (int j = 0; j < TABULEIRO; j++)
    {
        printf(" %c", colunas[j]);
    }
    printf("\n");
    for (int i = 0; i < TABULEIRO; i++)
    {
        printf("%2d", linhas[i]);
        for (int j = 0; j < 10; j++)
        {
            if (cruz[i][j] == 1)
            {
                printf(" %d", cruz[i][j]); // Exibindo a Cruz no Tabuleiro
            }
            else if (octaedro[i][j] == 2)
            {
                printf(" %d", octaedro[i][j]); // Exibindo o Octaedro no Tabuleiro
            }
            else if (cone[i][j] == 5)
            {
                printf(" %d", cone[i][j]); // Exibindo o Cone no Tabuleiro
            }
            else if (navio_vertical[i][j] == 3)
            {
                printf(" %d", navio_vertical[i][j]); // Exibindo o Navio no Tabuleiro na Vertical
            }
            else if (navio_horizontal[i][j] == 3)
            {
                printf(" %d", navio_horizontal[i][j]); // Exibindo o Navio no Tabuleiro na Horizontal
            }
            else if (navio_diagonal_1[i][j] == 3)
            {
                printf(" %d", navio_diagonal_1[i][j]); // Exibindo o Navio no Tabuleiro na Diagonal
            }
            else if (navio_diagonal_2[i][j] == 3)
            {
                printf(" %d", navio_diagonal_2[i][j]); // Exibindo o Navio no Tabuleiro na Diagonal
            }
            else
            {
                printf(" %d", tabuleiro[i][j]); // Exibindo o tabuleiro se o espaço vazio for 0
            }
        }
        printf("\n");
    }
    return 0;
}