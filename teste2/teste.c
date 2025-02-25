#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Prática Willams da Silva Gomes

int main() {
    
    printf("*** Desafio Super Trunfo: Países ***\n");

    /*Cadastro das variaveis represetam de 1 a 4
    As variaveis que representam o Estado1 são as variaveis 1 e 2
    As variaveis que representam o Estado2 são as variaveis de 3 e 4*/

    char estado1, estado2; // Letra que representa o estado
    char codigo_da_cidade1[5], codigo_da_cidade2[5], codigo_da_cidade3[5], codigo_da_cidade4[5]; // Código que vai representar a cidade
    char cidade1[20], cidade2[20], cidade3[20], cidade4[20]; // Cidade do Estado
    unsigned long int populacao1, populacao2, populacao3, populacao4; // Quantidade total de pessoas
    float area1, area2, area3, area4; // Área total em km² da cidade
    double pib1, pib2, pib3, pib4; // PIB da cidade
    int turisticos1, turisticos2, turisticos3, turisticos4; // Número de pontos turísticos
    float densidade_populacional1, densidade_populacional2, densidade_populacional3, densidade_populacional4; // População dividida pela área da cidade
    float pib_per_capita1, pib_per_capita2, pib_per_capita3, pib_per_capita4; // PIB da cidade dividido pela população
    double inverso_densidade1, inverso_densidade2, inverso_densidade3, inverso_densidade4; // Inverso da densidade populacional = 1.0 / Densidade Populacional
    double super_poder1, super_poder2, super_poder3, super_poder4; // É a soma das variaveis = População + Área + PIB + Pontos Turisticos + PIB per Capita + Inverso da Densidade Populacional
    
    /* Entrada de Dados da primeira carta em Scanf
    Solicitando ao usuario a cadastrar as informações das cartas */


    printf(" *** Digite os dados da primeira carta *** \n");

    printf("Digite uma letra de (A a H) que vai representar o estado: \n");
    scanf(" %c", &estado1);

    printf("Digite um código que tenha a letra do estado (A a H) + um número (01 a 04) que vai representar a cidade: \n");
    scanf("%s", codigo_da_cidade1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade1);

    printf("Digite a quantidade total da população: \n");
    scanf("%lu", &populacao1);

    printf("Digite a area total da cidade: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: \n");
    scanf("%lf", &pib1);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &turisticos1);

    densidade_populacional1 = (float) populacao1 / area1; // Atribuição a variavel densidade_populacional1
    pib_per_capita1 = (float) pib1 / populacao1; // Atribuição a variavel pib_per_capita1
    inverso_densidade1 = 1.0 / densidade_populacional1; // Atribuição a variavel inverso_densidade1
    super_poder1 = populacao1 + area1 + pib1 + turisticos1 + pib_per_capita1 + inverso_densidade1; // Atribuição a variavel super_poder1

    printf("\n"); // Deixando um espaço entre as informações

// Comandos de exibição das Cartas usando Printf
    // Imprimindo as informações 
    //Primeira Carta

    printf("Carta 1: \n");
    printf("Letra do Estado: %c\n", estado1);   
    printf("Código da Carta: %s\n", codigo_da_cidade1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu pessoas\n", populacao1);
    printf("Área total: %.2f Km²\n", area1);
    printf("PIB da cidade: %.2f Bilhões de reais\n", pib1);
    printf("Pontos turísticos: %d\n", turisticos1);
    printf("Densidade populacional: %.2f de habitantes por km²\n", densidade_populacional1);
    printf("PIB per capita por pessoa: %.2f reais\n", pib_per_capita1);
    printf("Inverso de Densidade Populacional: %.4f habitantes por km²\n", inverso_densidade1);
    printf("Super Poder: %.2f\n", super_poder1);

    printf("\n"); // Deixando um espaço entre as informações

/* Entrada de Dados da segunda carta em Scanf
    Solicitando ao usuario a cadastrar as informações das cartas */

    printf(" *** Digite os dados da segunda carta *** \n");

    printf("Digite uma letra de (A a H) que vai representar o estado: \n");
    scanf(" %c", &estado2);

    printf("Digite um código que tenha a letra do estado (A a H) + um número (01 a 04) que vai representar a cidade: \n");
    scanf("%s", codigo_da_cidade3);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade3);

    printf("Digite a quantidade total da população: \n");
    scanf("%lu", &populacao3);

    printf("Digite a area total da cidade: \n");
    scanf("%f", &area3);

    printf("Digite o PIB da cidade: \n");
    scanf("%lf", &pib3);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &turisticos3);

    densidade_populacional3 = (float) populacao3 / area3; // Atribuição a variavel densidade_populacional3
    pib_per_capita3 = (float) pib3 / populacao3; // Atribuição a variavel pib_per_capita3
    inverso_densidade3 = 1.0 / densidade_populacional3; // Atribuição a variavel inverso_densidade3
    super_poder3 = populacao1 + area3 + pib3 + turisticos3 + pib_per_capita3 + inverso_densidade3; // Atribuição a variavel super_poder3

    printf("\n"); // Deixando um espaço entre as informações
    
// Comandos de exibição das Cartas
    // Imprimindo as informações
    // Segunda Carta

    printf("Carta 2: \n");
    printf("Letra do Estado: %c\n", estado2);   
    printf("Código da Carta: %s\n", codigo_da_cidade3);
    printf("Cidade: %s\n", cidade3);
    printf("População: %lu pessoas\n", populacao3);
    printf("Área total: %.2f Km²\n", area3);
    printf("PIB da cidade: %.2f Bilhões de reais\n", pib3);
    printf("Pontos turísticos: %d\n", turisticos3);
    printf("Densidade populacional: %.2f de habitantes por km²\n", densidade_populacional3);
    printf("PIB per capita por pessoa: %.2f reais\n", pib_per_capita3);
    printf("Inverso de Densidade Populacional: %.4f habitantes por km²\n", inverso_densidade3);
    printf("Super Poder: %.2f\n", super_poder3);

    printf("\n"); // Deixando um espaço entre as informações

    // Realizando as comparações das cartas com base em cada informação

    // Exibindo o resultado na tela 

    printf(" *** A comparação entre as Cartas para saber qual é a carta vencedora ***\n");
    printf("População: Carta 1 venceu (%d)\n", populacao1 >= populacao3);
    printf("Área: Carta 1 venceu (%d)\n", area1 >= area3);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 >= pib3);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", turisticos1 >= turisticos3);
    printf("População: Carta 1 venceu (%d)\n", populacao1 >= populacao3);
    printf("Densidade Populacional: Carta 1 venceu(%d)\n", densidade_populacional1 >= densidade_populacional3);
    printf("Inverso de Densidade Populacional: Carta 1 venceu(%d)\n", inverso_densidade1 <= inverso_densidade3);
    printf("PIB per Capita: Carta 1 venceu(%d)\n", pib_per_capita1 >= pib_per_capita3);
    printf("Super Poder: Carta 1 venceu(%d)\n", super_poder1 >= super_poder3);
    
    
return 0;
}