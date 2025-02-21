#include <stdio.h>

int main(void) {
    // Variáveis para a Carta 1
    char estado1, codigo1[4], cidade1[100];
    int populacao1, pontos1;
    float area1, pib1, densidade1, pibPerCapita1;

    // Variáveis para a Carta 2
    char estado2, codigo2[4], cidade2[100];
    int populacao2, pontos2;
    float area2, pib2, densidade2, pibPerCapita2;

    // Leitura dos dados da Carta 1
    printf("Digite o estado (A-H) da Carta 1: ");
    scanf(" %c", &estado1);
    printf("Digite o código da Carta 1 (ex: A01): ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade da Carta 1: ");
scanf(" %[^\n]", cidade1);
    printf("Digite a população da cidade da Carta 1: ");
    scanf("%d", &populacao1);
    printf("Digite a área (em km²) da cidade da Carta 1: ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhões de reais) da cidade da Carta 1: ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos da Carta 1: ");
    scanf("%d", &pontos1);

    // Leitura dos dados da Carta 2
    printf("\nDigite o estado (A-H) da Carta 2: ");
    scanf(" %c", &estado2);
    printf("Digite o código da Carta 2 (ex: B02): ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade da Carta 2: ");
scanf(" %[^\n]", cidade2);
    printf("Digite a população da cidade da Carta 2: ");
    scanf("%d", &populacao2);
    printf("Digite a área (em km²) da cidade da Carta 2: ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhões de reais) da cidade da Carta 2: ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da Carta 2: ");
    scanf("%d", &pontos2);

    // Cálculo da Densidade Populacional e PIB per Capita
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    int opcao;
    printf("\nEscolha o atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &opcao);

    printf("\nComparação entre %s e %s:\n", cidade1, cidade2);
    switch (opcao) {
        case 1:
            printf("População: %d vs %d\n", populacao1, populacao2);
            if (populacao1 > populacao2) printf("%s venceu!\n", cidade1);
            else if (populacao2 > populacao1) printf("%s venceu!\n", cidade2);
            else printf("Empate!\n");
            break;
        case 2:
            printf("Área: %.2f km² vs %.2f km²\n", area1, area2);
            if (area1 > area2) printf("%s venceu!\n", cidade1);
            else if (area2 > area1) printf("%s venceu!\n", cidade2);
            else printf("Empate!\n");
            break;
        case 3:
            printf("PIB: %.2f bi vs %.2f bi\n", pib1, pib2);
            if (pib1 > pib2) printf("%s venceu!\n", cidade1);
            else if (pib2 > pib1) printf("%s venceu!\n", cidade2);
            else printf("Empate!\n");
            break;
        case 4:
            printf("Pontos turísticos: %d vs %d\n", pontos1, pontos2);
            if (pontos1 > pontos2) printf("%s venceu!\n", cidade1);
            else if (pontos2 > pontos1) printf("%s venceu!\n", cidade2);
            else printf("Empate!\n");
            break;
        case 5:
            printf("Densidade demográfica: %.2f vs %.2f\n", densidade1, densidade2);
            if (densidade1 < densidade2) printf("%s venceu!\n", cidade1);
            else if (densidade2 < densidade1) printf("%s venceu!\n", cidade2);
            else printf("Empate!\n");
            break;
        default:
            printf("Opção inválida!\n");
    }
    return 0;
}