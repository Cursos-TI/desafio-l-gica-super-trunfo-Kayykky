#include <stdio.h>

int main() {
    // ========== AULA 2 ==========
    // DECLARAÇÃO DE VARIÁVEIS
    char estado1, estado2;
    int numero1, numero2;
    char cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2, densPop1, densPop2, pibCapita1, pibCapita2;
    unsigned int pontosTuristicos1, pontosTuristicos2;
    float superPoder1, superPoder2;
    char codigo1[4], codigo2[4];
    int opcao1, opcao2; // atributos escolhidos
    float valor1_attr1 = 0, valor2_attr1 = 0;
    float valor1_attr2 = 0, valor2_attr2 = 0;
    float soma1, soma2;

    // CARTA 01
    printf("\nInsira os dados da Carta 1:\n");
    printf("Estado (letra de 'A' a 'H'): ");
    scanf(" %c", &estado1);
    printf("Número da carta (1 a 4): ");
    scanf("%d", &numero1);
    printf("Nome da cidade: ");
    scanf(" %s", cidade1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%u", &pontosTuristicos1);

    // CARTA 02
    printf("\nInsira os dados da Carta 2:\n");
    printf("Estado (letra de 'A' a 'H'): ");
    scanf(" %c", &estado2);
    printf("Número da carta (1 a 4): ");
    scanf("%d", &numero2);
    printf("Nome da cidade: ");
    scanf(" %s", cidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%u", &pontosTuristicos2);

    // CÁLCULOS
    sprintf(codigo1, "%c%02d", estado1, numero1);
    sprintf(codigo2, "%c%02d", estado2, numero2);
    densPop1 = populacao1 / area1;
    densPop2 = populacao2 / area2;
    pibCapita1 = (pib1 * 1000000000) / populacao1;
    pibCapita2 = (pib2 * 1000000000) / populacao2;
    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibCapita1 + (1 / densPop1);
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibCapita2 + (1 / densPop2);

    // ========== AULA 3 ==========
    printf("\n====== ESCOLHA O PRIMEIRO ATRIBUTO ======\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Nº de pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    scanf("%d", &opcao1);

    // MENU DINÂMICO 
    printf("\n====== ESCOLHA O SEGUNDO ATRIBUTO ======\n");
    if (opcao1 != 1) printf("1. População\n");
    if (opcao1 != 2) printf("2. Área\n");
    if (opcao1 != 3) printf("3. PIB\n");
    if (opcao1 != 4) printf("4. Nº de pontos turísticos\n");
    if (opcao1 != 5) printf("5. Densidade demográfica\n");
    scanf("%d", &opcao2);

    // COMPARAÇÃO DO PRIMEIRO ATRIBUTO
    printf("\n====== PRIMEIRO ATRIBUTO ESCOLHIDO ======\n");
    switch (opcao1) {
        case 1:
            printf("População\n");
            printf("%s: %lu | %s: %lu\n", cidade1, populacao1, cidade2, populacao2);
            valor1_attr1 = populacao1;
            valor2_attr1 = populacao2;
            break;

        case 2:
            printf("Área\n");
            printf("%s: %.2f | %s: %.2f\n", cidade1, area1, cidade2, area2);
            valor1_attr1 = area1;
            valor2_attr1 = area2;
            break;

        case 3:
            printf("PIB\n");
            printf("%s: %.2f | %s: %.2f\n", cidade1, pib1, cidade2, pib2);
            valor1_attr1 = pib1;
            valor2_attr1 = pib2;
            break;

        case 4:
            printf("Nº de pontos turísticos\n");
            printf("%s: %u | %s: %u\n", cidade1, pontosTuristicos1, cidade2, pontosTuristicos2);
            valor1_attr1 = pontosTuristicos1;
            valor2_attr1 = pontosTuristicos2;
            break;

        case 5:
            printf("Densidade demográfica (menor vence)\n");
            printf("%s: %.2f | %s: %.2f\n", cidade1, densPop1, cidade2, densPop2);
            // inverter a lógica: menor vence → usa valor negativo
            valor1_attr1 = -densPop1;
            valor2_attr1 = -densPop2;
            break;
    }

    // COMPARAÇÃO DO SEGUNDO ATRIBUTO
    printf("\n====== SEGUNDO ATRIBUTO ESCOLHIDO ======\n");
    switch (opcao2) {
        case 1:
            printf("População\n");
            printf("%s: %lu | %s: %lu\n", cidade1, populacao1, cidade2, populacao2);
            valor1_attr2 = populacao1;
            valor2_attr2 = populacao2;
            break;

        case 2:
            printf("Área\n");
            printf("%s: %.2f | %s: %.2f\n", cidade1, area1, cidade2, area2);
            valor1_attr2 = area1;
            valor2_attr2 = area2;
            break;

        case 3:
            printf("PIB\n");
            printf("%s: %.2f | %s: %.2f\n", cidade1, pib1, cidade2, pib2);
            valor1_attr2 = pib1;
            valor2_attr2 = pib2;
            break;

        case 4:
            printf("Nº de pontos turísticos\n");
            printf("%s: %u | %s: %u\n", cidade1, pontosTuristicos1, cidade2, pontosTuristicos2);
            valor1_attr2 = pontosTuristicos1;
            valor2_attr2 = pontosTuristicos2;
            break;

        case 5:
            printf("Densidade demográfica (menor vence)\n");
            printf("%s: %.2f | %s: %.2f\n", cidade1, densPop1, cidade2, densPop2);
            valor1_attr2 = -densPop1;
            valor2_attr2 = -densPop2;
            break;
    }

    // SOMA DOS ATRIBUTOS
    soma1 = valor1_attr1 + valor1_attr2;
    soma2 = valor2_attr1 + valor2_attr2;

    // RESULTADO FINAL
    printf("\n====== RESULTADO FINAL ======\n");
    printf("%s (Carta 1): %.2f\n", cidade1, soma1);
    printf("%s (Carta 2): %.2f\n", cidade2, soma2);

    if (soma1 > soma2) {
        printf("Vencedora: %s (Carta 1)\n", cidade1);
    } else if (soma2 > soma1) {
        printf("Vencedora: %s (Carta 2)\n", cidade2);
    } else {
        printf("Empate!\n");
    }

    return 0;
}
