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

    char estado1[2], estado2[2];
    char carta1[5], carta2[5];
    char codigo1[50], codigo2[50] ;
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    // Entrada de dados para a primeira carta

    printf("estado 1: ");
    scanf("%s", estado1);

    printf ("Digite a carta 1: \n" );
    scanf ("%s", carta1);

    printf ("Cidade 1: \n");
    scanf ("%s", cidade1);

    printf ("Codico da cidade 1: \n");
    scanf ("%s", codigo1);

    printf ("População 1: \n");
    scanf ("%d", &populacao1);

    printf ("Digite a area 1: \n");
    scanf ("%f", &area1);

    printf ("Digite o pib 2: \n");
    scanf ("%f", &pib1);

    printf ("Digite o número de pontos turisticos 1: \n");
    scanf ("%d", &pontosTuristicos1);

    // Entrada de dados para a segunda carta

    printf ("\nDigite o estado 2: \n");
    scanf ("%s", estado2);

    printf ("Digite a carta2: \n");
    scanf ("%s", carta2);

    printf ("Digite a cidade 2: \n");
    scanf ("%s", cidade2);

    printf ("Codico da cidade 2: \n");
    scanf ("%s", codigo2);

    printf ("População 2: \n");
    scanf ("%d", &populacao2);

    printf ("Digite a area 2: \n");
    scanf ("%f", &area2);

    printf ("Digite o pib 2: \n");
    scanf ("%f", &pib2);

    printf ("Digite o número de pontos turisticos 2: \n");
    scanf ("%d", &pontosTuristicos2);

    // Exibe os dados informados carta 1

    printf("Nome do estado 1: %s\nCarta 1: %s\nNome da cidade 1: %s\n Codigo 1: %s\n", estado1, carta1, codigo1, cidade1);
    printf ("Populacao: %d\nArea 1: %f\nPib 1: %f\nPontos turisticos 1: %d\n", populacao1, area1, pib1, pontosTuristicos1);

      // Exibe os dados informados carta 2

      printf("Nome do estado 2: %s\nCarta 2: %s\nNome da cidade 2: %s\nCodigo 2: %s\n", estado2, carta2, codigo2, cidade2);
      printf ("Populacao 2: %d\nArea 2: %f\nPib 2: %f\nPontos turisticos 2: %d\n", populacao2, area2, pib2, pontosTuristicos2);

     


    return 0;






    











    return 0;
}
