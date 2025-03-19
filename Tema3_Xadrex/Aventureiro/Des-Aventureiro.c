#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main()
{

    int mov_Torre, mov_Bispo, mov_Rainha, mov_Cavalo;
    char direcao_Torre[30], direcao_Bispo[30], direcao_Rainha[30], direcao_Cavalo[30], direcao_Cavalo2[30]; // direcao_Cavalo2 anda duas casas e direcao_Cavalo vira a direita ou a esquerda.
    int bispo = 1;
    int rainha = 1;
    int torre;
    int cavalo = 1;

    // Realizando a movimentação da Torre
    printf("Digite um número de 1 à 8, representando a quantidade de casas que a Torre vai percorrer: ");
    scanf("%d", &mov_Torre);
    printf("Digite a direção que a torre vai realizar: Move-se em linha reta horizontalmente ou verticalmente: Cima ou Direita\n");
    scanf(" %s", direcao_Torre);
    printf("\n");

    printf("** Realizando a movimentação da Torre ***\n");
    for (torre = 1; torre <= mov_Torre; torre++)
    {
        printf("%d casas para %s!\n", torre, direcao_Torre);
    }
    printf("\n");

    // Realizando a movimentação do Bispo
    printf("Digite um número de 1 à 5, representando a quantidade de casas que o Bispo vai percorrer: ");
    scanf("%d", &mov_Bispo);
    printf("Digite a direção que o Bispo vai realizar: São cinco casas na diagonal para cima e à direita: Ex. (Cima,Direita)-(Baixo,Esquerda):\n");
    scanf(" %[^\n]", direcao_Bispo);
    printf("\n");

    printf("** Realizando a movimentação do Bispo ***\n");
    while (bispo <= mov_Bispo)
    {
        printf("%d casas na diagonal %s!\n", bispo, direcao_Bispo);
        bispo++;
    }
    printf("\n");

    // Realizando a movimentação da Rainha
    printf("Digite um número de 1 à 8, representando a quantidade de casas que a Rainha vai mover: ");
    scanf("%d", &mov_Rainha);
    printf("Digite a direção que o Rainha vai realizar: Ela se move em todas direções: ex.:(esquerda ou direita)-(Cima ou Baixo):\n");
    scanf(" %[^\n]", direcao_Rainha);
    printf("\n");

    printf("** Realizando a movimentação da Rainha ***\n");
    do
    {
        printf("%d casas para %s!\n", rainha, direcao_Rainha);
        rainha++;
    } while (rainha <= mov_Rainha);
    printf("\n");

    // Realizando a movimentação do Cavalo
    printf("Digite o número 2, representando a quantidade de casas que o Cavalo vai percorrer: ");
    scanf("%d", &mov_Cavalo);
    printf("Digite a direção que o Cavalo vai realizar na Horizontal ou Vertical: Move-se em L: Ex. (Cima) ou (Esquerda)\n");
    scanf(" %s", direcao_Cavalo2);
    printf("Digite a direção que o Cavalo vai realizar para forma o L: para Virar a (Direita) ou (Esquerda)\n");
    scanf(" %s", direcao_Cavalo);
    printf("\n");

    printf("** Realizando a movimentação do Cavalo ***\n");
    for (cavalo = 1; cavalo <= mov_Cavalo; cavalo++)
    {
        while (cavalo <= 2)
        {
            printf("%d casas para %s\n", cavalo, direcao_Cavalo2);
            ++cavalo;
        }
        printf("%d virar à %s!\n", cavalo, direcao_Cavalo);
    }
    printf("\n");

    return 0;
}