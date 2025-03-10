#include <stdio.h>
 
int main() {
//Programa em C que permita ao usuário inserir os dados de duas cartas do Super Trunfo.


// Declarações das variáveis
     char estado;
     char codigocarta [50];
     char nomecidade [50];
     int populacao;
     float area;
     float PIB;
     int pontosturisticos;


 // Entrada de dados da carta 1
     printf("Digite o estado: \n");
     scanf("%c", &estado);
     printf("Digite o código da carta: \n");
     scanf("%s", &codigocarta);
     printf("Digite o nome da cidade: \n");
     scanf("%s", &nomecidade);
     printf("Infome a população: \n");
     scanf("%d", &populacao);
     printf("Infome a área em km²: \n");
     scanf("%f", &area);
     printf("Infome o PIB: \n");
     scanf("%f", &PIB);
    printf("Informe a quantidade de pontos turísticos: \n");
    scanf("%d", &pontosturisticos);

// Saída de dados da carta 1

    printf("Carta 1: \n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigocarta);
    printf("Nome da Cidade: %s\n", nomecidade);
    printf("População: %d\n", populacao);
    printf("Área: %f km²\n", area);
    printf("PIB: %f\n", PIB);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos);


//Entrada de dados da carta 2

    printf("Próxima carta \n");
    printf("Digite o estado: \n");
    scanf("%c", &estado);
    printf("Digite o código da carta: \n");
    scanf("%s", &codigocarta);
    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomecidade);
    printf("Infome a população: \n");
    scanf("%d", &populacao);
    printf("Infome a área em km²: \n");
    scanf("%f", &area);
    printf("Infome o PIB: \n");
    scanf("%f", &PIB);
    printf("Informe a quantidade de pontos turísticos: \n");
    scanf("%d", &pontosturisticos);


//Entrada de dados da carta 2


    printf("Carta 2: \n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigocarta);
    printf("Nome da Cidade: %s\n", nomecidade);
    printf("População: %d\n", populacao);
    printf("Área: %f km²\n", area);
    printf("PIB: %f\n", PIB);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos);



    return 0;


}   