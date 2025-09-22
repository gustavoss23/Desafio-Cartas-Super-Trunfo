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
    int escolhajogador;

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
    scanf("%d", &escolhajogador);



    // Comparativo

    switch(escolhajogador) {
        case 1:
            printf("\n===== Atributo escolhido: População ======\n");
            if (populacao1 > populacao2) {
                printf("População:\n");
                printf("Carta 1 (%s): %lu\n", nomecidade1, populacao1);
                printf("Carta 2 (%s): %lu\n", nomecidade2, populacao2);
                printf("Resultado: A carta 1 (%s) é vencedora!\n", nomecidade1);
                } else if (populacao1 < populacao2) {
                printf("População:\n");
                printf("Carta 1 (%s): %lu\n", nomecidade1, populacao1);
                printf("Carta 2 (%s): %lu\n", nomecidade2, populacao2);
                printf("Resultado: A carta 2 (%s) é vencedora!\n", nomecidade2);
                } else {
                printf("População:\n");
                printf("Carta 1 (%s): %d\n", nomecidade1, populacao1);
                printf("Carta 2 (%s): %d\n", nomecidade2, populacao2);
                printf("Resultado: Houve um empate!\n");
                }
            break;
        case 2:
            printf("\n===== Atributo escolhido: Área ======\n");
            if (area1 > area2) {
                printf("Área:\n");
                printf("Carta 1 (%s): %.2f km²\n", nomecidade1, area1);
                printf("Carta 2 (%s): %.2f km²\n", nomecidade2, area2);
                printf("Resultado: A carta 1 (%s) é vencedora!\n", nomecidade1);
                } else if (area1 < area2) {
                printf("Área:\n");
                printf("Carta 1 (%s): %.2f km²\n", nomecidade1, area1);
                printf("Carta 2 (%s): %.2f km²\n", nomecidade2, area2);
                printf("Resultado: A carta 2 (%s) é vencedora!\n", nomecidade2);
                } else {
                printf("Área:\n");
                printf("Carta 1 (%s): %.2f km²\n", nomecidade1, area1);
                printf("Carta 2 (%s): %.2f km²\n", nomecidade2, area2);
                printf("Resultado: Houve um empate!\n");
                }
            break;
        case 3:
            printf("\n===== Atributo escolhido: PIB ======\n");
            if (pib1 > pib2) {
                printf("PIB:\n");
                printf("Carta 1 (%s): %.2f\n", nomecidade1, pib1);
                printf("Carta 2 (%s): %.2f\n", nomecidade2, pib2);
                printf("Resultado: A carta 1 (%s) é vencedora!\n", nomecidade1);
                } else if (pib1 < pib2) {
                printf("PIB:\n");
                printf("Carta 1 (%s): %.2f\n", nomecidade1, pib1);
                printf("Carta 2 (%s): %.2f\n", nomecidade2, pib2);
                printf("Resultado: A carta 2 (%s) é vencedora!\n", nomecidade2);
                } else {
                printf("PIB:\n");
                printf("Carta 1 (%s): %.2f\n", nomecidade1, pib1);
                printf("Carta 2 (%s): %.2f\n", nomecidade2, pib2);
                printf("Resultado: Houve um empate!\n");
                }
            break;
        case 4:
            printf("\n===== Atributo escolhido: Número de Pontos Turísticos ======\n");
            if (pontosturisticos1 > pontosturisticos2) {
                printf("Número de Pontos Turísticos:\n");
                printf("Carta 1 (%s): %d\n", nomecidade1, pontosturisticos1);
                printf("Carta 2 (%s): %d\n", nomecidade2, pontosturisticos2);
                printf("Resultado: A carta 1 (%s) é vencedora!\n", nomecidade1);
                } else if (pontosturisticos1 < pontosturisticos2) {
                printf("Número de Pontos Turísticos:\n");
                printf("Carta 1 (%s): %d\n", nomecidade1, pontosturisticos1);
                printf("Carta 2 (%s): %d\n", nomecidade2, pontosturisticos2);
                printf("Resultado: A carta 2 (%s) é vencedora!\n", nomecidade2);
                } else {
                printf("Número de Pontos Turísticos:\n");
                printf("Carta 1 (%s): %d\n", nomecidade1, pontosturisticos1);
                printf("Carta 2 (%s): %d\n", nomecidade2, pontosturisticos2);
                printf("Resultado: Houve um empate!\n");                
                }
            break;
        case 5:
            printf("\n===== Atributo escolhido: Densidade Populacional ======\n");
            if (densidadepop1 < densidadepop2) {
                printf("Densidade Populacional:\n");
                printf("Carta 1 (%s): %.2f\n", nomecidade1, densidadepop1);
                printf("Carta 2 (%s): %.2f\n", nomecidade2, densidadepop2);
                printf("Resultado: A carta 1 (%s) é vencedora!\n", nomecidade1);
                } else if (densidadepop1 > densidadepop2) {
                printf("Densidade Populacional:\n");
                printf("Carta 1 (%s): %.2f\n", nomecidade1, densidadepop1);
                printf("Carta 2 (%s): %.2f\n", nomecidade2, densidadepop2);
                printf("Resultado: A carta 2 (%s) é vencedora!\n", nomecidade2);
                } else {
                printf("Densidade Populacional:\n");
                printf("Carta 1 (%s): %.2f\n", nomecidade1, densidadepop1);
                printf("Carta 2 (%s): %.2f\n", nomecidade2, densidadepop2);
                printf("Resultado: Houve um empate!\n");
                }
            break;
        case 6:
            printf("\n===== Atributo escolhido: PIB per Capita ======\n");
            if (pibpercapita1 > pibpercapita2) {
                printf("PIB per Capita:\n");
                printf("Carta 1 (%s): %.2f\n", nomecidade1, pibpercapita1);
                printf("Carta 2 (%s): %.2f\n", nomecidade2, pibpercapita2);
                printf("Resultado: A carta 1 (%s) é vencedora!\n", nomecidade1);
                } else if (pibpercapita1 < pibpercapita2) {
                printf("PIB per Capita:\n");
                printf("Carta 1 (%s): %.2f\n", nomecidade1, pibpercapita1);
                printf("Carta 2 (%s): %.2f\n", nomecidade2, pibpercapita2);
                printf("Resultado: A carta 2 (%s) é vencedora!\n", nomecidade2);
                } else {
                printf("PIB per Capita:\n");
                printf("Carta 1 (%s): %.2f\n", nomecidade1, pibpercapita1);
                printf("Carta 2 (%s): %.2f\n", nomecidade2, pibpercapita2);
                printf("Resultado: Houve um empate!\n");
                }
            break;
        case 7:
            printf("\n===== Atributo escolhido: Superpoder ======\n");
            if (superpoder1 > superpoder2) {
                printf("Superpoder:\n");
                printf("Carta 1 (%s): %.2f\n", nomecidade1, superpoder1);
                printf("Carta 2 (%s): %.2f\n", nomecidade2, superpoder2);
                printf("Resultado: A carta 1 (%s) é vencedora!\n", nomecidade1);
                } else if (superpoder1 < superpoder2) {
                printf("Superpoder:\n");
                printf("Carta 1 (%s): %.2f\n", nomecidade1, superpoder1);
                printf("Carta 2 (%s): %.2f\n", nomecidade2, superpoder2);
                printf("Resultado: A carta 2 (%s) é vencedora!\n", nomecidade2);
                } else {
                printf("Superpoder:\n");
                printf("Carta 1 (%s): %.2f\n", nomecidade1, superpoder1);
                printf("Carta 2 (%s): %.2f\n", nomecidade2, superpoder2);
                printf("Resultado: Houve um empate!\n");
                }
            break;
    }
    return 0;
}
