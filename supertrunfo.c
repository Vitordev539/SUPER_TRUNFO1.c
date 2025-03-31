#include <stdio.h>

int main()
{
    // Declarando o tipo de variavéis da carta 1
    char carta1;
    char nome_estado[50];
    int populacao, codigo_carta, numero_pontos_turisticos;
    float area_km, pib;
    float densidade_populacional;
    float pib_per_capita;
    float super_poder;
    int resultado;

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

    densidade_populacional = (float)populacao / area_km;
    printf("A densidade populacional é : %.2f\n", densidade_populacional);

    pib_per_capita = (float)pib / populacao;
    printf("O pib per capita é : %.2f\n", pib_per_capita);

    super_poder = (populacao + area_km + pib + numero_pontos_turisticos + pib_per_capita), densidade_populacional = area_km / populacao;
    printf("O super poder da carta 1 é : %.2f\n", super_poder);

    char carta2;
    char nome_estado2[50];
    int populacao2, codigo_carta2, numero_pontos_turisticos2;
    float area_km2, pib2;
    float pib_per_capita2;
    float densidade_populacional2;
    float super_poder2;

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

    densidade_populacional2 = (float)populacao2 / area_km2;
    printf("A densidade populacional é : %.2f\n", densidade_populacional2);

    pib_per_capita2 = (float)pib2 / populacao2;
    printf("O pib per capita é : %.2f\n", pib_per_capita2);

    super_poder2 = (populacao2 + area_km2 + pib2 + numero_pontos_turisticos2 + pib_per_capita2), densidade_populacional2 = area_km2 / populacao2;
    printf("O super poder da carta 1 é : %.2f\n", super_poder2);

    // Exibindo em tela os dados solitados anteriormente da carta 1

    printf("A carta 1 tem as seguintes informações:\n");

    printf("Nome do estado: %s\nCódigo da carta: %d \n", nome_estado, codigo_carta);

    printf("População: %d\nNumero de pontos turístios: %d \n", populacao, numero_pontos_turisticos);

    printf("Área em km: %f\nPib: %f Bilhões de reais\n", area_km, pib);

    printf("densidade populacional: %.2f\npib per capita: %.2f reais\n", densidade_populacional, pib_per_capita);

    printf("SUper poder: %.2f\n", super_poder);

    // Exibindo em tela os dados solitados anteriormente da carta 2

    printf("A carta 2 tem as seguintes informações:\n");

    printf("Nome do estado: %s\nCódigo da carta: %d\n", nome_estado2, codigo_carta2);

    printf("População: %d\nNumero de pontos turístios: %d\n", populacao2, numero_pontos_turisticos2);

    printf("Área em km: %f Bilhões de reais\nPib: %f\n", area_km2, pib2);

    printf("densidade populacional: %.2f\npib per capita: %.2f reais\n", densidade_populacional2, pib_per_capita2);

    printf("Super poder: %.2f\n", super_poder2);

    // comparando as cartas

    printf("Comparando valores das cartas\n");

    if (populacao > populacao2)
    {
        printf("carta 1 venceu!\n");
        printf("População da carta 1: %d\n", &populacao);
    }
    else
    {
        printf("Carta 2 venceu!\n");
        printf("População da carta 2 : %d\n", &populacao2);
    }
    if (numero_pontos_turisticos > numero_pontos_turisticos2)
    {
        printf("Carta 1 venceu!\n");
        printf("Numero de pontos turisticos da carta 1 : %d\n", &numero_pontos_turisticos);
    }
    else
    {
        printf("Carta 2 venceu!\n");
        printf("Numero de pontos turisticos da carta 2 : %d\n", &numero_pontos_turisticos2);
    }
    if (area_km > area_km2)
    {
        printf("Carta 1 venceu!\n");
        printf("Area da carta 1 : %.2f\n", &area_km);
    }
    else
    {
        printf("Carta 2 venceu!\n");
        printf("Area da carta 2 : %.2f\n", &area_km);
    }
    if (pib > pib2)
    {
        printf("Carta 1 venceu!\n");
        printf("Pib da carta 1 : %.2f\n", &pib);
    }
    else
    {
        printf("Carta 2 venceu!\n");
        printf("Pib da carta 2 : %.2f\n", &pib);
    }
    if (pib_per_capita > pib_per_capita2)
    {
        printf("Carta 1 venceu!\n");
        printf("Pib per capita da carta 1 : %.2f\n", &pib_per_capita);
    }
    else
    {
        printf("Carta 2 venceu!\n");
        printf("Pib per capita da carta 2 : %.2f", &pib_per_capita2);
    }
    if (densidade_populacional < densidade_populacional2)
    {
        printf("Carta 1 venceu!\n");
        printf("Densidade carta 1 : %.2f\n", &densidade_populacional);
    }
    else
    {
        printf("Carta 2 venceu!\n");
        printf("Densidade carta 2 : %.2f\n", &densidade_populacional2);
    }
    if (super_poder > super_poder2)
    {
        printf("Carta 1 venceu!\n");
        printf("Super poder carta 1 : %.2f\n", &super_poder);
    }
    else
    {
        printf("Carta 2 venceu!\n");
        printf("Super poder carta 2 : %.2f\n", &super_poder2);
    }

    return 0;
}