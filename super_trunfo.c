#include <stdio.h>

int main() {
    char estado1,estado2;
    char cidade1[20],cidade2[20],codigo1[5],codigo2[5];
    int populacao1,populacao2,ponto_turisticos1,ponto_turisticos2;
    float area1,area2,pib1,pib2;
    
    // Carta 1
    printf("Digite uma letra de A a H: ");
    scanf(" %c", &estado1);
    
    printf("Digite o Codigo da Carta (01 a 04, use o zero): ");
    scanf("%s", &codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade1);

    printf("Digite a quantidade de populacao: ");
    scanf("%d", &populacao1);

    printf("Digite a area da cidada em quilometros quadrados (somento numeros e pontos) ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade (Produto Interno Bruto): ");
    scanf("%f", &pib1);

    printf("Digite quantos pontos turisticos tem a cidade: \n");
    scanf("%d",&ponto_turisticos1);

    // Segunda carta

    printf("Digite uma letra de A a H: ");
    scanf(" %c", &estado2);
    
    printf("Digite o Codigo da Carta (01 a 04, use o zero): ");
    scanf("%s", &codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade2);

    printf("Digite a quantidade de populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a area da cidade em quilometros quadrados (somento numeros e pontos) ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade (Produto Interno Bruto): ");
    scanf("%f", &pib2);

    printf("Digite quantos pontos turisticos tem a cidade: ");
    scanf("%d",&ponto_turisticos2);

    printf("\nCarta 1\n");
    printf("Estado: %c\n",estado1);
    printf("Código: %c%s\n",estado1 ,codigo1);
    printf("Nome da Cidade: %s\n",cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", ponto_turisticos1);

    printf("\nCarta 2\n");
    printf("Estado: %c\n",estado2);
    printf("Código: %c%s\n",estado2 ,codigo2);
    printf("Nome da Cidade: %s\n",cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", ponto_turisticos2);


    return 0;
}