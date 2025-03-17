#include <stdio.h>
 
int main() {
//Programa em C que calca o pib percapita e a densidade populacional entre duas cartar do SuperTrunfo.


// Declarações das variáveis
     char estado1 [20], estado2 [20];
     char codigo1 [20], codigo2 [20];
     char cidade1 [20], cidade2 [20];
     float populacao1, populacao2;
     float area1, area2;
     float PIB1, PIB2;
     int pontosturisticos1, pontosturisticos2;
     float densidadepopulacional1, densidadepopulacional2;
     float PIBpercapita1, PIBpercapita2;


 // Entrada de dados da carta 1
     printf ("** Cadastro carta 01 **\n");

     printf("Digite o estado:\n");
     scanf("%s", &estado1);

     printf("Digite o código da carta:\n");
     scanf("%s", &codigo1);

     printf("Digite o nome da cidade:\n");
     scanf("%s", &cidade1);

     printf("Infome a população:\n");
     scanf("%f", &populacao1);

     printf("Infome a área em km²:\n");
     scanf("%f", &area1);

     printf("Infome o PIB:\n");
     scanf("%f", &PIB1);

    printf("Informe a quantidade de pontos turísticos:\n");
    scanf("%d", &pontosturisticos1);

// Entrada de dados da carta 2
    printf ("** Cadastro carta 02 ** \n");
     
    printf("Digite o estado:\n");
    scanf("%s", &estado2);

    printf("Digite o código da carta:\n");
    scanf("%s", &codigo2);

    printf("Digite o nome da cidade:\n");
    scanf("%s", &cidade2);

    printf("Infome a população:\n");
    scanf("%f", &populacao2);

    printf("Infome a área em km²:\n");
    scanf("%f", &area2);

    printf("Infome o PIB:\n");
    scanf("%f", &PIB2);

   printf("Informe a quantidade de pontos turísticos:\n");
   scanf("%d", &pontosturisticos2);

// Calculo da densidade populacional cartas 1 e 2

    densidadepopulacional1 = (float) (populacao1 / area1);

    densidadepopulacional2 = (float) (populacao2 / area2);

// Calculo do PIB per capita cartas 1 e 2

    PIBpercapita1 = (float) (PIB1 / populacao1);

    PIBpercapita2 = (float) (PIB2 / populacao2);


// Saída de dados carta 01

    printf("** Carta 1 ** \n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %.6f\n", populacao1);
    printf("Área: %.6f km²\n", area1);
    printf("PIB: %.6f\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);
    printf("A Densidade populacional é: %.6f\n", densidadepopulacional1);
    printf("O PIB per capita é: %.6f\n", PIBpercapita1);

// Saída de dados carta 02

    printf("** Carta 2 ** \n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %.6f\n", populacao2);
    printf("Área: %.6f km²\n", area2);
    printf("PIB: %.6f\n", PIB2);
    printf("Número de Pontos Turísticos: %.d\n", pontosturisticos2);
    printf("A Densidade populacional é: %.6f\n", densidadepopulacional2);
    printf("O PIB per capita é: %.6f\n", PIBpercapita2);


    return 0;


} 