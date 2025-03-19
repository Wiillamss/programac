#include <stdio.h>

// Realizando a movimentação da Torre
void movimentoTorre(int casas1)
{
    if (casas1 > 0)
    {
        movimentoTorre(casas1 - 1);
        printf("%d-Direita\n", casas1);
    }
}
// Realizando o movimento Rainha
void movimentoRainha(int casas2)
{
    if (casas2 > 0)
    {
        movimentoRainha(casas2 - 1);
        printf("%d-Esquerda\n", casas2);
    }
}

// Realizando o movimento Bispo
void movimentoBispo(int casas3)
{
    if (casas3 > 0)
    {
        movimentoBispo(casas3 - 1);
        printf("%d-Direita,Cima\n", casas3);
    }
}

int main()
{
    // Realizando o movimento da Torre, Bispo, Rainha com o uso de Recursividade
    printf("*** Realizando o movimento da Torre ***\n");
    movimentoTorre(5);
    printf("\n");

    printf("*** Realizando o movimento da Rainha ***\n");
    movimentoRainha(8);
    printf("\n");

    printf("*** Realizando o movimento do Bispo ***\n");
    movimentoBispo(5);
    printf("\n");

    // Realizando o movimento do Cavalo com loops com atualizações complexas, com uso de loops Aninhados e multiplas variáveis!

    printf("*** Realizando o movimento do Cavalo ***\n");
    for (int virar_Direcao = 3; virar_Direcao == 3; virar_Direcao--)
    {
         for (int casas_Cavalo = 1; casas_Cavalo < 3; casas_Cavalo++)
         {
            printf("%d - Cima\n", casas_Cavalo);

         }
         printf("%d - Direita\n", virar_Direcao);
        }

    }