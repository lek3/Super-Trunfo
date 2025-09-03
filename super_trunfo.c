#include <stdio.h>

int main() {
    // Dados da Carta 1
    char estado1;
    char codigo1[4];
    char nome_cidade1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontos_turisticos1;
    float densidade1, pib_per_capita1, super_poder1;

    // Dados da Carta 2
    char estado2;
    char codigo2[4];
    char nome_cidade2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontos_turisticos2;
    float densidade2, pib_per_capita2, super_poder2;

    // Entrada de dados - Carta 1
    printf("Carta 1:\n");
    printf("Digite o Estado (letra de A a H): ");
    scanf(" %c", &estado1);

    printf("Digite o Código da Carta (ex: A01): ");
    scanf("%s", codigo1);
    getchar(); // Limpa o \n do buffer

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nome_cidade1);

    printf("Digite a População: ");
    scanf("%lu", &populacao1);

    printf("Digite a Área (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Cálculos - Carta 1
    densidade1 = populacao1 / area1;
    pib_per_capita1 = (pib1 * 1e9) / populacao1; // Convertendo bilhões para reais
    super_poder1 = (float)populacao1 + area1 + (pib1 * 1e9) + pontos_turisticos1 + pib_per_capita1 + (1.0f / densidade1);

    // Entrada de dados - Carta 2
    printf("\nCarta 2:\n");
    printf("Digite o Estado (letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Digite o Código da Carta (ex: B03): ");
    scanf("%s", codigo2);
    getchar(); // Limpa o \n do buffer

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nome_cidade2);

    printf("Digite a População: ");
    scanf("%lu", &populacao2);

    printf("Digite a Área (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculos - Carta 2
    densidade2 = populacao2 / area2;
    pib_per_capita2 = (pib2 * 1e9) / populacao2; // Convertendo bilhões para reais
    super_poder2 = (float)populacao2 + area2 + (pib2 * 1e9) + pontos_turisticos2 + pib_per_capita2 + (1.0f / densidade2);

    // Impressão dos dados - Carta 1
    printf("\n--- Dados da Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1);

    // Impressão dos dados - Carta 2
    printf("\n--- Dados da Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);

    // Comparações
    printf("\n--- Comparação de Cartas ---\n");
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontos_turisticos1 > pontos_turisticos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2); // Menor vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pib_per_capita1 > pib_per_capita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", super_poder1 > super_poder2);

    return 0;
}
