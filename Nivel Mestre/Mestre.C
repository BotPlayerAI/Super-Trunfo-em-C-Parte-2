#include <stdio.h>

void exibirMenu() {
    printf("\nEscolha um atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Populacional (menor vence)\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Super Poder\n");
    printf("Digite a opcao desejada: ");
}

int main(void) {
    char cidade1[100], cidade2[100];
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2, densidade1, densidade2, pibPerCapita1, pibPerCapita2, superPoder1, superPoder2;
    int pontos1, pontos2, atributo1, atributo2;
    
    // Entrada dos dados
    printf("Digite o nome da cidade da Carta 1: ");
    scanf(" %[^\n]", cidade1);
    printf("Digite a populacao da cidade da Carta 1: ");
    scanf("%lu", &populacao1);
    printf("Digite a area (em km²) da cidade da Carta 1: ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhoes) da cidade da Carta 1: ");
    scanf("%f", &pib1);
    printf("Digite o numero de pontos turisticos da cidade da Carta 1: ");
    scanf("%d", &pontos1);
    
    printf("\nDigite o nome da cidade da Carta 2: ");
    scanf(" %[^\n]", cidade2);
    printf("Digite a populacao da cidade da Carta 2: ");
    scanf("%lu", &populacao2);
    printf("Digite a area (em km²) da cidade da Carta 2: ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhoes) da cidade da Carta 2: ");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos da cidade da Carta 2: ");
    scanf("%d", &pontos2);
    
    // Cálculos derivados
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    pibPerCapita1 = (pib1 * 1000000000.0f) / populacao1;
    pibPerCapita2 = (pib2 * 1000000000.0f) / populacao2;
    superPoder1 = populacao1 + area1 + pib1 + pontos1 + pibPerCapita1 + (1.0f / densidade1);
    superPoder2 = populacao2 + area2 + pib2 + pontos2 + pibPerCapita2 + (1.0f / densidade2);
    
    // Escolha dos atributos
    do {
        exibirMenu();
        scanf("%d", &atributo1);
        exibirMenu();
        scanf("%d", &atributo2);
    } while (atributo1 == atributo2);
    
    // Função para obter valores
    float valores1[7] = {(float)populacao1, area1, pib1, (float)pontos1, densidade1, pibPerCapita1, superPoder1};
    float valores2[7] = {(float)populacao2, area2, pib2, (float)pontos2, densidade2, pibPerCapita2, superPoder2};
    
    // Comparação
    int vitoria1 = 0, vitoria2 = 0;
    for (int i = 0; i < 2; i++) {
        int atributo = (i == 0) ? atributo1 : atributo2;
        int vencedor = (atributo == 5) ? (valores1[atributo - 1] < valores2[atributo - 1]) : (valores1[atributo - 1] > valores2[atributo - 1]);
        
        if (vencedor) vitoria1++;
        else vitoria2++;
    }
    
    float soma1 = valores1[atributo1 - 1] + valores1[atributo2 - 1];
    float soma2 = valores2[atributo1 - 1] + valores2[atributo2 - 1];
    
    printf("\nResultados:\n");
    printf("Cidade 1: %s (Soma: %.2f)\n", cidade1, soma1);
    printf("Cidade 2: %s (Soma: %.2f)\n", cidade2, soma2);
    printf("Vencedor: %s\n", (soma1 > soma2) ? cidade1 : (soma2 > soma1) ? cidade2 : "Empate");
    
    return 0;
}