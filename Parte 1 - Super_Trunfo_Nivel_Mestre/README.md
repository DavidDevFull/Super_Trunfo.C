# ⚔ Projeto e desafio do primeiro módulo ❗
Este projeto foi desenvolvido como parte do desafio do primeiro módulo da faculdade. O objetivo é coletar informações sobre duas cidades, compará-las e exibir resultados relevantes de forma organizada.
## 📥 Entrada e Saída de Dados 📤
- printf() → Utilizado para exibir mensagens e resultados no console.
- scanf() → Utilizado para capturar entradas do usuário.
Exemplo:
    
    printf("Digite o nome da cidade: "); 
    scanf("%s", nameFromTheCity);

🔹 O scanf("%s") não captura espaços no nome da cidade. Para permitir nomes completos, utilize scanf(" %[^ ]", nameFromTheCity);.

## 📊 Variáveis e Seus Tipos Utilizados
    
    char state[3], codSingle[4], nameFromTheCity[50];
    int population, pointsTourist;
    float area, gdp, populationDensity, gdpPerCapita;

### 📌 Cálculos Importantes

🔹 Densidade Populacional

Armazena o cálculo da densidade populacional:

    populationDensity = population / area;

🔹 PIB Per Capita

Armazena o cálculo do PIB per capita:

    gdpPerCapita = gdp / population;

Essas variáveis são utilizadas tanto na Carta 1 quanto na Carta 2, permitindo a comparação entre as cidades digitadas pelos jogadores.

### populationDensity e gdpPerCapita.

populationDensity:  responsável por armazenar o canculo de desidade da população(population / area);
gdpPerCapita: responsável por armazenar o canculo do pib per capito (gdp2 / population2);

Essas variaveis possui tanto na carta 1 quanto na carta 2, foram usadas para capitar os valores digitado pelos jogadores, para que dessa forma mais tarde seja manipulada.

## 🔷 Comparando Dados com Operador Ternário 🔶

O programa utiliza o operador ternário (? :) para comparar diferentes variáveis de ambas as cidades.

Exemplo:

    printf("Cidade com maior população: %s\n", (population1 > population2) ? nameFromTheCity1 : nameFromTheCity2);

O mesmo conceito é aplicado para pontos turísticos, área, PIB, densidade populacional e PIB per capita.
## 🔢 Variáveis Super Sum ❗

O programa também calcula um valor agregado chamado superSumCart, que representa a soma de todas as variáveis importantes para cada cidade:

    double superSumCart1 = population1 + pointsTourist1 + area1 + gdp1 + gdpPerCapita1 + (1.0 / populationDensity1);
    double superSumCart2 = population2 + pointsTourist2 + area2 + gdp2 + gdpPerCapita2 + (1.0 / populationDensity2);

Ao final da execução, os valores de superSumCart1 e superSumCart2 são exibidos, permitindo uma comparação geral entre as cidades digitadas.

## 🎯 Conclusão

Este projeto reforça conceitos fundamentais de entrada e saída de dados, operações matemáticas, comparações lógicas e manipulação de var.
