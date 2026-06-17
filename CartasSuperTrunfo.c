#include <stdio.h>

int main() {

    // Variáveis da Carta 1
    int carta1 = 1;
    char estado1[2] = "A";
    char codigo1[4] = "A01";
    char cidade1[30] = "Minas Gerais";
    int populacao1 = 2000000;
    float area1 = 2500.55;
    double pib1 = 529.31;
    int pontoTuristico1 = 30;

    // Variáveis da Carta 2
    int carta2 = 2;
    char estado2[2] = "B";
    char codigo2[4] = "B02";
    char cidade2[30] = "Rio de Janeiro";
    int populacao2 = 3000000;
    float area2 = 1350.99;
    double pib2 = 369.41;
    int pontoTuristico2 = 40;

    // Cálculos
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    double pibPerCapita1 = (double)pib1 / populacao1;
    double pibPerCapita2 = (double)pib2 / populacao2;

    // Resultado Carta 1
    printf("Carta 1:\n\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontoTuristico1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %u reais\n\n", pibPerCapita1);

    // Resultado Carta 2
    printf("Carta 2:\n\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontoTuristico2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %u reais\n", pibPerCapita2);

    //Calcular super poder do Card I

    double PoderTotalCardI = (double)(populacao1 + area1 + pib1 + pontoTuristico1 + pibPerCapita1);

    printf("Poder Total Card I: %u\n", PoderTotalCardI);

    double PoderTotalCardII = (double)(populacao2 + area2 + pib2 + pontoTuristico2 + pibPerCapita2);

    printf("Poder Total Card II: %u\n", PoderTotalCardII);

    //Comparação do poder Total

    double Resultado = PoderTotalCardI > PoderTotalCardII;

    if (Resultado == 1) {
        printf("Card II venceu!\n");
    } else {
        printf("Card I venceu!\n");
    }

    return 0;
}