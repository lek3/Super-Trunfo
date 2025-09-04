#include <stdio.h>

int main() {
    // === Declaração de variáveis ===

    // Dados da Carta 1
    char estado1;
    char codigo1[4];
    char nome_cidade1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontos_turisticos1;
    float densidade1, pib_per_capita1;

    // Dados da Carta 2
    char estado2;
    char codigo2[4];
    char nome_cidade2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontos_turisticos2;
    float densidade2, pib_per_capita2;

    // === Entrada de dados - Carta 1 ===
    printf("Carta 1:\n");
    printf("Digite o Estado (letra de A a H): ");
    scanf(" %c", &estado1);

    printf("Digite o Código da Carta (ex: A01): ");
    scanf("%3s", codigo1);
    getchar();

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

    // === Cálculos - Carta 1 ===
    densidade1 = populacao1 / area1;
    pib_per_capita1 = (pib1 * 1e9) / populacao1;

    // === Entrada de dados - Carta 2 ===
    printf("\nCarta 2:\n");
    printf("Digite o Estado (letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Digite o Código da Carta (ex: B03): ");
    scanf("%3s", codigo2);
    getchar();

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

    // === Cálculos - Carta 2 ===
    densidade2 = populacao2 / area2;
    pib_per_capita2 = (pib2 * 1e9) / populacao2;

    // === Impressão dos dados das cartas ===
    printf("\n--- Dados da Carta 1 ---\n");
    printf("Cidade: %s (%c)\n", nome_cidade1, estado1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);

    printf("\n--- Dados da Carta 2 ---\n");
    printf("Cidade: %s (%c)\n", nome_cidade2, estado2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);

    // === COMPARAÇÃO por atributo (ex: PIB per Capita) ===
    printf("\n--- Comparação de cartas (Atributo: PIB per Capita) ---\n");
    printf("Carta 1 - %s (%.2f reais)\n", nome_cidade1, pib_per_capita1);
    printf("Carta 2 - %s (%.2f reais)\n", nome_cidade2, pib_per_capita2);

    if (pib_per_capita1 > pib_per_capita2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade1);
    } else if (pib_per_capita2 > pib_per_capita1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
