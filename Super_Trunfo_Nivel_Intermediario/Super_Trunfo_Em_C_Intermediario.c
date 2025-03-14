#include <stdio.h>

int main() {
    printf("<------------------------------>\n Carta 1\n<------------------------------>\n"); //Criando tabela da carta em uma unica linha!


    char estado1[3], codigoUnico1[4], nomeDaCidade1[50]; // Declarando as variaveis, os [] indicam a quantidade de caracteres que irá possuir.
    int populacao1, pontosTuristicos1; // Declarando variaveis do tipo int.
    float area1, pib1, populationDensity1, gdpPerCapita1; // Declarando variaveis do tipo float.

    //------------------------------------------------//
    printf("Digite a sigla do seu estado (ex: SP): "); // "Print" = Mostrar valor.
    scanf("%2s", estado1); //Scanf = Amarzenar o valor na variavel gerada a cima.

    printf("Digite o codigo unico (ex: 123): ");
    scanf("%3s", codigoUnico1); // %s é usado para declarar que o armazenamento será de uma sequencia de caracteres.

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeDaCidade1); // %[^\n] Permite que o usuario digite valores com espaço.

    printf("Digite o numero da populacao: "); // >>>>&variavel<<< armazena o valor digitado pelo usuário
    scanf("%d", &populacao1); // %d indica que a leitura será de um numero inteiro.

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("Digite a area da cidade (km): ");
    scanf("%f", &area1); // %f indica que a leitura será de um ponto flutuante.

    printf("Digite o PIB da cidade (em bilhoes): ");
    scanf("%f", &pib1);

    // Cálculo da densidade populacional e PIB per capita
    populationDensity1 = (float) populacao1 / area1; //float - Forca a conversao de int para float.
    gdpPerCapita1 = pib1 / populacao1;


    //================================================//

    printf("<------------------------------>\n Carta 2 \n<------------------------------>\n"); //Criando tabela da carta em uma unica linha!
    //>>>>>>>>>>OS COMENTARIOS DA CARTA 1 TAMBEM VALE PARA A CARTA 2<<<<<<<<<<

    char estado2[3], codigoUnico2[4], nomeDaCidade2[30];
    int populacao2, pontosTuristicos2;
    float area2, pib2, populationDensity2, gdpPerCapita2;

    //------------------------------------------------//
    printf("Digite a sigla do seu estado (ex: SP): ");
    scanf("%2s", estado2);

    printf("Digite o codigo unico (ex: 123): ");
    scanf("%3s", codigoUnico2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeDaCidade2);

    printf("Digite o numero da populacao: ");
    scanf("%d", &populacao2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    printf("Digite a area da cidade (km): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);

    // Cálculo da densidade populacional e PIB per capita para a segunda cidade
    populationDensity2 = (float) populacao2 / area2;
    gdpPerCapita2 = pib2 / populacao2;


    // Exibição dos dados inseridos (Carta 1)
    printf("\n<----------> Carta 1 <---------->\n");
    printf("Resumo da Cidade:\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo Unico: %s\n", codigoUnico1);
    printf("Nome: %s\n", nomeDaCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Area: %.2f km\n", area1);
    printf("PIB: %.2f bilhoes\n", pib1);
    printf("Densidade Populacional: %f hab/km\n", populationDensity1); //Resultado da conta.
    printf("PIB per Capita: %f\n", gdpPerCapita1); //Resultado da conta.
    printf("<-------------------------------->\n");

    // Exibição dos dados inseridos (Carta 2)
    printf("\n<----------> Carta 2 <---------->\n");
    printf("Resumo da Cidade:\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo Unico: %s\n", codigoUnico2);
    printf("Nome: %s\n", nomeDaCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Area: %.2f km\n", area2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Densidade Populacional: %f hab/km\n", populationDensity2); //Resultado da conta.
    printf("PIB per Capita: %f\n", gdpPerCapita2); //Resultado da conta.
    printf("<-------------------------------->\n");

    return 0;
}
