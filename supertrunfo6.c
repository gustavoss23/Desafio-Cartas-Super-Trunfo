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

    // Escolha jogador
    int escolhajogador1, escolhajogador2;

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

    // Escolha o atributo
    printf("\n===== ESCOLHA O ATRIBUTO =====\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("7. Superpoder\n");

    printf("\nEscolha o primeiro atributo: ");
    scanf("%d", &escolhajogador1);

    printf("\nEscolha o segundo atributo: ");
    scanf("%d", &escolhajogador2);


    // Primeiro atributo
    printf("\n>>> Comparação do atributo %d:\n", escolhajogador1);
    switch (escolhajogador1) {
        case 1: printf("População: %s venceu!\n",
            (populacao1 > populacao2) ? "Carta 1" : "Carta 2"); 
            break;
        case 2: printf("Área: %s venceu!\n",
            (area1 > area2) ? "Carta 1" : "Carta 2"); 
            break;
        case 3: printf("PIB: %s venceu!\n",
            (pib1 > pib2) ? "Carta 1" : "Carta 2"); 
            break;
        case 4: printf("Pontos Turísticos: %s venceu!\n",
            (pontosturisticos1 > pontosturisticos2) ? "Carta 1" : "Carta 2"); 
            break;
        case 5: printf("Densidade Populacional: %s venceu!\n",
            (densidadepop1 < densidadepop2) ? "Carta 1" : "Carta 2"); 
            break;
        case 6: printf("PIB per Capita: %s venceu!\n",
            (pibpercapita1 > pibpercapita2) ? "Carta 1" : "Carta 2"); 
            break;
        case 7: printf("Superpoder: %s venceu!\n");
            (superpoder1 > superpoder2) ? "Carta 1" : "Carta 2";
            break;
        default: printf("Opção inválida!\n"); break;
    }

     // Segundo atributo
    printf("\n>>> Comparação do atributo %d:\n", escolhajogador2);
    switch (escolhajogador2) {
        case 1: printf("População: %s venceu!\n",
            (populacao1 > populacao2) ? "Carta 1" : "Carta 2"); 
            break;
        case 2: printf("Área: %s venceu!\n",
            (area1 > area2) ? "Carta 1" : "Carta 2"); 
            break;
        case 3: printf("PIB: %s venceu!\n",
            (pib1 > pib2) ? "Carta 1" : "Carta 2"); 
            break;
        case 4: printf("Pontos Turísticos: %s venceu!\n",
            (pontosturisticos1 > pontosturisticos2) ? "Carta 1" : "Carta 2"); 
            break;
        case 5: printf("Densidade Populacional: %s venceu!\n",
            (densidadepop1 < densidadepop2) ? "Carta 1" : "Carta 2"); 
            break;
        case 6: printf("PIB per Capita: %s venceu!\n",
            (pibpercapita1 > pibpercapita2) ? "Carta 1" : "Carta 2"); 
            break;
        case 7: printf("Superpoder: %s venceu!\n");
            (superpoder1 > superpoder2) ? "Carta 1" : "Carta 2";
            break;
        default: printf("Opção inválida!\n"); break;
    }

    return 0;
}