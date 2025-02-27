#include <stdio.h>

int main() {


    printf("Desafio das cartas no super trufo\n");

    char estado1[3], estado2[3];
    char codigo1[50], codigo2[50];
    char cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidade_populacional1, densidade_populacional2;
    float pib_per_capita1, pib_per_capita2;
    int opcao;


    // Entrada de dados para a primeira carta

    printf("\nDigite o Estado 1: ");
    scanf("%s", estado1);

    printf("Digite o Código da carta 1: ");
    scanf("%s", codigo1);

    getchar(); // Consome o enter deixado pelo scanf anterior

    printf("Digite a Cidade 1: ");
    fgets(cidade1, sizeof(cidade1), stdin);

    printf("Digite a População 1: ");
    scanf("%lu", &populacao1);

    printf("Digite a Área 1: ");
    scanf("%f", &area1);

    printf("Digite o PIB 1: ");
    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turísticos 1: ");
    scanf("%d", &pontosTuristicos1);

   // cálculo da densidade populacional e PIB per capita da cidade 1
   densidade_populacional1 = (area1 > 0) ? populacao1 / area1 : 0;
   pib_per_capita1 = (populacao1 > 0) ? (pib1 * 1000000000) / populacao1 : 0;

    
    // Entrada de dados para a segunda carta

    printf("\nDigite o Estado 2: ");
    scanf("%s", estado2);

    printf("Digite o Código da carta 2: ");
    scanf("%s", codigo2);

    getchar(); // Consome o enter deixado pelo scanf anterior

    printf("Digite a cidade 2: ");
    fgets(cidade2, sizeof(cidade2), stdin);

    printf("Digite a população 2: ");
    scanf("%lu", &populacao2);

    printf("Digite a área 2: ");
    scanf("%f", &area2);

    printf("Digite o PIB 2: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turisticos 2: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos para a segunda cidade

        // Cálculo da densidade populacional e pib per capita da cidade 2
        densidade_populacional2 = (area2 > 0) ? populacao2 / area2 : 0;
        pib_per_capita2 = (populacao2 > 0) ? (pib2 * 1000000000) / populacao2 : 0;

        // comandos de entrada
        printf("### Escolha a opção de comparação ###\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Pontos turistico\n");
        printf("5. Densidade demografica\n");
        printf("1. Digite a opção desejada\n");
        scanf("%d", &opcao);



     printf("\n--- Comparação de Cartas ---\n");
     switch (opcao){
     case 1:
        printf("População:\n%s: %lu\n%s: %lu\n", cidade1, populacao1, cidade2, populacao2);
        if (populacao1 > populacao2 ) printf ("Vencerdor: %s\n", cidade1);
        else if (populacao2 > populacao1) printf ("vencedor: %s\n", cidade2);
        else printf("Empate\n");
        break;
    case 2:
        printf("Area:\n%s: %.2f\n%s: %.2f\n", cidade1, area1, cidade2, area2);
        if (area1 > area2) printf("Vencedor: %s\n", cidade1);
        else if (area2 > area1) printf("Vencedor: %s\n", cidade2);
        else printf("Empate\n");
        break;
    case 3:
        printf("PIB:\n%s: %.2f\n%s: %.2f\n", cidade1, pib1, cidade2, pib2);
        if (pib1 > pib2) printf("Vencedor: %s\n", cidade1);
        else if (pib2 > pib1) printf("Vencedor: %s\n", cidade2);
        else printf("Empate\n");
        break;
    case 4:
        printf("Pontos Turisticos:\n%s: %d\n%s: %d\n", cidade1, pontosTuristicos1, cidade2, pontosTuristicos2);
        if (pontosTuristicos1 > pontosTuristicos2) printf("Vencedor: %s\n", cidade1);
        else if (pontosTuristicos2 > pontosTuristicos1) printf("Vencedor: %s\n", cidade2);
        else printf("Empate\n");
        break;
    case 5:
        printf("Densidade demografica:\n%s: %.2f\n%s: %.2f\n", cidade1, densidade_populacional1, cidade2, densidade_populacional2);
        if (densidade_populacional1 > densidade_populacional2) printf("Vencedor: %s\n", cidade1);
        else if (densidade_populacional2 > densidade_populacional1) printf("Vencedor: %s\n", cidade2);
        else printf("Empate\n");
        break;
    default:
        printf("Opção inválida!\n");



    
    
     }
 
     return 0;
 }
    