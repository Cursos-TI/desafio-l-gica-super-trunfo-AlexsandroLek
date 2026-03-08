#include <stdio.h>
 // Desafio Super Trunfo - Países
 int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    
    unsigned long int populacao1, populacao2;
    int pontosturisticos1, pontosturisticos2, PODER;

    float area1, pib1, densidade1, pibPerCapita1, superpoder1;
    float area2, pib2, densidade2, pibPerCapita2, superpoder2;

    char estado1[20], estado2[20];
    char cidade1[20], cidade2[20];
    char carta1[20], carta2[20];
    char codigo1[20], codigo2[20];

    // ENTRADA CARTA 1
    
    printf("Escolha sua 1 carta: ");
    scanf("%s", carta1);

    printf("Estado: ");
    scanf("%s", estado1);

    printf("Codigo: ");
    scanf("%s", codigo1);

    printf("Cidade: ");
    scanf("%s", cidade1);

    printf("População: ");
    scanf("%lu", &populacao1);

    printf("Area: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Pontos Turisticos: ");
    scanf("%d", &pontosturisticos1);

    // ENTRADA CARTA 2
    
    printf("\nEscolha sua 2 carta: ");
    scanf("%s", carta2);

    printf("Estado: ");
    scanf("%s", estado2);

    printf("Codigo: ");
    scanf("%s", codigo2);

    printf("Cidade: ");
    scanf("%s", cidade2);

    printf("População: ");
    scanf("%lu", &populacao2);

    printf("Area: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Pontos Turisticos: ");
    scanf("%d", &pontosturisticos2);

    // CÁLCULOS CARTA 1
    
    densidade1 = (float) populacao1 / area1;
    pibPerCapita1 = pib1 / (float) populacao1;

    superpoder1 = (float) populacao1 +
                  area1 +
                  pib1 +
                  (float) pontosturisticos1 +
                  pibPerCapita1 +
                  (1.0 / densidade1);

    // CÁLCULOS CARTA 2
    
    densidade2 = (float) populacao2 / area2;
    pibPerCapita2 = pib2 / (float) populacao2;

    superpoder2 = (float) populacao2 +
                  area2 +
                  pib2 +
                  (float) pontosturisticos2 +
                  pibPerCapita2 +
                  (1.0 / densidade2);

    // COMPARAÇÃO
    
    printf("\nComparação de Cartas:\n");

    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosturisticos1 > pontosturisticos2);

    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);

    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superpoder1 > superpoder2);

    // TEMA 3 LOGICA

    printf("\nComparação de cartas (Atributo: PIB per Capita)\n\n");

    printf("Carta 1 - %.2f\n", pibPerCapita1);
    printf("Carta 2 - %.2f\n", pibPerCapita2);

    if (pibPerCapita1 > pibPerCapita2) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
    }
    else if (pibPerCapita2 > pibPerCapita1) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
    }
    else {
        printf("\nResultado: Empate!\n\n");
    }

    printf("ESCOLHA O SUPER PODER 1 ou 2\n");
    scanf("%d", &PODER);
    switch (PODER)
    {
    case 1:
        printf("SUPER PODER 1");
        break;
    case 2:
        printf("SUPER PODER 2");
        break;
    default:
        break;
    }
  
     // ESCOLHA DOS ATRIBUTOS

    int op1, op2;

    printf("\n=== ESCOLHA O PRIMEIRO ATRIBUTO ===\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Opção: ");
    scanf("%d", &op1);

    printf("\n=== ESCOLHA O SEGUNDO ATRIBUTO ===\n");

    for(int i = 1; i <= 5; i++) {
        if(i != op1) {
            switch(i) {
                case 1: printf("1 - População\n"); break;
                case 2: printf("2 - Área\n"); break;
                case 3: printf("3 - PIB\n"); break;
                case 4: printf("4 - Pontos Turísticos\n"); break;
                case 5: printf("5 - Densidade Demográfica\n"); break;
            }
        }
    }

    printf("Opção: ");
    scanf("%d", &op2);

    if(op2 == op1) {
        printf("Erro: Você escolheu o mesmo atributo duas vezes!\n");
        return 0;
    }

    // CAPTURA DOS VALORES

    float valor1_c1 = 0, valor1_c2 = 0;
    float valor2_c1 = 0, valor2_c2 = 0;

    // Primeiro atributo
    switch(op1) {
        case 1: valor1_c1 = populacao1; valor1_c2 = populacao2; break;
        case 2: valor1_c1 = area1; valor1_c2 = area2; break;
        case 3: valor1_c1 = pib1; valor1_c2 = pib2; break;
        case 4: valor1_c1 = pontosturisticos1; valor1_c2 = pontosturisticos2; break;
        case 5: 
            valor1_c1 = 1 / densidade1; 
            valor1_c2 = 1 / densidade2; 
            break;
        default:
            printf("Opção inválida!\n");
            return 0;
    }

    // Segundo atributo
    switch(op2) {
        case 1: valor2_c1 = populacao1; valor2_c2 = populacao2; break;
        case 2: valor2_c1 = area1; valor2_c2 = area2; break;
        case 3: valor2_c1 = pib1; valor2_c2 = pib2; break;
        case 4: valor2_c1 = pontosturisticos1; valor2_c2 = pontosturisticos2; break;
        case 5: 
            valor2_c1 = 1 / densidade1; 
            valor2_c2 = 1 / densidade2; 
            break;
        default:
            printf("Opção inválida!\n");
            return 0;
    }

    // SOMA DOS ATRIBUTOS

    float soma1 = valor1_c1 + valor2_c1;
    float soma2 = valor1_c2 + valor2_c2;

    // RESULTADO

    printf("\n=== RESULTADO FINAL ===\n");
    printf("%s - Soma: %.2f\n", cidade1, soma1);
    printf("%s - Soma: %.2f\n", cidade2, soma2);

    (soma1 > soma2) ? 
        printf("Vencedor: %s\n", cidade1) :
        (soma2 > soma1) ?
            printf("Vencedor: %s\n", cidade2) :
            printf("Empate!\n");
    return 0;
}
