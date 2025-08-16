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
    char codigo_da_carta1[4], nome_cidade1[20];
    int numero_pontos_turisticos1;
    float area_km_quadrado1, pib1;

    //declaração variavel população como unsigned long int(desafio mestre)
    unsigned long int populacao1;

    //mais duas variaveis adicionadas para cumprir o nivel intermediario
    float densidade_populacional1, pib_per_capita1;

    //Variavel super poder(nivel mestre)
    float supor_poder1;


    //CARTA 2: 
    char estado2;
    char codigo_da_carta2[4], nome_cidade2[20];
    int numero_pontos_turisticos2;
    float area_km_quadrado2, pib2;

    //declaração variavel população como unsigned long int(desafio mestre)
    unsigned long int populacao2;

    
    //mais duas variaveis adicionadas para cumprir o nivel intermediario
    float densidade_populacional2, pib_per_capita2;

    //Variavel super poder(nivel mestre)
    float supor_poder2;



    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.


    //Cadastro da Carta 1
    printf("Programa para Cadastro de cartas do Jogo Super Trunfo!\n");
    printf("\nIniciando cadastro da primeira carta.\n");

    printf("Digite a letra Referente ao estado da cidade(opções validas de 'A' a 'H')\n");
    scanf(" %c", &estado1);

    printf("Digite o código da carta(Código deve começar com a Letra referente ao estado,seguida de um número de 01 a 04 (ex: A01, B03))\n");
    scanf("%s", codigo_da_carta1);

    // Como foi pedido para usar a função scanf só será possivel imprimir a primeira palavra que foi digitada pelo usuario;
    printf("Digite o nome da cidade\n");
    scanf("%s", nome_cidade1);

    printf("Digite o número de habitantes da cidade\n");
    scanf("%i", &populacao1);

    printf("Digite A área da cidade em quilômetros quadrados.\n");
    scanf("%f", &area_km_quadrado1);

    printf("Digite o Produto Interno Bruto da cidade(PIB)\n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos da cidade\n");
    scanf("%i", &numero_pontos_turisticos1);

    printf("Cadastro da carta 1 realizado com sucesso\n");
    // Fim do cadastro da carta 1

    //calculo de Desidade populacioanal
    densidade_populacional1 = (float)populacao1/area_km_quadrado1;

    //cauculo de PIB per capita
    pib_per_capita1 = (float) pib1 / populacao1;

    //densidade_populacional_invertida(nivel mestre)
    float densidade_populacional1_invertida = (1/densidade_populacional1);

    //cauculo super poder
    supor_poder1 = populacao1+area_km_quadrado1+pib1+numero_pontos_turisticos1+pib_per_capita1+densidade_populacional1_invertida;


    //Cadastro da Carta 2
    printf("\nIniciando cadastro da segunda carta.\n");

    printf("Digite a letra Referente ao estado da cidade(opções validas de 'A' a 'H')\n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta(Código deve começar com a Letra referente ao estado,seguida de um número de 01 a 04 (ex: A01, B03))\n");
    scanf("%s", codigo_da_carta2);

    // Como foi pedido para usar a função scanf só será possivel imprimir a primeira palavra que foi digitada pelo usuario;
    printf("Digite o nome da cidade\n");
    scanf("%s", nome_cidade2);

    printf("Digite o número de habitantes da cidade\n");
    scanf("%i", &populacao2);

    printf("Digite A área da cidade em quilômetros quadrados.\n");
    scanf("%f", &area_km_quadrado2);

    printf("Digite o Produto Interno Bruto da cidade(PIB)\n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos da cidade\n");
    scanf("%i", &numero_pontos_turisticos2);

    printf("Cadastro da carta 2 realizado com sucesso\n");
    // Fim do cadastro da carta 2

    
    //calculo de Desidade populacioanal
    densidade_populacional2 = (float)populacao2/area_km_quadrado2;

    //cauculo de PIB per capita
    pib_per_capita2 = (float) pib2 / populacao2;

    //densidade_populacional_invertida(nivel mestre)
    float densidade_populacional2_invertida = (1/densidade_populacional2);

     //cauculo super poder
    supor_poder2 = populacao2+area_km_quadrado2+pib2+numero_pontos_turisticos2+pib_per_capita2+densidade_populacional2_invertida;



    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    //Exibir carta 1
    printf("Cartas cadastradas\n\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n",codigo_da_carta1);
    printf("Nome da Cidade: %s\n",nome_cidade1);
    printf("População: %u\n",populacao1);
    printf("Área: %.3f Km²\n",area_km_quadrado1);
    printf("PIB: %.3f bilhões de reais\n",pib1);
    printf("Número de Pontos Turísticos: %i\n",numero_pontos_turisticos1);

    //Exibir densidade da população e pib per capita(nivel intermediario)
    printf("Densidade Populacional: %.2f\n",densidade_populacional1);
    printf("PIB per Capita: %.2f\n",pib_per_capita1);


    //Exibir carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n",codigo_da_carta2);
    printf("Nome da Cidade: %s\n",nome_cidade2);
    printf("População: %u\n",populacao2);
    printf("Área: %.3f Km²\n",area_km_quadrado2);
    printf("PIB: %.3f bilhões de reais\n",pib2);
    printf("Número de Pontos Turísticos: %i\n",numero_pontos_turisticos2);

    //Exibir densidade da população e pib per capita(nivel intermediario)
    printf("Densidade Populacional: %.2f\n",densidade_populacional2);
    printf("PIB per Capita: %.2f\n",pib_per_capita2);

    return 0;
}
