#include <stdio.h>

int main() {
    // Carta 1
    char estado1, codigo1[5], nomecidade1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontosturisticos1;
    float densidadepop1, pibpercapita1, superpoder1;

    // Carta 2
    char estado2, codigo2[5], nomecidade2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontosturisticos2;
    float densidadepop2, pibpercapita2, superpoder2;

    // Entrada de dados da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomecidade1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosturisticos1);

    densidadepop1 = (float) populacao1 / area1;
    pibpercapita1 = (pib1 * 1e9) / populacao1;
    superpoder1 = populacao1 + area1 + (pib1 * 1e9) + pontosturisticos1 + pibpercapita1 + (1.0f / densidadepop1);

    // Entrada de dados da Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código da Carta (ex: B02): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomecidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosturisticos2);

    densidadepop2 = (float) populacao2 / area2;
    pibpercapita2 = (pib2 * 1e9) / populacao2;
    superpoder2 = populacao2 + area2 + (pib2 * 1e9) + pontosturisticos2 + pibpercapita2 + (1.0f / densidadepop2);

    // Exibição dos dados da Carta 1
    printf("\n===== CARTA 1 =====\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomecidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepop1);
    printf("PIB per Capita: %.2f reais\n", pibpercapita1);
     printf("Superpoder: %.2f\n", superpoder1);

    // Exibição dos dados da Carta 2
    printf("\n===== CARTA 2 =====\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomecidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepop2);
    printf("PIB per Capita: %.2f reais\n", pibpercapita2);
     printf("Superpoder: %.2f\n", superpoder2);

    // Comparativo
    if (superpoder1 > superpoder2) {
        printf("Superpoder:\n");
        printf("Carta 1 (%s): %.2f\n", nomecidade1, superpoder1);
        printf("Carta 2 (%s): %.2f\n", nomecidade2, superpoder2);
        printf("A carta 1 (%s) é vencedora!\n", nomecidade1);
    } else {
        printf("Superpoder:\n");
        printf("Carta 1 (%s): %.2f\n", nomecidade1, superpoder1);
        printf("Carta 2 (%s): %.2f\n", nomecidade2, superpoder2);
        printf("A carta 2 (%s) é vencedora!\n", nomecidade2);
    }

    return 0;
}
