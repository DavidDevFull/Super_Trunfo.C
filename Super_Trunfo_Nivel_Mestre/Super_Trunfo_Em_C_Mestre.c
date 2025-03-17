#include <stdio.h>

int main() {
    // Codigo mais refinado em comparacao ao nivel novato e intermediario!
    printf("<------------------------------>\n Carta 1\n<------------------------------>\n");

    char estado1[3], codigoUnico1[4], nomeDaCidade1[50];
    int populacao1, pontosTuristicos1;
    float area1, pib1, populationDensity1, gdpPerCapita1;

    // Valores cgar.
    printf("Digite a sigla do seu estado (ex: SP): ");
    scanf("%2s", estado1);

    printf("Digite o codigo unico (ex: 123): ");
    scanf("%s", codigoUnico1);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomeDaCidade1);
    // Valores inteiro.
    printf("Digite o numero da populacao: ");
    scanf("%d", &populacao1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);
    // Valores float.
    printf("Digite a area da cidade (km): ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade (em bilhoes): ");
    scanf("%f", &pib1);
    // Calculos.
    populationDensity1 = populacao1 / area1;
    gdpPerCapita1 = pib1 / populacao1;

    printf("<------------------------------>\n Carta 2 \n<------------------------------>\n"); // Tabela em uma unica linha.

    char estado2[3], codigoUnico2[4], nomeDaCidade2[50];
    int populacao2, pontosTuristicos2;
    float area2, pib2, populationDensity2, gdpPerCapita2;

    printf("Digite a sigla do seu estado (ex: SP): ");
    scanf("%2s", estado2);

    printf("Digite o codigo unico (ex: 123): ");
    scanf("%s", codigoUnico2);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomeDaCidade2);

    printf("Digite o numero da populacao: ");
    scanf("%d", &populacao2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    printf("Digite a area da cidade (km): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade (em bilhoes): ");
    scanf("%f", &pib2);

    populationDensity2 = populacao2 / area2;
    gdpPerCapita2 = pib2 / populacao2;

    printf("\n<----------> Carta 1 <---------->\n"); // Resultado final em coluna.
    printf("Estado: %s\nCodigo Unico: %s\nNome: %s\nPopulacao: %d\nPontos Turisticos: %d\nArea: %.2f km\nPIB: %.2f bilhoes\nDensidade Populacional: %.2f hab/km\nPIB per Capita: %.2f\n",
           estado1, codigoUnico1, nomeDaCidade1, populacao1, pontosTuristicos1, area1, pib1, populationDensity1, gdpPerCapita1); //Declarado tudo em uma linha, assim economiza memoria!

    printf("\n<----------> Carta 2 <---------->\n");// Resultado final em coluna.
    printf("Estado: %s\nCodigo Unico: %s\nNome: %s\nPopulacao: %d\nPontos Turisticos: %d\nArea: %.2f km\nPIB: %.2f bilhoes\nDensidade Populacional: %.2f hab/km\nPIB per Capita: %.2f\n",
           estado2, codigoUnico2, nomeDaCidade2, populacao2, pontosTuristicos2, area2, pib2, populationDensity2, gdpPerCapita2); //Declarado tudo em uma linha, assim economiza memoria!

    printf("<------------------------------>\n>>>>>>>>>> Resultado comparacao <<<<<<<<<<\n<------------------------------>\n");
    //Operador ternario funcionar igual a do JS, apos <?> indica resposta verdadeira e apos <:> indica resposta em caso for falso.
    printf("Cidade com maior populacao: %s\n", (populacao1 > populacao2) ? nomeDaCidade1 : nomeDaCidade2);
    printf("Cidade com mais pontos turisticos: %s\n", (pontosTuristicos1 > pontosTuristicos2) ? nomeDaCidade1 : nomeDaCidade2);
    printf("Cidade com maior area: %s\n", (area1 > area2) ? nomeDaCidade1 : nomeDaCidade2);
    printf("Cidade com maior PIB: %s\n", (pib1 > pib2) ? nomeDaCidade1 : nomeDaCidade2);
    printf("Cidade com maior densidade populacional: %s\n", (populationDensity1 > populationDensity2) ? nomeDaCidade1 : nomeDaCidade2);
    printf("Cidade com maior PIB per capita: %s\n", (gdpPerCapita1 > gdpPerCapita2) ? nomeDaCidade1 : nomeDaCidade2);

    printf("<------------------------------>\n>>>>>>>>>> Soma de todos os valores! <<<<<<<<<<\n<------------------------------>\n");

    double superSomaCarta1 = populacao1 + pontosTuristicos1 + area1 + pib1 + gdpPerCapita1 + (1.0 / populationDensity1); // Todos os valores somados.
    double superSomaCarta2 = populacao2 + pontosTuristicos2 + area2 + pib2 + gdpPerCapita2 + (1.0 / populationDensity2); // Todos os valores somados.

    printf("Carta 1 possui o valor total de: %.3f\n", superSomaCarta1);
    printf("Carta 2 possui o valor total de: %.3f\n", superSomaCarta2);

    return 0;
}
