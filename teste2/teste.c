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
    char codigodacidade1[5], codigodacidade2[5], codigodacidade3[5], codigodacidade4[5]; // Código que vai representar a cidade
    char cidade1[10], cidade2[10], cidade3[10], cidade4[10]; // Cidade do Estado
    unsigned long int populacao1, populacao2, populacao3, populacao4; // Quantidade total de pessoas
    float area1, area2, area3, area4; // Área total em km² da cidade
    float pib1, pib2, pib3, pib4; // PIB da cidade
    int turisticos1, turisticos2, turisticos3, turisticos4; // Número de pontos turísticos
    float densidadepopulacional1, densidadepopulacional2, densidadepopulacional3, densidadepopulacional4; // População dividida pela área da cidade
    float pibpercapita1, pibpercapita2, pibpercapita3, pibpercapita4; // PIB da cidade dividido pela população


    // Entrada de Dados para a primeira carta em Scanf

    printf(" *** Digite os dados da primeira carta *** \n");

    printf("Digite uma letra de (A a H) que representa o estado: \n");
    scanf(" %c", &estado1);

    printf("Digite o código da cidade: \n");
    scanf("%s", codigodacidade1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade1);

    printf("Digite a quantidade total da população: \n");
    scanf("%lu", &populacao1);

    printf("Digite a area total da cidade: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &turisticos1);

    densidadepopulacional1 = (float) populacao1 / area1; // Atribuição a variavel densidadepopulacional1
    pibpercapita1 = (float) pib1 / populacao1; // Atribuição a variavel pibpercapita1

// Comandos de exibição das Cartas usando Printf
    
    //Primeira Carta

    printf("Carta 1: \n");
    printf("A letra que representa o estado é: %c\n", estado1);   
    printf("O código que representa a carta é: %s\n", codigodacidade1);
    printf("O nome da cidade é: %s\n", cidade1);
    printf("A quantidade de população é: %lu pessoas\n", populacao1);
    printf("A área total é: %.2f Km²\n", area1);
    printf("O PIB que representa a cidade é: %.2f Milhões de reais\n", pib1);
    printf("A quantidade de pontos turísticos é: %d\n", turisticos1);
    printf("A densidade populacional é: %.2f de habitantes por km²\n", densidadepopulacional1);
    printf("O PIB per capita por pessoa é: %.2f reais\n", pibpercapita1);

    // Entrada de Dados da segunda carta em Scanf

    printf(" *** Digite os dados da segunda carta *** \n");

    printf("Digite uma letra de (A a H) que representa o estado: \n");
    scanf(" %c", &estado2);

    printf("Digite o código da cidade: \n");
    scanf("%s", codigodacidade3);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade3);

    printf("Digite a quantidade total da população: \n");
    scanf("%lu", &populacao3);

    printf("Digite a area total da cidade: \n");
    scanf("%f", &area3);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib3);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &turisticos3);

    densidadepopulacional3 = (float) populacao3 / area3; // Atribuição a variavel densidadepopulacional3
    pibpercapita3 = (float) pib3 / populacao3; // Atribuição a variavel pibpercapita3

// Comandos de exibição das Cartas
    
    // Segunda Carta

    printf("Carta 2:\n");
    printf("A letra que representa o estado é: %c\n", estado2);
    printf("O código que representa a carta é: %s\n", codigodacidade3);
    printf("O nome da cidade é: %s\n", cidade3);
    printf("A quantidade de população é: %lu pessoas\n", populacao3);
    printf("A área total é: %.2f Km²\n", area3);
    printf("O PIB que representa a cidade é: %.2f Milhões de reais\n", pib3);
    printf("A quantidade de pontos turísticos é: %d\n", turisticos3);
    printf("A densidade populacional é: %.2f de habitantes por km²\n", densidadepopulacional3);
    printf("O PIB per capita por pessoa é: %.2f reais\n", pibpercapita3);

    
return 0;
}