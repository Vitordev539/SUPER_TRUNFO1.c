#include <stdio.h>

int main()
{
    // Declarando o tipo de variavéis da carta 1
    char carta1;
    char nome_estado[50];
    int populacao, codigo_carta, numero_pontos_turisticos;
    float area_km, pib;
    float densidade_populacional = (float)populacao / area_km;
    float pib_per_capita = pib / populacao, resultado;
    
    // Solicitando ao usuário os dados da carta 1
    printf("Digite o nome do estado: \n");
    scanf("%s", nome_estado);

    printf("Digite o codigo da carta: \n");
    scanf("%d", &codigo_carta);

    printf("Digite a população: \n");
    scanf("%d", &populacao);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numero_pontos_turisticos);

    printf("Digite a área em km : \n");
    scanf("%f", &area_km);

    printf("Digite o valor do pib: \n");
    scanf("%f", &pib);

    printf("A densidade populacional é : %.2f/n", densidade_populacional);
    
    printf("O pib per capita é : %.2f/n", pib_per_capita);

    char carta2;
    char nome_estado2[50];
    int populacao2, codigo_carta2, numero_pontos_turisticos2;
    float area_km2, pib2;
    // Solicitando ao usuário os dados da carta 2
    printf("Digite o nome do estado: \n");
    scanf("%s", nome_estado2);

    printf("Digite o codigo da carta: \n");
    scanf("%d", &codigo_carta2);

    printf("Digite a população: \n");
    scanf("%d", &populacao2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numero_pontos_turisticos2);

    printf("Digite a área em km : \n");
    scanf("%f", &area_km2);

    printf("Digite o valor do pib: \n");
    scanf("%f", &pib2);
    // Exibindo em tela os dados solitados anteriormente da carta 1
    printf("A carta 1 tem as seguintes informações:\n");
    printf("Nome do estado: %s\nCódigo da carta: %d \n", nome_estado, codigo_carta);

    printf("População: %d\nNumero de pontos turístios: %d \n", populacao, numero_pontos_turisticos);
    printf("Área em km: %f\nPib: %f \n", area_km, pib);
    // Exibindo em tela os dados solitados anteriormente da carta 2
    printf("A carta 2 tem as seguintes informações:\n");
    printf("Nome do estado: %s\nCódigo da carta: %d \n", nome_estado2, codigo_carta2);

    printf("População: %d\nNumero de pontos turístios: %d \n", populacao2, numero_pontos_turisticos2);
    printf("Área em km: %f\nPib: %f \n", area_km2, pib2);

    return 0;
}