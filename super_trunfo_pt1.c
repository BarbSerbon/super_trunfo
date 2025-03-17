#include <stdio.h>

int main(){

    // Declaração das variaveis da Carta 01:
    char estado1[50], codigoCarta1, nomeCidade1[50];
    int populacao1, nroPontosTurisicos1;
    float area1, pib1;

    // Inserção dos atributos da Carta 01:
    printf("Insira a letra do estado: \n");
    scanf('%s', &estado1);

    printf("Insira o Código da Carta: \n");
    scanf('%s', &codigoCarta1);

    printf("Insira o Nome da Cidade: \n");
    scanf('%s', &nomeCidade1);

    printf("Insira o numero de habitantes da Cidade: \n");
    scanf('%d', &populacao1);

    printf("Insira a quantidade de Pontos Turisticos da cidade: \n");
    scanf('%d', &nroPontosTurisicos1);

    printf("Insira a Area da cidade em quilometros quadrados: \n");
    scanf('%f', &area1);

    printf("Insira o Produto Interno Bruto (PIB) da cidade: \n");
    scanf('%f', &pib1);

    // Exibição da Carta 01:
    printf("Carta 01: \n");
    printf("Estado: %s \n", estado1);
    printf("Codigo da carta: %s \n", codigoCarta1);
    printf("Nome da Cidade: %s \n", nomeCidade1);
    printf("População: %d \n", populacao1);
    printf("Pontos Turisticos: %s \n", nroPontosTurisicos1);
    printf("Area: %f \n", area1);
    printf("PIB: %f \n", pib1);

    // Declaração das variaveis da Carta 02:
    char estado2[50], codigoCarta2, nomeCidade2[50];
    int populacao2, nroPontosTurisicos2;
    float area2, pib2;

    // Inserção dos atributos da Carta 02:
    printf("Insira a letra do estado: \n");
    scanf('%s', &estado2);

    printf("Insira o Código da Carta: \n");
    scanf('%s', &codigoCarta2);

    printf("Insira o Nome da Cidade: \n");
    scanf('%s', &nomeCidade2);

    printf("Insira o numero de habitantes da Cidade: \n");
    scanf('%d', &populacao2);

    printf("Insira a quantidade de Pontos Turisticos da cidade: \n");
    scanf('%d', &nroPontosTurisicos2);

    printf("Insira a Area da cidade em quilometros quadrados: \n");
    scanf('%f', &area2);

    printf("Insira o Produto Interno Bruto (PIB) da cidade: \n");
    scanf('%f', &pib2);

    // Exibição da Carta 02:
    printf("Carta 02: \n");
    printf("Estado: %s \n", estado2);
    printf("Codigo da carta: %s \n", codigoCarta2);
    printf("Nome da Cidade: %s \n", nomeCidade2);
    printf("População: %d \n", populacao2);
    printf("Pontos Turisticos: %s \n", nroPontosTurisicos2);
    printf("Area: %f \n", area2);
    printf("PIB: %f \n", pib2);

    return 0;
}
