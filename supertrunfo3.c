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

    // Comparativos
    int resultado_pop, resultado_area, resultado_pib;
    int resultado_pontosturisticos, resultado_densidadepop;
    int resultado_pibpercapita, resultado_superpoder;

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

    // Comparativos
    resultado_pop = populacao1 > populacao2;
    resultado_area = area1 > area2;
    resultado_pib = (pib1 * 1e9) > (pib2 * 1e9);
    resultado_pontosturisticos = pontosturisticos1 > pontosturisticos2;
    resultado_densidadepop = densidadepop1 < densidadepop2; // menor densidade vence
    resultado_pibpercapita = pibpercapita1 > pibpercapita2;
    resultado_superpoder = superpoder1 > superpoder2;

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

    // Exibição dos resultados do comparativo
    printf("\nComparação de Cartas:\n");
    printf("População: Carta 1 venceu (%d)\n", resultado_pop);
    printf("Área: Carta 1 venceu (%d)\n", resultado_area);
    printf("PIB: Carta 1 venceu (%d)\n", resultado_pib);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", resultado_pontosturisticos);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", resultado_densidadepop);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", resultado_pibpercapita);
    printf("Super Poder: Carta 1 venceu (%d)\n", resultado_superpoder);

    return 0;
}
