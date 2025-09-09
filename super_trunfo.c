#include <stdio.h>

int main() {
    char estado1,estado2;
    char cidade1[20],cidade2[20],codigo1[5],codigo2[5];
    int populacao1,populacao2,ponto_turisticos1,ponto_turisticos2;
    float area1,area2,pib1,pib2;
    
    printf("Digite uma letra de A a H: ");
    scanf("%c", &estado1);
    
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

    printf("Digite quantos pontos turisticos tem a cidade: ");
    scanf("%d",&ponto_turisticos1);
    
    return 0;
}