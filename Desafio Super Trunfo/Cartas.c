#include <stdio.h>
 
int main() {
//Programa em C que permita ao usuário inserir os dados de duas cartas do Super Trunfo.


// Declarações das variáveis
     char estado1 [20], estado2 [20];
     char codigo1 [20], codigo2 [20];
     char cidade1 [20], cidade2 [20];
     float populacao1, populacao2;
     float area1, area2;
     float PIB1, PIB2;
     int pontosturisticos1 ,pontosturisticos2;


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


// Saída de dados carta 01

    printf("** Carta 1 ** \n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %f\n", populacao1);
    printf("Área: %f km²\n", area1);
    printf("PIB: %f\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);

// Saída de dados carta 02

    printf("** Carta 2 ** \n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %f\n", populacao2);
    printf("Área: %f km²\n", area2);
    printf("PIB: %f\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);


    return 0;


} 