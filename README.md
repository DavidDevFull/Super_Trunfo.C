# 🃏 SuperTrunfo em C 🔥.

Este programa coleta informações sobre duas cidades e exibe os dados inseridos de forma organizada. Ele faz uso de arrays de caracteres e tipos de dados como inteiros e flutuantes para armazenar as informações sobre a cidade, como o nome, população, PIB, área, entre outros.

# 👀 Visão Geral do Código 🔍.

### 1️⃣ Entrada de Dados: O programa solicita informações sobre duas cidades, incluindo:

- 🏷️ Sigla do estado.
- 🔢 Código único.
- 🌆 Nome da cidade.
- 👥 População.
- 🏰 Pontos turísticos.
- 🌍 Área (em km²).
- 💰 PIB (Produto Interno Bruto).

### 2️⃣ Exibição de Dados: Depois que todas as informações forem inseridas, o programa imprime um resumo organizado para cada cidade.

# 🛠💻 Como o Programa Funciona.

## 1️⃣. 📊 Definição de Variáveis.

### Para a Cidade 1:
- 🏷️ estado1: Sigla do estado.
- 🔢 codigoUnico1: Código único da cidade.
- 🌆 nomeDaCidade1: Nome da cidade.
- 👥 populacao1: População da cidade.
- 🏰 pontosTuristicos1: Número de pontos turísticos.
- 🌍 area1: Área da cidade (em km²).
- 💰 pib1: PIB da cidade (em bilhões).

### Para a Cidade 2:
- 🏷️ estado2: Sigla do estado.
- 🔢 codigoUnico2: Código único da cidade.
- 🌆 nomeDaCidade2: Nome da cidade.
- 👥 populacao2: População da cidade.
- 🏰 pontosTuristicos2: Número de pontos turísticos.
- 🌍 area2: Área da cidade (em km²).
- 💰 pib2: PIB da cidade (em bilhões).

### 2️⃣ 📥Entrada de Dados.
#### Para a Cidade 1

- 🏷️ estado2: Sigla do estado.
- 🔢 codigoUnico2: Código único da cidade.
- 🌆 nomeDaCidade2: Nome da cidade.
- 👥 populacao2: População da cidade.
- 🏰 pontosTuristicos2: Número de pontos turísticos.
- 🌍 area2: Área da cidade (em km²).
- 💰 pib2: PIB da cidade (em bilhões).

#### Para a Cidade 2:

As mesmas entradas, porém para uma segunda cidade.

```👀 Observação: A entrada dos dados é feita de forma que se evita o "overflow" com o uso de restrições para o tamanho das variáveis.```


### 3️⃣ 📂Exibição dos Dados.

- 📝 O programa solicita os dados ao usuário (exemplo: "Digite seu nome").
- 👤 O usuário fornece os dados (exemplo: "David").
- 💾 O programa armazena esses dados nas variáveis apropriadas para posterior uso no processamento.

Exemplo de Saída (Cidade 1️⃣):
```
<----------> Carta 1 <---------->
Resumo da Cidade:
Estado: SP
Código Unico: 123
Nome: São Paulo
População: 12300000
Pontos Turísticos: 10
Área: 1521.00 km
PIB: 500.00 bilhões
<---------------------------------->
```
Exemplo de Saída (Cidade 2):
```
<----------> Carta 2 <---------->
Resumo da Cidade:
Estado: RJ
Código Unico: 456
Nome: Rio de Janeiro
População: 6750000
Pontos Turísticos: 20
Área: 1200.00 km
PIB: 450.00 bilhões
<---------------------------------->
```

## ⚙️ Funcionamento Detalhado,

#### 📥 Entrada de Dados.
- Uso do scanf: O programa utiliza scanf para capturar dados do usuário. Atenção especial é dada ao uso de %2s para o estado (para evitar overflow) e %3s para o código único.

- Entrada de strings com espaços: Para capturar o nome das cidades, o formato scanf(" %[^\n]", nomeDaCidade) é utilizado, permitindo que o usuário digite nomes com espaços.

#### 📺 Exibição.
Após a coleta de dados, os resultados são apresentados de forma clara e bem organizada, com os dados de cada cidade sendo exibidos de maneira concisa.

## 🛠️ Tecnologias Usadas.

- Linguagem: C
- Funções: scanf, printf
- Manipulação de Strings: Arrays de caracteres e scanf para leitura de - strings com espaços.
