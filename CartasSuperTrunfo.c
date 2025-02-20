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

    char estado [50];
    char carta1 [50];
    char cidade [50];
    int populacao;
    float area;
    float pib;
    int turisticos;

    printf ("Digite o estado: \n");
    scanf ("%s", estado);

    printf ("Digite a carta1: \n");
    scanf ("%s", carta1);

    printf ("Digite a cidade: \n");
    scanf ("%s", cidade);

    printf ("População: \n");
    scanf ("%d", &populacao);

    printf ("Digite a area: \n");
    scanf ("%f", &area);

    printf ("Digite o pib: \n");
    scanf ("%f", &pib);

    printf ("Digite o número de pontos turisticos: \n");
    scanf ("%d", &turisticos);

    printf("Nome do estado: %s\nCarta: %s\nNome da cidade: %s\n", estado, carta1, cidade);
    printf ("Populacao: %d\n, Area: %f\n, Pib: %f\n, Pontos turisticos: %d\n", populacao, area, pib, turisticos);

     


    return 0;






    











    return 0;
}
