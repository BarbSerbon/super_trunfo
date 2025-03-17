#include <stdio.h>
#include <string.h>

int main(){

    // Declaração das variaveis da Carta 01:
    char estado1, codigoCarta1[10], nomeCidade1[50];
    int populacao1, nroPontosTurisicos1;
    float area1, pib1;

    // Inserçãod de dados da Carta 01:
    printf("Insira a letra do estado: \n");
    scanf(" %c", &estado1);

    printf("Insira o Código da Carta: \n");
    scanf("%s", codigoCarta1);

    printf("Insira o Nome da Cidade: ");
    fgets(nomeCidade1, 50, stdin);

    printf("Insira o numero de habitantes da Cidade: \n");
    scanf("%d", &populacao1);

    printf("Insira a quantidade de Pontos Turisticos da cidade: \n");
    scanf("%d", &nroPontosTurisicos1);

    printf("Insira a Area da cidade em quilometros quadrados: \n");
    scanf("%f", &area1);

    printf("Insira o Produto Interno Bruto (PIB) da cidade: \n");
    scanf("%f", &pib1);

    // Exibição da Carrta 01:
    printf("\nCarta 01: \n");
    printf("Estado: %c \n", estado1);
    printf("Codigo da carta: %s \n", codigoCarta1);
    printf("Nome da Cidade: %s \n", nomeCidade1);
    printf("População: %d \n", populacao1);
    printf("Pontos Turisticos: %d \n", nroPontosTurisicos1);
    printf("Area: %.2f \n", area1);
    printf("PIB: %.2f \n", pib1);

    return 0;
}
