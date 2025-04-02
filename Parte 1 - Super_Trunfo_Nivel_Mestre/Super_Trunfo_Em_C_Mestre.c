#include <stdio.h>

int main() {
    printf("<------------------------------>\n Carta 1\n<------------------------------>\n");

    char state1[3], codSingle1[4], nameFromTheCity1[50];
    int population1, pointsTourist1;
    float area1, gdp1, populationDensity1, gdpPerCapita1;

    printf("Digite a sigla do seu estado (ex: SP): ");
    scanf("%2s", state1);

    printf("Digite o codigo unico (ex: 123): ");
    scanf("%s", codSingle1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", nameFromTheCity1);

    printf("Digite o numero da populacao: ");
    scanf("%d", &population1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pointsTourist1);

    printf("Digite a area da cidade (km): ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade (em bilhoes): ");
    scanf("%f", &gdp1);

    populationDensity1 = (area1 != 0) ? (population1 / area1) : 0;
    gdpPerCapita1 = gdp1 / population1;

    printf("<------------------------------>\n Carta 2 \n<------------------------------>\n");

    char state2[3], codSingle2[4], nameFromTheCity2[50];
    int population2, pointsTourist2;
    float area2, gdp2, populationDensity2, gdpPerCapita2;

    printf("Digite a sigla do seu estado (ex: SP): ");
    scanf("%2s", state2);

    printf("Digite o codigo unico (ex: 123): ");
    scanf("%s", codSingle2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", nameFromTheCity2);

    printf("Digite o numero da populacao: ");
    scanf("%d", &population2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pointsTourist2);

    printf("Digite a area da cidade (km): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade (em bilhoes): ");
    scanf("%f", &gdp2);

    populationDensity2 = (area2 != 0) ? (population2 / area2) : 0;
    gdpPerCapita2 = gdp2 / population2;

    printf("\n<----------> Carta 1 <---------->\n");
    printf("Estado: %s\nCodigo Unico: %s\nNome: %s\nPopulacao: %d\nPontos Turisticos: %d\nArea: %.2f km\nPIB: %.2f bilhoes\nDensidade Populacional: %.2f hab/km\nPIB per Capita: %.2f\n",
           state1, codSingle1, nameFromTheCity1, population1, pointsTourist1, area1, gdp1, populationDensity1, gdpPerCapita1);

    printf("\n<----------> Carta 2 <---------->\n");
    printf("Estado: %s\nCodigo Unico: %s\nNome: %s\nPopulacao: %d\nPontos Turisticos: %d\nArea: %.2f km\nPIB: %.2f bilhoes\nDensidade Populacional: %.2f hab/km\nPIB per Capita: %.2f\n",
           state2, codSingle2, nameFromTheCity2, population2, pointsTourist2, area2, gdp2, populationDensity2, gdpPerCapita2);

    printf("<------------------------------>\n>>>>>>>>>> Resultado comparacao <<<<<<<<<<\n<------------------------------>\n");
    printf("Cidade com maior populacao: %s\n", (population1 > population2) ? nameFromTheCity1 : nameFromTheCity2);
    printf("Cidade com mais pontos turisticos: %s\n", (pointsTourist1 > pointsTourist2) ? nameFromTheCity1 : nameFromTheCity2);
    printf("Cidade com maior area: %s\n", (area1 > area2) ? nameFromTheCity1 : nameFromTheCity2);
    printf("Cidade com maior PIB: %s\n", (gdp1 > gdp2) ? nameFromTheCity1 : nameFromTheCity2);
    printf("Cidade com maior densidade populacional: %s\n", (populationDensity1 > populationDensity2) ? nameFromTheCity1 : nameFromTheCity2);
    printf("Cidade com maior PIB per capita: %s\n", (gdpPerCapita1 > gdpPerCapita2) ? nameFromTheCity1 : nameFromTheCity2);

    printf("<------------------------------>\n>>>>>>>>>> Soma de todos os valores! <<<<<<<<<<\n<------------------------------>\n");

    double superSumCart1 = population1 + pointsTourist1 + area1 + gdp1 + gdpPerCapita1 + (1.0 / (populationDensity1 != 0 ? populationDensity1 : 1));
    double superSumCart2 = population2 + pointsTourist2 + area2 + gdp2 + gdpPerCapita2 + (1.0 / (populationDensity2 != 0 ? populationDensity2 : 1));

    printf("Carta 1 possui o valor total de: %.3f\n", superSumCart1);
    printf("Carta 2 possui o valor total de: %.3f\n", superSumCart2);

    return 0;
}
