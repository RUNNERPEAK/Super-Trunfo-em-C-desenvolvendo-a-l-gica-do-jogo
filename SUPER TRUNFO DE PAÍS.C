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

    int opcao;
    do{
        printf("\nESCOLHA AQUILO QUE DESEJA COMPARAR\n");
        printf("1. Comparar a população entre as cartas.\n");
        printf("2. Comparar a área das cartas.\n");
        printf("3. Comparar o PIB das cartas.\n");
        printf("4. Comparar a quantia de pontos turísticos das cartas.\n");
        printf("5. Comparar a densidade demográfica das cartas.\n\n");
        printf("Escolha uma opção: ");
        printf("0. Sair do menu.");
        scanf("%d", &opcao);

        switch (opcao){
            case 1:
            if (populacao > populacao1){
            printf("%s é mais populoso com %d habitantes, enquanto %s possui %d habitantes.\n", nomepais, populacao, nomepais1, populacao1);
            printf("A carta 1 (%s) ganhou!\n", nomepais);
        }else if (populacao < populacao1){
            printf("%s é mais populoso com %d habitantes, enquanto %s possui %d habitantes.\n", nomepais1, populacao1, nomepais, populacao);
            printf("A carta 2 (%s) ganhou!\n", nomepais1);
        }else {
            printf("Ambas cartas possuem a mesma população, empate!\n");
        }
        break;

        case 2:
        if(area > area1){
            printf("%s possui uma área de %.2f km², enquanto %s possui apenas %.2f km².\n", nomepais, area, nomepais1, area1);
            printf("A carta 1 (%s) ganhou!\n", nomepais);  
        }else if (area < area1){
            printf("%s possui uma área de %.2f km², enquanto %s possui apenas %.2f km².\n", nomepais1, area1, nomepais, area);
            printf("A carta 2 (%s) ganhou!\n", nomepais1);
        }else {
            printf("Ambas cartas possuem a mesma área, empate!\n");
        }
        break;

        case 3:
        if(pib > pib1){
            printf("%s possui um PIB de %.2f bilhões de reais, enquanto %s possui %.2f bilhões.\n", nomepais, pib, nomepais1, pib1);
            printf("A carta 1 (%s) ganhou!\n", nomepais);
        }else if (pib < pib1){
            printf("%s possui um PIB de %.2f bilhões de reais, enquanto %s possui %.2f bilhões.\n", nomepais1, pib1, nomepais, pib);
            printf("A carta 2 (%s) ganhou!\n", nomepais1);
        }else {
            printf("Ambas cartas possuem um PIB igual, empate!\n");
        }
        break;

        case 4:
        if (turisticos > turisticos1){
            printf("%s possui %d pontos turísticos, enquanto %s possui apenas %d.\n", nomepais, turisticos, nomepais1, turisticos1);
            printf("A carta 1 (%s) ganhou!\n", nomepais);
        }else if (turisticos < turisticos1){
            printf("%s possui %d pontos turísticos, enquanto %s possui apenas %d.\n", nomepais1, turisticos1, nomepais, turisticos);
            printf("A carta 2 (%s) ganhou!\n", nomepais1);
        }else {
            printf("Ambas cartas possuem o mesmo número de pontos turísticos, empate!\n");
        }
        break;

        case 5:
        if (densidade < densidade1){
            printf("%s possui %.2f hab/km², enquanto %s possui %.2f hab/km².\n", nomepais, densidade, nomepais1, densidade1);
            printf("A carta 1 (%s) ganhou!\n", nomepais);
        }else if (densidade > densidade1){
            printf("%s possui %.2f hab/km², enquanto %s possui %.2f hab/km².\n", nomepais1, densidade1, nomepais, densidade);
            printf("A carta 2 (%s) ganhou!\n", nomepais1);
        }else {
            printf("Ambas possuem uma densidade demográfica igual, empate!\n");
        }
        break;

        case 0:
        printf("Saindo do menu interativo...");
        break;

        default :
        printf("Opção inválida, tente uma das opções disponíveis");
        break;
        
       } 
    }while (opcao != 0);

return 0;
}