#include <stdio.h>

int main(void) {
    // Variáveis para a Carta 1
    char estado1;
    char codigo1[4];       // Ex: "A01" (3 caracteres + '\0')
    char cidade1[100];     // Suporta nomes com espaços
    int populacao1;
    float area1;
    float pib1;
    int pontos1;
    
    // Variáveis para a Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[100];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;
    
    // Leitura dos dados da Carta 1
    printf("Digite o estado (A-H) da Carta 1: ");
    scanf(" %c", &estado1);
    
    printf("Digite o c\u00f3digo da Carta 1 (ex: A01): ");
    scanf("%s", codigo1);
    
    printf("Digite o nome da cidade da Carta 1: ");
    scanf(" %[^\"\n]", cidade1);
    
    printf("Digite a popula\u00e7\u00e3o da cidade da Carta 1: ");
    scanf("%d", &populacao1);
    
    printf("Digite a \u00e1rea (km\u00b2) da cidade da Carta 1: ");
    scanf("%f", &area1);
    
    printf("Digite o PIB (em bilh\u00f5es de reais) da cidade da Carta 1: ");
    scanf("%f", &pib1);
    
    printf("Digite o n\u00famero de pontos tur\u00edsticos da Carta 1: ");
    scanf("%d", &pontos1);
    
    // Leitura dos dados da Carta 2
    printf("\nDigite o estado (A-H) da Carta 2: ");
    scanf(" %c", &estado2);
    
    printf("Digite o c\u00f3digo da Carta 2 (ex: B02): ");
    scanf("%s", codigo2);
    
    printf("Digite o nome da cidade da Carta 2: ");
    scanf(" %[^\n]", cidade2);
    
    printf("Digite a popula\u00e7\u00e3o da cidade da Carta 2: ");
    scanf("%d", &populacao2);
    
    printf("Digite a \u00e1rea (km\u00b2) da cidade da Carta 2: ");
    scanf("%f", &area2);
    
    printf("Digite o PIB (em bilh\u00f5es de reais) da cidade da Carta 2: ");
    scanf("%f", &pib2);
    
    printf("Digite o n\u00famero de pontos tur\u00edsticos da Carta 2: ");
    scanf("%d", &pontos2);
    
    // Cálculo dos atributos derivados
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;
    float pib_per_capita1 = pib1 / populacao1;
    float pib_per_capita2 = pib2 / populacao2;
    
    // Escolha do atributo para comparação (modifique conforme necessário)
    char atributo[] = "Populacao";
    int valor1 = populacao1;
    int valor2 = populacao2;
    
    // Comparação e exibição do resultado
    printf("\nComparacao de cartas (Atributo: %s):\n", atributo);
    printf("Carta 1 - %s (%c): %d\n", cidade1, estado1, valor1);
    printf("Carta 2 - %s (%c): %d\n", cidade2, estado2, valor2);
    
    if (valor1 > valor2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (valor2 > valor1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }
    
    return 0;
}