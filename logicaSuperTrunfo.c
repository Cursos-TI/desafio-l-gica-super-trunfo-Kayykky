#include <stdio.h>

int main() {
    // DECLARAÇÃO DE VARIÁVEIS
    char estado1, estado2;
    int numero1, numero2;
    char cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2, densPop1, densPop2, pibCapita1, pibCapita2;
    unsigned int pontosTuristicos1, pontosTuristicos2;
    float superPoder1, superPoder2;
    char codigo1[4], codigo2[4];

    // CARTA 01
    printf("\nInsira os dados da Carta 1:\n");
    printf("Estado (Insira uma letra de 'A' a 'H'): ");
    scanf(" %c", &estado1);

    printf("Número da carta (de 1 a 4): ");
    scanf("%d", &numero1);

    printf("Nome da cidade: ");
    scanf(" %s", cidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);


    // CARTA 02
    printf("\nInsira os dados da Carta 2:\n");
    printf("Estado (Insira uma letra de 'A' a 'H'): ");
    scanf(" %c", &estado2);

    printf("Número da carta (de 1 a 4): ");
    scanf("%d", &numero2);

    printf("Nome da cidade: ");
    scanf(" %s", cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);


    // CÓDIGO, DENSIDADE POPULACIONAL E PIB PER CAPITA
    sprintf(codigo1, "%c%02d", estado1, numero1);
    sprintf(codigo2, "%c%02d", estado2, numero2);

    densPop1 = populacao1 / area1;
    densPop2 = populacao2 / area2;

    pibCapita1 = (pib1 * 1000000000) / populacao1; // PIB está em bilhões
    pibCapita2 = (pib2 * 1000000000) / populacao2;

    // SUPER PODER
    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibCapita1 + (1 / densPop1);
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibCapita2 + (1 / densPop2);

    // EXIBIR DADOS DAS CARTAS
    printf("\nCARTA 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densPop1);
    printf("PIB per Capita: %.2f reais\n", pibCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\nCARTA 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densPop2);
    printf("PIB per Capita: %.2f reais\n", pibCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    //COMPARAÇÃO DE ATRIBUTO
    printf("\nComparação de cartas (Atributo: População):\n");
    printf("Carta 1 - %s: %u\n", cidade1, populacao1);
    printf("Carta 2 - %s: %u\n", cidade2, populacao2);

    if (populacao1 > populacao2){
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }

    // COMPARAÇÕES GERAIS
    printf("\nComparação de Cartas:\n");
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densPop1 < densPop2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibCapita1 > pibCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    return 0;
}
