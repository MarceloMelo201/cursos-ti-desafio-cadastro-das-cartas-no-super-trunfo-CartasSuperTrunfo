#include <stdio.h>


int main() {
     int populacao1, populacao2, numeroDePontos1, numeroDePontos2; 
    float area1, area2, pib1, pib2; 

    printf("\n -- Super trunfo --"); 
    printf("\n -- Cadastro da primeira carta -- \n");

    printf("\nPopulacao: ");
    scanf("%d", &populacao1);

    printf("Area: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &numeroDePontos1);

    printf("\n -- Cadastro da segunda carta -- \n");

    printf("\nPopulacao: ");
    scanf("%d", &populacao2);

    printf("Area: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &numeroDePontos2);

    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;
    float pibPcap1 = pib1 / populacao1;
    float pibPcap2 = pib2 / populacao2;
    
    printf("\n -- Exibindo cartas -- \n");

    printf("\n -- Carta 1 -- \n");

    printf("\nPopulacao: %d", populacao1);
    printf("\nArea: %.2f", area1);
    printf("\nPIB: %.2f", pib1);
    printf("\nNumero de pontos turisticos: %d\n", numeroDePontos1);
    printf("\nDensidade Populacional: %.2f\n", densidade1);
    printf("\nPIB per Capita: %.2f\n", pibPcap1);

    printf("\n -- Carta 2 --\n");

    printf("\nPopulacao: %d", populacao2);
    printf("\nArea: %.2f", area2);
    printf("\nPIB: %.2f", pib2);
    printf("\nNumero de pontos turisticos: %d\n", numeroDePontos2);
    printf("\nDensidade Populacional: %.2f\n", densidade2);
    printf("\nPIB per Capita: %.2f\n", pibPcap2);

    return 0;
}
