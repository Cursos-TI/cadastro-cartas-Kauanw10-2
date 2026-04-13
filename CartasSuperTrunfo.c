#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado, estado2;
    char codigoCarta[3], codigoCarta2[3];
    char nomeCidade[50], nomeCidade2[50];
    int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int pontosTuristicos, pontosTuristicos2;

   
    // Área para entrada de dados
    printf("Cadastrando a 1ª Carta... \n");
    printf("------------------------- \n");
    printf("Inserindo Carta 1: \n");
    printf("Estado (Digite uma letra de 'A' a 'H'): ");
    scanf("%c", &estado);
    
    printf("Codigo da Carta (Digite o Estado novamente e um numero de 01 a 04): ");
    scanf("%s", codigoCarta);
    
    printf("Nome da Cidade (Digite o nome da cidade): ");
    scanf(" %[^\n]", nomeCidade);
    getchar();

    printf("Populacao (Digite o numero de habitantes da cidade): ");
    scanf("%d", &populacao);

    printf("Area (em km): ");
    scanf("%f", &area);

    printf("PIB (Digite o Produto Interno Bruto da Cidade): ");
    scanf("%f", &pib);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos);

    getchar();

    // Recebendo os dados - Carta 2
    printf("Cadastrando a 2ª Carta... \n");
    printf("------------------------- \n");
    printf("Inserindo Carta 2: \n");
    printf("Estado (Digite uma letra de 'A' a 'H'): ");
    scanf(" %c", &estado2);
    
    printf("Codigo da Carta (Digite o Estado novamente e um numero de 01 a 04): ");
    scanf("%s", codigoCarta2);
    
    printf("Nome da Cidade (Digite o nome da cidade): ");
    scanf(" %[^\n]", nomeCidade2);
    getchar();

    printf("Populacao (Digite o numero de habitantes da cidade): ");
    scanf("%d", &populacao2);

    printf("Area (em km): ");
    scanf("%f", &area2);

    printf("PIB (Digite o Produto Interno Bruto da Cidade): ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Área para exibição dos dados da cidade
    printf("Dados Cadastrados Da Carta 1: \n");
    printf("---------------------\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigoCarta);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f bilhoes de reais\n", pib);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos);
    
    // Exibindo os dados - Carta 2
    printf("---------------------\n");
    printf("Dados Cadastrados Da Carta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);


return 0;
} 
