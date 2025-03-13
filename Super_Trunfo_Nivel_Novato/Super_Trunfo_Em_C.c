#include <stdio.h>

int main() {
    printf("<------------------------------>\n");
    printf("Carta 1\n");
    printf("<------------------------------>\n");

    char estado1[3], codigoUnico1[4], nomeDaCidade1[30];
    int populacao1, pontosTuristicos1;
    float area1, pib1;

    //------------------------------------------------//
    printf("Digite a sigla do seu estado (ex: SP): ");
    scanf("%2s", estado1);  // Limitando a 2 caracteres para evitar overflow

    printf("Digite o codigo unico (ex: 123): ");
    scanf("%3s", codigoUnico1);  // Limitando a 3 caracteres

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeDaCidade1); // Lê uma string com espaços

    printf("Digite o numero da populacao: ");
    scanf("%d", &populacao1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("Digite a area da cidade (km): ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);

    printf("<------------------------------>\n");
    printf("Carta 2\n");
    printf("<------------------------------>\n");

    char estado2[3], codigoUnico2[4], nomeDaCidade2[30];
    int populacao2, pontosTuristicos2;
    float area2, pib2;

    //------------------------------------------------//
    printf("Digite a sigla do seu estado (ex: SP): ");
    scanf("%2s", estado2);  // Limitando a 2 caracteres para evitar overflow

    printf("Digite o codigo unico (ex: 123): ");
    scanf("%3s", codigoUnico2);  // Limitando a 3 caracteres

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeDaCidade2); // Lê uma string com espaços

    printf("Digite o numero da populacao: ");
    scanf("%d", &populacao2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    printf("Digite a area da cidade (km): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);

    // Exibição dos dados inseridos(Carta 1)
    printf("\n<----------> Carta 1 <---------->\n");
    printf("Resumo da Cidade:\n");
    printf("Estado: %s\n", estado1);
    printf("Código Unico: %s\n", codigoUnico1);
    printf("Nome: %s\n", nomeDaCidade1);
    printf("Populaçao: %d\n", populacao1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Area: %.2f km\n", area1);
    printf("PIB: %.2f bilhoes\n", pib1);
    printf("<---------------------------------->\n");

    // Exibição dos dados inseridos(Carta 2)
    printf("\n<----------> Carta 2 <---------->\n");
    printf("Resumo da Cidade:\n");
    printf("Estado: %s\n", estado2);
    printf("Código Unico: %s\n", codigoUnico2);
    printf("Nome: %s\n", nomeDaCidade2);
    printf("Populaçao: %d\n", populacao2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Area: %.2f km\n", area2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("<---------------------------------->\n");

    return 0;
}
