#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.


int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    //CARTA 1: 
    char estado1;
    char codigo_da_carta1[3], nome_cidade1[20];
    int populacao1, numero_pontos_turisticos1;
    float area_km_quadrado1, pib1;

    //CARTA 2: 
    char estado2;
    char codigo_da_carta2[3], nome_cidade2[20];
    int populacao2, numero_pontos_turisticos2;
    float area_km_quadrado2, pib2;


    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    //Cadastro da Carta 1
    printf("Programa para Cadastro de cartas do Jogo Super Trunfo!\n");
    printf("\nIniciando cadastro da primeira carta.\n");

    printf("Digite a letra Referente ao estado da cidade(opções validas de 'A' a 'H')\n");
    scanf("%c", &estado1);

    printf("Digite o código da carta(Código deve começar com a Letra referente ao estado,seguida de um número de 01 a 04 (ex: A01, B03))\n");
    scanf("%s", codigo_da_carta1);

    // Como foi pedido para usar a função scanf só será possivel imprimir a primeira palavra que foi digitada pelo usuario;
    printf("Digite o nome da cidade");
    scanf("%s", nome_cidade1);

    printf("Digite o número de habitantes da cidade\n");
    scanf("%i", populacao1);

    printf("Digite A área da cidade em quilômetros quadrados.\n");
    scanf("%f", area_km_quadrado1);

    printf("Digite o Produto Interno Bruto da cidade(PIB)");
    scanf("%f", pib1);

    printf("Digite a quantidade de pontos turísticos da cidade");
    scanf("%i", numero_pontos_turisticos1);

    printf("Cadastro da carta 1 realizado com sucesso");
    // Fim do cadastro da carta 1

    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
