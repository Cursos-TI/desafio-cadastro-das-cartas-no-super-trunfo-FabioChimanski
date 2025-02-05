#include <stdio.h>

int main()
{
    //Variaveis
    //var primeira carta
    char cod_cidade1[4];
    int pop1, num_turisticos1 = 0;
    float area1, pib1, denc_pop1, pip_per1 = 0;

    //var segunda carta
    char cod_cidade2[4];
    int pop2, num_turisticos2 = 0;
    float area2, pib2, denc_pop2, pip_per2 = 0;


    //cadastro das cartas

    //Primeira carta
    printf("--JOGO SUPER TRUNFO--\n");
    printf("---------------------\n");
    printf("Primeira carta\n");
    printf("Informe o codigo da carta: ");
    scanf("%3s", cod_cidade1);
    printf("Informe a populacao da cidade: ");
    scanf("%d", &pop1);
    printf("Informe a area da cidade: ");
    scanf("%f", &area1);
    printf("Informe o PIB: ");
    scanf("%f", &pib1);
    printf("Informe o numero de pontos turiscos: ");
    scanf("%d", &num_turisticos1);

    //segunda carta
    printf("---------------------\n");
    printf("Segunda carta\n");
    printf("Informe o codigo da carta: ");
    scanf("%3s", cod_cidade2);
    printf("Informe a populacao da cidade: ");
    scanf("%d", &pop2);
    printf("Informe a area da cidade: ");
    scanf("%f", &area2);
    printf("Informe o PIB: ");
    scanf("%f", &pib2);
    printf("Informe o numero de pontos turiscos: ");
    scanf("%d", &num_turisticos2);

    //Calculo 
    //primera carta
    denc_pop1 = pop1 / area1;
    pip_per1 = pib1 / pop1;
    //segunda carta
    //Calculo primera carta
    denc_pop2 = pop2 / area2;
    pip_per2 = pib2 / pop2;

    //exibindo dados cartas 1
    printf("---------------------\n");
    printf("--DADOS DA CARTA 1--\n");
    printf("Codigo carta: %s\n", cod_cidade1);
    printf("Populacao: %d\n", pop1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Numero de pontos turisticos: %d\n", num_turisticos1);
    printf("Densidade populacional: %.2f\n", denc_pop1);
    printf("PIB per capita: %.2f\n", pip_per1);

    //exibindo dados cartas 2
    printf("---------------------\n");
    printf("--DADOS DA CARTA 2--\n");
    printf("Codigo carta: %s\n", cod_cidade2);
    printf("Populacao: %d\n", pop2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Numero de pontos turisticos: %d\n", num_turisticos2);
    printf("Densidade populacional: %.2f\n", denc_pop2);
    printf("PIB per capita: %.2f\n", pip_per2);

    //Comparando as cartas
    printf("---------------------\n");
    printf("Exibindo resultados (1 representa q primerara carta venceu, 0 representa q segunda carta venceu\n");
    printf("dencidade populacional: %d\n",denc_pop1 < denc_pop2);
    printf("area: %d\n", area1 > area2);
    printf("Pontos turisticos: %d\n", num_turisticos1 > num_turisticos2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("PIB per capita: %d\n", pip_per1 > pip_per2);
    printf("Populacao: %d", pop1 > pop2);
    return 0;
}
