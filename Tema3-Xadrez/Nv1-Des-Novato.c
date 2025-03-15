#include <stdio.h>

int main (){

    int mov_Torre, mov_Bispo, mov_Rainha;
    char direcao_Torre[30], direcao_Bispo[30], direcao_Rainha[30];
    int bispo = 0;
    int rainha = 0;

    // Realizando a movimentação da Torre
    printf("Digite um número de 1 à 8, representando a quantidade de casas que a Torre vai percorrer: ");
    scanf("%d", &mov_Torre);
    printf("Digite a direção que a torre vai realizar: Move-se em linha reta horizontalmente ou verticalmente: Cima ou Direita\n");
    scanf(" %s", direcao_Torre);
    printf("\n");

    printf("** Realizando a movimentação da Torre ***\n");
    for (int torre = 0; torre < mov_Torre; torre++)
    {
        printf("Se movendo para %s!\n", direcao_Torre);   
    }
    printf("\n");

    // Realizando a movimentação do Bispo
    printf("Digite um número de 1 à 5, representando a quantidade de casas que o Bispo vai percorrer: ");
    scanf("%d", &mov_Bispo);
    printf("Digite a direção que o Bispo vai realizar: São cinco casas na diagonal para cima e à direita: Ex. (Cima,Direita)-(Baixo,Esquerda):\n");
    scanf(" %[^\n]", direcao_Bispo);
    printf("\n");

    printf("** Realizando a movimentação do Bispo ***\n");
    while (bispo < mov_Bispo)
    {
        printf("Se movendo em %s!\n", direcao_Bispo);
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
        printf("Se movendo em %s!\n", direcao_Rainha);
        rainha++;
    } while (rainha < mov_Rainha);
    
return 0;
}