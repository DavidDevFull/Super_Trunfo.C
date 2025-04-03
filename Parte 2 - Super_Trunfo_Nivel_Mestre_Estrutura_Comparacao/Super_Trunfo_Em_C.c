// Modulo 2

#include <stdio.h>
int main() {
    int optionUser;

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

    printf("<------------------------------------------------------------>\n Carta 2 \n<------------------------------------------------------------>\n");

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


        printf("<------------------------------------------------------------>\nEscolha qual voce deseja comparar\n<------------------------------------------------------------\n");
        printf(" A carta que tiver o maior numero vence e soma mais 1 ponto\n<<< Exeto a densidade populacional menor que vence >>>\n<------------------------------------------------------------>\n");
        printf(" 1. Populacao.\n 2. Pontos turisticos. \n 3. area.\n 4. Pib. \n 5. Desidade populacional. \n 6. Pib per capito. \n");
        printf("<------------------------------------------------------------>\n Carta 1\n<------------------------------------------------------------>\n");
        printf("Escolha um numero: ");
        scanf("%d", &optionUser);



    switch(optionUser){
        case 1:
            if(population1 > population2){
                printf("Populacao da carta 1 venceu!\n");
                printf("<------------------------------------------------------------>\n");
           }
           else if(population1 < population2){
               printf("Populacao da carta 2 venceu!\n");
               printf("<------------------------------------------------------------>\n");
           }
           else{
                printf("Empate!\n");
                printf("<------------------------------------------------------------>\n");
           }

        break;

        case 2:
            if(pointsTourist1 > pointsTourist2){
                printf("Pontos turisticos da carta 1 venceu!\n");
                printf("<------------------------------------------------------------>\n");
           }
           else if(pointsTourist1 < pointsTourist2){
               printf("Pontos turisticosda carta 2 venceu!\n");
               printf("<------------------------------------------------------------>\n");
           }
           else{
                printf("Empate!\n");
                printf("<------------------------------------------------------------>\n");
           }

        break;

        case 3:
            if(area1 > area2){
                printf("Area da carta 1 venceu!\n");
                printf("<------------------------------------------------------------>\n");
           }
           else if(area1 < area2){
               printf("Area da carta 2 venceu!\n");
               printf("<------------------------------------------------------------>\n");
           }
           else{printf("Empate!\n");
           printf("<------------------------------------------------------------>\n");
           }

        break;

        case 4:
            if(gdp1 > gdp2){
                printf("Pib da carta 1 venceu!\n");
                printf("<------------------------------------------------------------>\n");
           }
           else if (gdp1 < gdp2){
               printf("Pib da carta 2 venceu!\n");
               printf("<------------------------------------------------------------>\n");
           }
           else{
                printf("Empate!\n");
                printf("<------------------------------------------------------------>\n");
           }

        break;

        case 5:
            if(populationDensity1 > populationDensity2){
                printf("Densidade da carta 2 venceu, e menor que da carta 1!\n");
                printf("<------------------------------------------------------------>\n");
           }
           else if (populationDensity1 < populationDensity2){
               printf("Densidade da carta 1 venceu, e menor que da carta 2!\n");
               printf("<------------------------------------------------------------>\n");
           }
           else{
                printf("Empate!\n");
                printf("<------------------------------------------------------------>\n");
           }

        break;

        case 6:
            if(gdpPerCapita1 > gdpPerCapita2){
                printf("Pib per capito da carta 1 venceu!\n");
                printf("<------------------------------------------------------------>\n");
           }
           else if (gdpPerCapita1 < gdpPerCapita2){
               printf("Pib per capito da carta 1 venceu!\n");
               printf("<------------------------------------------------------------>\n");
           }
           else{
                printf("Empate!\n");
                printf("<------------------------------------------------------------>\n");
           }

        break;

        default:
            printf("Digite numero de acordo com o menu!!!\n");
    }

    double superSumCart1 = population1 + pointsTourist1 + area1 + gdp1 + gdpPerCapita1 + (1.0 / (populationDensity1 != 0 ? populationDensity1 : 1));
    double superSumCart2 = population2 + pointsTourist2 + area2 + gdp2 + gdpPerCapita2 + (1.0 / (populationDensity2 != 0 ? populationDensity2 : 1));

    printf("Carta 1 possui o valor total de: %.3f\n", superSumCart1);
    printf("Carta 2 possui o valor total de: %.3f\n", superSumCart2);

    return 0;
}

