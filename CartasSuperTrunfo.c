#include <stdio.h>

int main() {   
    // Declaração de variáveis para a Carta 1
    char estado1[3], codigo1[4];
    unsigned long int populacao1;
    int pontosTuristicos1;
    float area1, pib1;
    float densidadePopulacional1, pibPerCapita1, superPoder1;

    // Declaração de variáveis para a Carta 2
    char estado2[3], codigo2[4];
    unsigned long int populacao2;
    int pontosTuristicos2;
    float area2, pib2;
    float densidadePopulacional2, pibPerCapita2, superPoder2;

    // Entrada de dados para a Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Digite o estado (sigla de 2 letras): ");
    scanf("%2s", estado1);
    printf("Digite o código da cidade (ex: A01): ");
    scanf("%3s", codigo1);
    printf("Digite a população da cidade: ");
    scanf("%lu", &populacao1);
    printf("Digite a área da cidade em km²: ");
    scanf("%f", &area1);
    if (area1 == 0) {
        printf("Erro: a área não pode ser zero.\n");
        return 1;
    }
    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculo para a Carta 1
    densidadePopulacional1 = populacao1 / area1;
    if (densidadePopulacional1 == 0) {
        printf("Erro: a densidade populacional não pode ser zero.\n");
        return 1;
    }
    pibPerCapita1 = pib1 / populacao1;
    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1 / densidadePopulacional1);

    // Entrada de dados para a Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Digite o estado (sigla de 2 letras): ");
    scanf("%2s", estado2);
    printf("Digite o código da cidade (ex: A01): ");
    scanf("%3s", codigo2);
    printf("Digite a população da cidade: ");
    scanf("%lu", &populacao2);
    printf("Digite a área da cidade em km²: ");
    scanf("%f", &area2);
    if (area2 == 0) {
        printf("Erro: a área não pode ser zero.\n");
        return 1;
    }
    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculo para a Carta 2
    densidadePopulacional2 = populacao2 / area2;
    if (densidadePopulacional2 == 0) {
        printf("Erro: a densidade populacional não pode ser zero.\n");
        return 1;
    }
    pibPerCapita2 = pib2 / populacao2;
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1 / densidadePopulacional2);

    // Comparações e exibição dos resultados
    printf("\nComparação de Cartas:\n");

    printf("População: %d (Carta 1: %lu, Carta 2: %lu)\n", populacao1 > populacao2 ? 1 : 0, populacao1, populacao2);
    printf("Área: %d\n", area1 > area2 ? 1 : 0);
    printf("PIB: %d\n", pib1 > pib2 ? 1 : 0);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1 > pontosTuristicos2 ? 1 : 0);
    printf("Densidade Populacional: %d\n", densidadePopulacional1 < densidadePopulacional2 ? 1 : 0); // Menor densidade vence
    printf("PIB per Capita: %d\n", pibPerCapita1 > pibPerCapita2 ? 1 : 0);
    printf("Super Poder: %d\n", superPoder1 > superPoder2 ? 1 : 0);

    // Exibição dos dados calculados
    printf("\nDados Calculados:\n");
    printf("Carta 1 - Super Poder: %.2f\n", superPoder1);
    printf("Carta 2 - Super Poder: %.2f\n", superPoder2);

    return 0;
}
