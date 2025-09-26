#include <stdio.h>

int main() {
    char estado1,estado2;
    char cidade1[20],cidade2[20],codigo1[5],codigo2[5];
    int ponto_turisticos1,ponto_turisticos2,num;
    long int populacao1,populacao2;
    float area1,area2,pib1,pib2,densidade1,densidade2,pib_capita1,pib_capita2;
    
   
    //Coleta dos dados da primeira carta
    printf("Digite uma letra de A a H: ");
    scanf(" %c", &estado1);
    
    printf("Digite o Codigo da Carta (01 a 04, use o zero): ");
    scanf("%s", &codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade1);

    printf("Digite a quantidade de populacao: ");
    scanf("%ld", &populacao1);

    printf("Digite a area da cidada em quilometros quadrados (somento numeros e pontos) ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade (Produto Interno Bruto): ");
    scanf("%f", &pib1);

    printf("Digite quantos pontos turisticos tem a cidade: \n");
    scanf("%d",&ponto_turisticos1);

    

   //Coleta dos dados da segunda carta

    printf("Digite uma letra de A a H: ");
    scanf(" %c", &estado2);
    
    printf("Digite o Codigo da Carta (01 a 04, use o zero): ");
    scanf("%s", &codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade2);

    printf("Digite a quantidade de populacao: ");
    scanf("%ld", &populacao2);

    printf("Digite a area da cidade em quilometros quadrados (somento numeros e pontos) ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade (Produto Interno Bruto): ");
    scanf("%f", &pib2);

    printf("Digite quantos pontos turisticos tem a cidade: \n");
    scanf("%d",&ponto_turisticos2);


    //Calculo da densidade 

    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    //Calculo de PIB per capita

    pib_capita1 = pib1/populacao1;
    pib_capita2 = pib2/populacao2;

    //Calculo do super poder 

    float superpoder1 = populacao1 + area1 + pib1 + ponto_turisticos1 + pib_capita1 + densidade1;
    float superpoder2 = populacao2 + area2 + pib2 + ponto_turisticos2 + pib_capita2 + densidade2;


    //Comparações das cartas

    int c1 = populacao1 > populacao2;
    int c2 = area1 > area2;
    int c3 = pib1 > pib2;
    int c4 = ponto_turisticos1 > ponto_turisticos2;
    int c5 = densidade1 < densidade2;
    int c6 = pib_capita1 > pib_capita2;
    int c7 = superpoder1 > superpoder2;

    //saida de dados da carta 1

    printf("\nCarta 1\n");
    printf("Estado: %c\n",estado1);
    printf("Código: %c%s\n",estado1 ,codigo1);
    printf("Nome da Cidade: %s\n",cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %f km²\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", ponto_turisticos1);
    printf("Densidade Populacional: %f\n", densidade1);
    printf("PIB per Capita: %f\n", pib_capita1);
    
    
    // Saida de dados da carte 2

    printf("\nCarta 2\n");
    printf("Estado: %c\n",estado2);
    printf("Código: %c%s\n",estado2 ,codigo2);
    printf("Nome da Cidade: %s\n",cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", ponto_turisticos2);
    printf("Densidade Populacional: %f\n", densidade2);
    printf("PIB per Capita: %f\n", pib_capita2);

    // MENU DE SELEÃO PARA O SWITCH CASE
    printf("Agora escolha um atributo para fazer a comparação\n");
    printf("1.População\n");
    printf("2.Área\n");
    printf("3.PIB\n");
    printf("4.Pontos turisticos\n");
    printf("5.Densidade populacional\n");
    printf("Escolha aqui: \n");
    scanf("%d", &num);

    // switch referente a escolha a cima 

    switch (num){

        //Caso seja população escolhida
        case 1:
            printf("%s || %s\n", cidade1,cidade2);
            printf("Atributo:População\n");
            printf("Valor da primeira carta %d, Valor da segunda carta %d\n", populacao1,populacao2);
            if (populacao1 > populacao2){
                printf("A carta vencedora foi a primeira carta:%d",populacao1);
            }
            else if (ponto_turisticos2 > populacao1){
                printf("A carta vencedora foi a segunda carta:%d",populacao2);
            }
            else{
                printf("Empate");
            }
            break;

        //Caso seja area escolhida
        case 2:
            printf("%s || %s\n", cidade1,cidade2);
            printf("Atributo:Área\n");
            printf("Valor da primeira carta %d, Valor da segunda carta %d\n", area1,area2);
            if (area1 > area2){
                printf("A carta vencedora foi a primeira carta:%d",area1);
            }
            else if (area2 > area1){
                printf("A carta vencedora foi a segunda carta:%d",area2);
            }
            else{
                printf("Empate");
            }
            break;

        //Caso seja PIB escolhida
        case 3: 
            printf("%s || %s\n", cidade1,cidade2);
            printf("Atributo:PIB\n");
            printf("Valor da primeira carta %d, Valor da segunda carta %d\n", pib1,pib2);
            if (pib1 > pib2){
                printf("A carta vencedora foi a primeira carta:%d",pib1);
            }
            else if (pib2 > pib1){
                printf("A carta vencedora foi a segunda carta:%d",pib2);
            }
            else{
                printf("Empate");
            }
            break;

        //Caso seja Ponto turisticos
        case 4: 
            printf("%s || %s\n", cidade1,cidade2);
            printf("Atributo:PIB\n");
            printf("Valor da primeira carta %d, Valor da segunda carta %d\n", ponto_turisticos1,ponto_turisticos2);
            if (ponto_turisticos1 > ponto_turisticos2){
                printf("A carta vencedora foi a primeira carta:%d",ponto_turisticos1);
            }
            else if (ponto_turisticos2 > ponto_turisticos1){
                printf("A carta vencedora foi a segunda carta:%d",ponto_turisticos2);
            }
            else{
                printf("Empate");
            }
            break;
        
    }

    return 0;
}