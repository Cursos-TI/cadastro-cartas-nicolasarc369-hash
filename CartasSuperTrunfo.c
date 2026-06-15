#include <stdio.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.
int main() {

  // Área para definição das variáveis para armazenar as propriedades das cidades

  char estado1[2], codigoCarta1[4], cidade1[15];
  int carta1, populacao1, qtdPtsTuristico1;
  float areakm1;
  float pib1;

  char estado2[2], codigoCarta2[4], cidade2[15];
  int carta2, populacao2, qtdPtsTuristico2;
  float areakm2;
  float pib2;

  // Área para entrada de dados

  //Carta 1
  printf("Carta: ");
  scanf("%d", &carta1);

  //Estado
  printf("Estado: ");
  scanf("%s", estado1);

  //Código
  printf("Código: ");
  scanf("%s", codigoCarta1);

  //Nome Da Cidade
  printf("Nome da cidade: ");
  scanf("%s", cidade1);

  //População
  printf("População: ");
  scanf("%d", &populacao1);

  //Area
  printf("Área: ");
  scanf("%f", &areakm1);

  //PIB
  printf("PIB: ");
  scanf("%f", &pib1);

  //Números de pontos Turisticos
  printf("Números de pontos Turisticos: ");
  scanf("%d", &qtdPtsTuristico1);

  //Carta 2
  printf("Carta: ");
  scanf("%d", &carta2);

  //Estado
  printf("Estado: ");
  scanf("%s", estado2);

  //Código
  printf("Código: ");
  scanf("%s", codigoCarta2);

  //Nome Da Cidade
  printf("Nome da cidade: ");
  scanf("%s", cidade2);

  //População
  printf("População: ");
  scanf("%d", &populacao2);

  //Area
  printf("Área: ");
  scanf("%f", &areakm2);

  //PIB
  printf("PIB: ");
  scanf("%f", &pib2);

  //Números de pontos Turisticos
  printf("Números de pontos Turisticos: ");
  scanf("%d", &qtdPtsTuristico2);

  // Área para exibição dos dados da cidade

  printf("Carta: %d - Estado: %s - Codigo: %s - Cidade: %s - População: %d - Área: %.2f - PIB: %.2f - Números de Pontos Turisticos: %d\n", 
    carta1, estado1, codigoCarta1, cidade1, populacao1, areakm1, pib1, qtdPtsTuristico1);

  printf("Carta: %d - Estado: %s - Codigo: %s - Cidade: %s - População: %d - Área: %.2f - PIB: %.2f - Números de Pontos Turisticos: %d", 
    carta2, estado2, codigoCarta2, cidade2, populacao2, areakm2, pib2, qtdPtsTuristico2);

return 0;
}