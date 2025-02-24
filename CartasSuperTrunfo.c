#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

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

    printf("Digite o número de pontos turísticos 2: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos para a segunda cidade

        // Cálculo da densidade populacional e pib per capita da cidade 2
        densidade_populacional2 = (area2 > 0) ? populacao2 / area2 : 0;
        pib_per_capita2 = (populacao2 > 0) ? (pib2 * 1000000000) / populacao2 : 0;

         // Definir qual atributo será comparado (população neste exemplo)
    char atributo_escolhido[] = "População";
     // Determinar a carta vencedora
     printf("\n--- Comparação de Cartas ---\n");
     printf("Atributo escolhido: %s\n", atributo_escolhido);
 
     printf("\nCarta 1 - %s (%s): %lu\n", cidade1, estado1, populacao1);
     printf("Carta 2 - %s (%s): %lu\n", cidade2, estado2, populacao2);
 
     if (populacao1 > populacao2) {
         printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
     } else if (populacao2 > populacao1) {
         printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
    
     }
 
     return 0;
 }
    