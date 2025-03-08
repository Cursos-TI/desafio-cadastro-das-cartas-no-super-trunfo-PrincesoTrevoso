#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

#include <stdio.h>

int main (){

    // Declarando a Primeira Carta
    char estado1;
    char codigocarta1[5];
    char nomecidade1[20];
    int populacao1;
    int pontosturisticos1;
    float pib1;
    float area1;

    // Declarando a Segunda Carta
    char estado2;
    char codigocarta2[5];
    char nomecidade2[20];
    int populacao2;
    int pontosturisticos2;
    float pib2;
    float area2;
    
    // Entrada de dados da Primeira Carta
    printf("Cadastre a primeira carta: \n");
    printf("Estado(A-H): ");
    scanf(" %c", &estado1);

    printf("Código da carta: ");
    scanf(" %s", &codigocarta1);

    printf("Nome da cidade: ");
    scanf(" %s", &nomecidade1);

    printf("População: ");
    scanf(" %d", &populacao1);

    printf("Área(km2): ");
    scanf(" %f", &area1);

    printf("Pontos Turísticos: ");
    scanf(" %d", &pontosturisticos1);

    printf("PIB(Bilhões de reais): ");
    scanf(" %f", &pib1);

    //Entrada de dados da Segunda Carta
    printf("\n Cadastre a segunda carta: \n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Código da carta: ");
    scanf(" %s", &codigocarta2);

    printf("Nome da cidade: ");
    scanf(" %s", &nomecidade2);

    printf("População: ");
    scanf(" %d", &populacao2);

    printf("Área(km2): ");
    scanf(" %f", &area2);

    printf("Pontos Turísticos: ");
    scanf(" %d", &pontosturisticos2);

    printf("PIB(Bilhões de reais): ");
    scanf(" %f", &pib2);

    //Saída de dados da Primeira Carta
    printf("\nCarta 1: \n");
    printf("Estado: %c\n", estado1); 
    printf("Código: %s\n", codigocarta1); 
    printf("Nome da Cidade: %s\n", nomecidade1);
    printf("População (Milhões): %d\n", populacao1); 
    printf("Pontos turísticos: %d\n", pontosturisticos1);
    printf("PIB: %.2f bilhões de reais\n", pib1); 
    printf("Área: %.2f km\n", area1);

    // Saída de dados da Segunda Carta
    printf("\nCarta 2: \n");
    printf("Estado: %c\n", estado2); 
    printf("Código: %s\n", codigocarta2); 
    printf("Nome da Cidade: %s\n", nomecidade2);
    printf("População (Milhões): %d\n", populacao2); 
    printf("Pontos turísticos: %d\n", pontosturisticos2);
    printf("PIB: %.2f bilhões de reais\n", pib2); 
    printf("Área: %.2f km\n", area2);

    
 /*
    printf ("%formato1 %formato2 %formato3", variavel1, variavel2, varialvel3)
    %d: Imprime um inteiro no decimal. 
    %i: Equivale a %d. 
    %f: Imprime um numero de ponto flutuante no formato padrão. 
    %.2f: Imprime um numero de ponto flutuante com limite de duas casas decimais.
    %e: Imprime um numero de ponto flutuante na notação científica.
    %c: Imprime um único caractere. 
    %s: Imprime uma cadeia (string) de caracteres.
    */


return 0; 

}