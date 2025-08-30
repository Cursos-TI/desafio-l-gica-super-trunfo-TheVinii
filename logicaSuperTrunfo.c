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

    int opcao1; // Atributo de escolha
    int opcao2;

    printf("Menu de opções:\n"); // Texto de opções
    printf("1 - População)\n");
    printf("2 - Área)\n");
    printf("3 - PIB)\n");
    printf("4 - Pontos Turisticos)\n");
    printf("5 - Densidade Populacional)\n");
    
    // Primeira opção
    printf("\nEscolha o primeiro atributo: ");
    scanf("%d", &opcao1);

    // Segundo opção
    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");

    for (int i = 1; i <= 5; i++) {
        if (i != opcao1) {
            switch(i) {
                case 1: printf("1 - População\n"); break;
                case 2: printf("2 - Área\n"); break;
                case 3: printf("3 - PIB\n"); break;
                case 4: printf("4 - Pontos Turísticos\n"); break;
                case 5: printf("5 - Densidade Populacional\n"); break;
            }
        }
    }
    scanf("%d", &opcao2);

    if (opcao1 == opcao2 || opcao1 < 1 || opcao1 > 5 || opcao2 < 1 || opcao2 > 5) {
        printf("\nOpção inválida! Reinicie o programa.\n");
        return 1;
    }
     // Função para pegar valores dos atributos
    float valor1A, valor2A, valor1B, valor2B;
    char nomeAtr1[30], nomeAtr2[30];

    // Primeiro atributo
    switch(opcao1){
        case 1: valor1A = populacao1; valor1B = populacao2; 
            sprintf(nomeAtr1, "População"); 
                break;
        case 2: valor1A = area1; valor1B = area2; 
            sprintf(nomeAtr1, "Área"); 
                break;
        case 3: valor1A = pib1; valor1B = pib2; 
            sprintf(nomeAtr1, "PIB"); 
                break;
        case 4: valor1A = pTuristicos1; valor1B = pTuristicos2; 
            sprintf(nomeAtr1, "Pontos Turísticos");   
                break;
        case 5: valor1A = densidade1; valor1B = densidade2; 
            sprintf(nomeAtr1, "Densidade"); 
                break;
    }

    // Segundo atributo
    switch(opcao2){
        case 1: valor2A = populacao1; valor2B = populacao2;
            sprintf(nomeAtr2, "População"); 
                break;
        case 2: valor2A = area1; valor2B = area2; 
            sprintf(nomeAtr2, "Área"); 
                break;
        case 3: valor2A = pib1; valor2B = pib2; 
            sprintf(nomeAtr2, "PIB"); 
                break;
        case 4: valor2A = pTuristicos1; valor2B = pTuristicos2; 
            sprintf(nomeAtr2, "Pontos Turísticos"); 
                break;
        case 5: valor2A = densidade1; valor2B = densidade2; 
            sprintf(nomeAtr2, "Densidade"); 
                break;
    }
   
    // Comparação
    printf("\nComparação\n");
    printf("Carta 1: %s (%s)\n", cidade1, estado1);
    printf("Carta 2: %s (%s)\n\n", cidade2, estado2);

    // Atributo 1
    printf("%s: %.2f vs %.2f\n", nomeAtr1, valor1A, valor1B);
    if (opcao1 == 5) { // densidade → menor vence
        if (valor1A < valor1B) 
            printf("Vencedor no %s: %s\n", nomeAtr1, cidade1);
        else if (valor1B < valor1A) 
            printf("Vencedor no %s: %s\n", nomeAtr1, cidade2);
        else 
            printf("Empate no %s\n", nomeAtr1);
    } else {
        if (valor1A > valor1B) 
            printf("Vencedor no %s: %s\n", nomeAtr1, cidade1);
        else if (valor1B > valor1A) 
            printf("Vencedor no %s: %s\n", nomeAtr1, cidade2);
        else 
            printf("Empate no %s\n", nomeAtr1);
    }

    // Atributo 2
    printf("%s: %.2f vs %.2f\n", nomeAtr2, valor2A, valor2B);
    if (opcao2 == 5) {
        if (valor2A < valor2B) 
            printf("Vencedor no %s: %s\n", nomeAtr2, cidade1);
        else if (valor2B < valor2A) 
            printf("Vencedor no %s: %s\n", nomeAtr2, cidade2);
        else 
            printf("Empate no %s\n", nomeAtr2);
    } else {
        if (valor2A > valor2B) 
            printf("Vencedor no %s: %s\n", nomeAtr2, cidade1);
        else if (valor2B > valor2A) 
            printf("Vencedor no %s: %s\n", nomeAtr2, cidade2);
        else 
            printf("Empate no %s\n", nomeAtr2);
    }

    // Soma final
    float somaA = valor1A + valor2A;
    float somaB = valor1B + valor2B;

    if (somaA > somaB) {
        printf("\nVencedor: %s (%s)\n", cidade1, estado1);
    } else if (somaB > somaA) {
        printf("\nVencedor: %s (%s)\n", cidade2, estado2);
    } else {
        printf("\nEmpate!\n");
    }
    return 0;
}
