#include <stdio.h>
#include <string.h>

int main() {
    printf("Desafio Super Trunfo - Nivel Mestre\n");

    // Declaração das variáveis para a Carta 1
    char codigo1[10], estado1[20], cidade1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontos_turisticos1;
    float densidadePopulacional1;
    float pibPerCapita1;
    float superPoder1;

    // Declaração das variáveis para a Carta 2
    char codigo2[10], estado2[20], cidade2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontos_turisticos2;
    float densidadePopulacional2;
    float pibPerCapita2;
    float superPoder2;
    
    // Variáveis para a escolha dos dois atributos
    int escolha1, escolha2;

    // --- CADASTRO DAS CARTAS (Reaproveitado) ---
    printf("\n--> Digite os Dados da Carta 1 <--\n");
    printf("Digite o Estado da Carta 1 (ex: Alagoas): ");
    scanf("%s", estado1);
    printf("Digite a Cidade da Carta 1 (ex: Maceio): ");
    scanf("%s", cidade1);
    printf("Digite o Codigo da Carta 1 (ex: A01): ");
    scanf("%s", codigo1);
    printf("Digite a Populacao da Carta 1: ");
    scanf("%lu", &populacao1);
    printf("Digite a Area da Carta 1 (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB da Carta 1: ");
    scanf("%f", &pib1);
    printf("Digite o Numero de Pontos Turisticos da Carta 1: ");
    scanf("%d", &pontos_turisticos1);

    printf("\n--> Digite os Dados da Carta 2 <--\n");
    printf("Digite o Estado da Carta 2 (ex: Sao Paulo): ");
    scanf("%s", estado2);
    printf("Digite a Cidade da Carta 2 (ex: Sao Paulo): ");
    scanf("%s", cidade2);
    printf("Digite o Codigo da Carta 2 (ex: B02): ");
    scanf("%s", codigo2);
    printf("Digite a Populacao da Carta 2: ");
    scanf("%lu", &populacao2);
    printf("Digite a Area da Carta 2 (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB da Carta 2: ");
    scanf("%f", &pib2);
    printf("Digite o Numero de Pontos Turisticos da Carta 2: ");
    scanf("%d", &pontos_turisticos2);

    // --- CÁLCULO DOS ATRIBUTOS DERIVADOS ---
    densidadePopulacional1 = (float)populacao1 / area1;
    pibPerCapita1 = pib1 / (float)populacao1;
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontos_turisticos1 + (1.0f / densidadePopulacional1) + pibPerCapita1;

    densidadePopulacional2 = (float)populacao2 / area2;
    pibPerCapita2 = pib2 / (float)populacao2;
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontos_turisticos2 + (1.0f / densidadePopulacional2) + pibPerCapita2;

    // --- MENUS INTERATIVOS E LÓGICA DE COMPARAÇÃO AVANÇADA ---
    printf("\n--- Escolha o PRIMEIRO Atributo para Comparar ---\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("7. Super Poder\n");
    printf("\nDigite o numero do primeiro atributo: ");
    scanf("%d", &escolha1);

    printf("\n--- Escolha o SEGUNDO Atributo para Comparar ---\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("7. Super Poder\n");
    printf("\nDigite o numero do segundo atributo: ");
    scanf("%d", &escolha2);

    // Variáveis para a soma dos pontos
    float soma1 = 0;
    float soma2 = 0;

    // Lógica para verificar se as escolhas são diferentes
    if (escolha1 == escolha2 || escolha1 < 1 || escolha1 > 7 || escolha2 < 1 || escolha2 > 7) {
        printf("\nOpcoes invalidas! Escolha dois atributos diferentes entre 1 e 7.\n");
        return 0; // Encerra o programa se a escolha for inválida
    }

    // --- CÁLCULO DA SOMA DOS ATRIBUTOS ---
    // Atributo 1
    switch (escolha1) {
        case 1: // Populacao
            soma1 += populacao1;
            soma2 += populacao2;
            printf("\nAtributo 1: Populacao (Carta 1: %lu, Carta 2: %lu)\n", populacao1, populacao2);
            break;
        case 2: // Area
            soma1 += area1;
            soma2 += area2;
            printf("\nAtributo 1: Area (Carta 1: %.2f, Carta 2: %.2f)\n", area1, area2);
            break;
        case 3: // PIB
            soma1 += pib1;
            soma2 += pib2;
            printf("\nAtributo 1: PIB (Carta 1: %.2f, Carta 2: %.2f)\n", pib1, pib2);
            break;
        case 4: // Pontos Turisticos
            soma1 += pontos_turisticos1;
            soma2 += pontos_turisticos2;
            printf("\nAtributo 1: Pontos Turisticos (Carta 1: %d, Carta 2: %d)\n", pontos_turisticos1, pontos_turisticos2);
            break;
        case 5: // Densidade Populacional (menor valor vence na regra, mas a soma aqui é direta)
            soma1 += densidadePopulacional1;
            soma2 += densidadePopulacional2;
            printf("\nAtributo 1: Densidade Populacional (Carta 1: %.2f, Carta 2: %.2f)\n", densidadePopulacional1, densidadePopulacional2);
            break;
        case 6: // PIB per Capita
            soma1 += pibPerCapita1;
            soma2 += pibPerCapita2;
            printf("\nAtributo 1: PIB per Capita (Carta 1: %.2f, Carta 2: %.2f)\n", pibPerCapita1, pibPerCapita2);
            break;
        case 7: // Super Poder
            soma1 += superPoder1;
            soma2 += superPoder2;
            printf("\nAtributo 1: Super Poder (Carta 1: %.2f, Carta 2: %.2f)\n", superPoder1, superPoder2);
            break;
    }

    // Atributo 2
    switch (escolha2) {
        case 1:
            soma1 += populacao1;
            soma2 += populacao2;
            printf("Atributo 2: Populacao (Carta 1: %lu, Carta 2: %lu)\n", populacao1, populacao2);
            break;
        case 2:
            soma1 += area1;
            soma2 += area2;
            printf("Atributo 2: Area (Carta 1: %.2f, Carta 2: %.2f)\n", area1, area2);
            break;
        case 3:
            soma1 += pib1;
            soma2 += pib2;
            printf("Atributo 2: PIB (Carta 1: %.2f, Carta 2: %.2f)\n", pib1, pib2);
            break;
        case 4:
            soma1 += pontos_turisticos1;
            soma2 += pontos_turisticos2;
            printf("Atributo 2: Pontos Turisticos (Carta 1: %d, Carta 2: %d)\n", pontos_turisticos1, pontos_turisticos2);
            break;
        case 5:
            soma1 += densidadePopulacional1;
            soma2 += densidadePopulacional2;
            printf("Atributo 2: Densidade Populacional (Carta 1: %.2f, Carta 2: %.2f)\n", densidadePopulacional1, densidadePopulacional2);
            break;
        case 6:
            soma1 += pibPerCapita1;
            soma2 += pibPerCapita2;
            printf("Atributo 2: PIB per Capita (Carta 1: %.2f, Carta 2: %.2f)\n", pibPerCapita1, pibPerCapita2);
            break;
        case 7:
            soma1 += superPoder1;
            soma2 += superPoder2;
            printf("Atributo 2: Super Poder (Carta 1: %.2f, Carta 2: %.2f)\n", superPoder1, superPoder2);
            break;
    }
    
    // --- EXIBIÇÃO DO RESULTADO FINAL ---
    printf("\nSoma total da Carta 1: %.2f\n", soma1);
    printf("Soma total da Carta 2: %.2f\n", soma2);
    
    printf("\nResultado: ");
    if (soma1 > soma2) {
        printf("Carta 1 (%s) venceu!\n", cidade1);
    } else if (soma2 > soma1) {
        printf("Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Empate!\n");
    }

    return 0;
}