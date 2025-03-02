#include <stdio.h>


//VÁRIAVEIS PARA UTILIZADAS PARA CADASTRO DOS PAÍSES A SEREM COMPARADOS
int main(){
    char nomepais[50];
    int populacao, turisticos;
    float area, pib, densidade;

    char nomepais1[50];
    int populacao1, turisticos1;
    float area1, pib1, densidade1;

    // PRIMEIRO PAÍS A SER CADASTRADO
    printf("Digite o nome do país.\n");
    scanf(" %[^\n]", nomepais);

    printf("Qual é a populção que esse país possui?\n");
    scanf("%d", &populacao);

    printf("Qual a área do país em km²?\n");
    scanf("%f", &area);

    printf("Qual o PIB do país (em bilhões)?\n");
    scanf("%f", &pib);

    printf("Quantos pontos turísticos tem nesse país?\n");
    scanf("%d", &turisticos);

    densidade = populacao / area;

    //SEGUNDO PAÍS A SER CADASTRADO
    printf("\nDigite o nome do país.\n");
    scanf(" %[^\n]", nomepais1);

    printf("Qual é a populção que esse país possui?\n");
    scanf("%d", &populacao1);

    printf("Qual a área do país em km²?\n");
    scanf("%f", &area1);

    printf("Qual o PIB do país (em bilhões)?\n");
    scanf("%f", &pib1);

    printf("Quantos pontos turísticos tem nesse país?\n");
    scanf("%d", &turisticos1);

    densidade1 = populacao1 / area1;


    //DADOS DO PRIMEIRO PAÍS CADASTRADO
    printf("\n-> DADOS DO PRIMEIRO PAÍS CADASTRADO <-\n");
    printf("Nome do país: %s.\n", nomepais);
    printf("População do país: %d habitantes.\n", populacao);
    printf("Área do país: %.2f km².\n", area);
    printf("PIB: %.2f bilhões de reais.\n", pib);
    printf("Número de pontos turísticos: %d.\n", turisticos);
    printf("Densidade demográfica: %.2f hab/km².\n", densidade);

    //DADOS DO SEGUNDO PAÍS CADASTRADO
    printf("\n-> DADOS DO SEGUNDO PAÍS CADASTRADO <-\n");
    printf("Nome do país: %s.\n", nomepais1);
    printf("População do país: %d habitantes.\n", populacao1);
    printf("Área do país: %.2f km².\n", area1);
    printf("PIB: %.2f bilhões de reais.\n", pib1);
    printf("Número de pontos turísticos: %d.\n", turisticos1);
    printf("Densidade demográfica: %.2f hab/km².\n", densidade1);

    
return 0;
}