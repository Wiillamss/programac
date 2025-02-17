#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Prática Willams Gomes

int main() {
    
    printf(" *** Desafio Super Trunfo: Países ***\n");

    /* O objetivo é criar 8 estados, representados por letras
    de A à H, e cada estado vai ter 4 cidades, acompanhando a letra do estado e um número,
    exemplo: A01, A02, B01, B02. */

    // Cadastro das Cartas do Primeiro estado

    char estado1 = 'A'; // Letra que representa o estado
    char codigodacidade1[5], codigodacidade2[5], codigodacidade3[5], codigodacidade4[5]; // Código que vai representar a cidade
    char cidade1[10], cidade2[10], cidade3[10], cidade4[10]; // Cidade do Estado
    int populacao1, populacao2, populacao3, populacao4; // Quantidade total de pessoas
    float area1, area2, area3, area4; // Área total em km² da cidade
    float pib1, pib2, pib3, pib4; // PIB da cidade
    int turisticos1, turisticos2, turisticos3, turisticos4; // Número de pontos turísticos
    float densidadepopulacional1, densidadepopulacional2, densidadepopulacional3, densidadepopulacional4; // População dividida pela área da cidade
    float pibpercapita1, pibpercapita2, pibpercapita3, pibpercapita4; // PIB total dividido pela população
    float superpoder1, superpoder2, superpoder3, superpoder4; // Poder de cada carta = é a soma de variaveis

    // Entrada de Dados para a primeira cidade

    printf(" *** Digite os dados da primeira cidade *** \n");

    printf("Digite o código da cidade: \n");
    scanf("%s", &codigodacidade1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade1);

    printf("Digite a quantidade total da população: \n");
    scanf("%d", &populacao1);

    printf("Digite a area total da cidade: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &turisticos1);

    densidadepopulacional1 = populacao1 / area1;
    pibpercapita1 = pib1 / populacao1;
    superpoder1 = populacao1 + area1 + pib1 + turisticos1;

    // Entrada de Dados da segunda cidade

    printf(" *** Digite os dados da segunda cidade *** \n");

    printf("Digite o código da cidade: \n");
    scanf("%s", &codigodacidade2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade2);

    printf("Digite a quantidade total da população: \n");
    scanf("%d", &populacao2);

    printf("Digite a area total da cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &turisticos2);

    densidadepopulacional2 = populacao2 / area2;
    pibpercapita2 = pib2 / populacao2;
    superpoder2 = populacao2 + area2 + pib2 + turisticos2;

// Entrada de Dados da terceira cidade

    printf(" *** Digite os dados da terceira cidade *** \n");

    printf("Digite o código da cidade: \n");
    scanf("%s", &codigodacidade3);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade3);

    printf("Digite a quantidade total da população: \n");
    scanf("%d", &populacao3);

    printf("Digite a area total da cidade: \n");
    scanf("%f", &area3);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib3);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &turisticos3);

    densidadepopulacional3 = populacao3 / area3;
    pibpercapita3 = pib3 / populacao3;
    superpoder3 = populacao3 + area3 + pib3 + turisticos3;

// Entrada de Dados da quarta cidade

    printf(" *** Digite os dados da quarta cidade *** \n");

    printf("Digite o código da cidade: \n");
    scanf("%s", &codigodacidade4);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade4);

    printf("Digite a quantidade total da população: \n");
    scanf("%d", &populacao4);

    printf("Digite a area total da cidade: \n");
    scanf("%f", &area4);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib4);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &turisticos4);

    densidadepopulacional4 = populacao4 / area4;
    pibpercapita4 = pib4 / populacao4;
    superpoder4 = populacao4 + area4 + pib4 + turisticos4;

    // Cadastro das Cartas do Segundo Estado
    
    char estado2 = 'B'; // Letra que representa o estado
    char codigodacidade5[5], codigodacidade6[5], codigodacidade7[5], codigodacidade8[5]; // Código que vai representar a cidade
    char cidade5[10], cidade6[10], cidade7[10], cidade8[10]; // Cidade do Estado
    int populacao5, populacao6, populacao7, populacao8; // Quantidade total de pessoas
    float area5, area6, area7, area8; // Área total em km² da cidade
    float pib5, pib6, pib7, pib8; // PIB da cidade
    int turisticos5, turisticos6, turisticos7, turisticos8; // Número de pontos turísticos
    float densidadepopulacional5, densidadepopulacional6, densidadepopulacional7, densidadepopulacional8; // População dividida pela área da cidade
    float pibpercapita5, pibpercapita6, pibpercapita7, pibpercapita8; // PIB total dividido pela população
    float superpoder5, superpoder6, superpoder7, superpoder8; // Poder da carta = é a soma de variaveis


// Comandos de exibição das Cartas
   

    // Comparação entre as cartas é: 1 para sim e 0 para não

    printf("A comparação entre as Cartas se A01 é menor ou igual A04: %d\n", superpoder1 <= superpoder2);

return 0;
}