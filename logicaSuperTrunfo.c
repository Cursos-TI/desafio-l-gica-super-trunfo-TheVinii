#include <stdio.h>

int main() {
    // Carta 1
    char estado1[3];
    char codCarta1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pTuristicos1;

    // Carta 2
    char estado2[3];
    char codCarta2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pTuristicos2;

    // Coleta de informação
    printf("Digite os dados da Carta 1:\n");
    printf("Uma sigla de A-H para o Estado:");
    scanf("%2s", estado1);
    printf("Um Código da carta de 01-04:");
    scanf("%s", codCarta1);
    printf("Nome da cidade:");
    scanf("%s", cidade1);
    printf("Numero de habitantes:");
    scanf("%d", &populacao1);
    printf("Área da cidade (em km²):");
    scanf("%f", &area1);
    printf("O Produto Interno Bruto da cidade (em bilhões):");
    scanf("%f", &pib1);
    printf("Quantidade de pontos turísticos na cidade:");
    scanf("%d", &pTuristicos1);

    printf("Digite os dados da Carta 2:\n");
    printf("Uma sigla de A-H para o Estado:");
    scanf("%2s", estado2);
    printf("Um Código da carta de 01-04:");
    scanf("%s", codCarta2);
    printf("Nome da cidade:");
    scanf("%s", cidade2);
    printf("Numero de habitantes:");
    scanf("%d", &populacao2);
    printf("Área da cidade (em km²):");
    scanf("%f", &area2);
    printf("O Produto Interno Bruto da cidade (em bilhões):");
    scanf("%f", &pib2);
    printf("Quantidade de pontos turísticos na cidade:");
    scanf("%d", &pTuristicos2);

    // Cálculos derivados
    float densidade1 = populacao1 / area1;
    float pibPercapita1 = pib1 / populacao1;

    float densidade2 = populacao2 / area2;
    float pibPercapita2 = pib2 / populacao2;

    // 1 - População, 2 - Área, 3 - PIB, 4 - Densidade, 5 - PIB per capita
    int atributo = 4; // Escolha do atributo de comparação

    printf("Comparação de Cartas (Atributo: "); // Texto de resposta com if de escolha
    if (atributo == 1) printf("População)\n\n");
    if (atributo == 2) printf("Área)\n\n");
    if (atributo == 3) printf("PIB)\n\n");
    if (atributo == 4) printf("Densidade Populacional)\n\n");
    if (atributo == 5) printf("PIB per Capita)\n\n");

    if (atributo == 1) { 
        printf("Carta 1 - %s (%s): %d\n", cidade1, estado1, populacao1); // Mostra o valor a ser comparado
        printf("Carta 2 - %s (%s): %d\n", cidade2, estado2, populacao2);

        if (populacao1 > populacao2) // Comparação
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1); // Resultado Se
        else
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2); // Resultado Se não
    }

    if (atributo == 2) {
        printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, area1);
        printf("Carta 2 - %s (%s): %.2f\n", cidade2, estado2, area2);

        if (area1 > area2)
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        else
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }

    if (atributo == 3) {
        printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, pib1);
        printf("Carta 2 - %s (%s): %.2f\n", cidade2, estado2, pib2);

        if (pib1 > pib2)
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        else
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }

    if (atributo == 4) { // menor valor vence
        printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, densidade1);
        printf("Carta 2 - %s (%s): %.2f\n", cidade2, estado2, densidade2);

        if (densidade1 < densidade2)
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        else
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }

    if (atributo == 5) {
        printf("Carta 1 - %s (%s): %.6f\n", cidade1, estado1, pibPercapita1);
        printf("Carta 2 - %s (%s): %.6f\n", cidade2, estado2, pibPercapita2);

        if (pibPercapita1 > pibPercapita2)
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        else
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }

    return 0;
}
