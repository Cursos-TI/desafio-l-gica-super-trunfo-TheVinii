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
    printf("Uma sigla para o Estado:");
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
    printf("Uma sigla para o Estado:");
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
    float densidade2 = populacao2 / area2;

    int opcao; // Atributo de escolha

    printf("Comparação de Cartas"); // Texto de opções
    printf("1 - População)\n");
    printf("2 - Área)\n");
    printf("3 - PIB)\n");
    printf("4 - Pontos Turisticos)\n");
    printf("5 - Densidade Populacional)\n");
    scanf("%d", &opcao);

    printf("\nComparação entre %s e %s\n", estado1, estado2);

    switch(opcao){ 
        case 1: // População
            printf("População: %lu vs %lu\n", populacao1, populacao2);
            if (populacao1 > populacao2) {
                printf("Vencedor: %s\n", estado1);
            } else if (populacao2 > populacao1) {
                printf("Vencedor: %s\n", estado2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2: // Área
            printf("Área: %.2f km² vs %.2f km²\n", area1, area2);
            if (area1 > area2) {
                printf("Vencedor: %s\n", estado1);
            } else if (area2 > area1) {
                printf("Vencedor: %s\n", estado2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3: // PIB
            printf("PIB: %.3f tri R$ vs %.3f tri R$\n", pib1, pib2);
            if (pib1 > pib2) {
                printf("Vencedor: %s\n", estado1);
            } else if (pib2 > pib1) {
                printf("Vencedor: %s\n", estado2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4: // Pontos Turísticos
            printf("Pontos Turísticos: %d vs %d\n", pTuristicos1, pTuristicos2);
            if (pTuristicos1 > pTuristicos2) {
                printf("Vencedor: %s\n", estado1);
            } else if (pTuristicos2 > pTuristicos1) {
                printf("Vencedor: %s\n", estado2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5: // Densidade demográfica (menor vence)
            printf("Densidade: %.2f hab/km² vs %.2f hab/km²\n", densidade1, densidade2);
            if (densidade1 < densidade2) {
                printf("Vencedor: %s (menor densidade)\n", estado1);
            } else if (densidade2 < densidade1) {
                printf("Vencedor: %s (menor densidade)\n", estado2);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opção inválida! Tente novamente.\n");
            break;
    }

    return 0;
}
