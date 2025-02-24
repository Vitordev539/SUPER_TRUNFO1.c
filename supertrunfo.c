#include <stdio.h>

int main()
{
    //Declarando o tipo de variavéis
    char carta1 ;
    char nome_estado, codigo_carta [50];
    int populacao, numero_pontos_turisticos;
    float area_km, pib;

    char carta2 ;
    char nome_estado2, codigo_carta2 [50];
    int populacao2, numero_pontos_turisticos2;
    float area_km2, pib2;

    printf("Digite o nome do estado: \n ");
    scanf("%s", nome_estado);

    printf("Digite o codigo da carta: \n ");
    scanf("%s", codigo_carta);

    printf("Digite a população: \n");
    scanf("%d", &populacao);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numero_pontos_turisticos);

    printf("Digite a área em km : \n");
    scanf("%f", &area_km);

    printf("Digite o valor do pib: \n");
    scanf("%f", &pib);

    
}