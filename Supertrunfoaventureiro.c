#include <stdio.h>

int main() {
    // Variáveis para os dados da cidade 1
    char estado1[3], codigo1[10], nome1[50];
    float populacao1, area1, pib1;
    int pontosturisticos1;
    float densidadepopulacional1, pibpercapita1;
    
    // Variáveis para os dados da cidade 2
    char estado2[3], codigo2[10], nome2[50];
    float populacao2, area2, pib2;
    int pontosturisticos2;
    float densidadepopulacional2, pibpercapita2;

    // Entrada de dados para a cidade 1
    printf("*** Carta 1 ***\n");
    printf("Digite o estado da cidade: ");
    scanf("%s", estado1);
    
    printf("Digite o código da carta: ");
    scanf("%s", codigo1);
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome1); 
    
    printf("Digite a população: ");
    scanf("%f", &populacao1);
    
    printf("Digite a área (em km²): ");
    scanf("%f", &area1);
    
    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos1);

    // Entrada de dados para a cidade 2
    printf("\n*** Carta 2 ***\n");
    printf("Digite o estado da cidade: ");
    scanf("%s", estado2);
    
    printf("Digite o código da carta: ");
    scanf("%s", codigo2);
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome2);  
    
    printf("Digite a população: ");
    scanf("%f", &populacao2);
    
    printf("Digite a área (em km²): ");
    scanf("%f", &area2);
    
    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos2);

    // Cálculos para a cidade 1
    densidadepopulacional1 = populacao1 / area1;
    pibpercapita1 = (pib1 * 1000000000) / populacao1;  // Convertendo de bilhões para reais

    // Cálculos para a cidade 2
    densidadepopulacional2 = populacao2 / area2;
    pibpercapita2 = (pib2 * 1000000000) / populacao2;  // Convertendo de bilhões para reais

    // Exibição dos dados da cidade 1
    printf("\n*** Carta 1 ***\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %.0f\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibpercapita1);

    // Exibição dos dados da cidade 2
    printf("\n*** Carta 2 ***\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %.0f\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibpercapita2);

    return 0;
}