#include <stdio.h>
#include <locale.h>


int main() {
    
    setlocale(LC_ALL, "Portuguese");

    unsigned long int populacao1, populacao2;
    int numeroDePontos1, numeroDePontos2; 
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

    float superPoder1 = (float)populacao1 + area1 + pib1 + (float)numeroDePontos1 + pibPcap1 + (1/densidade1); 
    float superPoder2 = (float)populacao2 + area2 + pib2 + (float)numeroDePontos2 + pibPcap2 + (1/densidade2); 

    
    printf("\n -- Comparando cartas -- \n");

    if(populacao1 > populacao2){

        printf("\nPopulacao: Carta 1 venceu (1)");
    }
     else {

        printf("\nPopulacao: Carta 2 venceu (0)");
    }

    if(area1 > area2){

        printf("\nArea: Carta 1 venceu (1)");
    }
     else {
        
        printf("\nArea: Carta 2 venceu (0)");
    }

    if(pib1 > pib2){

        printf("\nPIB: Carta 1 venceu (1)");
    }
     else {
        
        printf("\nPIB: Carta 2 venceu (0)");
    }

    if(numeroDePontos1 > numeroDePontos2){

        printf("\nNumero de pontos turisticos: Carta 1 venceu (1)");
    }
     else {
        
        printf("\nNumero de pontos turisticos: Carta 2 venceu (0)");
    }

    if(densidade1 < densidade2){

        printf("\nDensidade Populacional: Carta 1 venceu (1)");
    }
     else {
        
        printf("\nDensidade Populacional: Carta 2 venceu (0)");
    }

    if(pibPcap1 > pibPcap2){

        printf("\nPIB per Capita: Carta 1 venceu (1)");
    }
     else {
        
        printf("\nPIB per Capita: Carta 2 venceu (0)");
    }

    if(superPoder1 > superPoder2){

        printf("\nSuper poder: Carta 1 venceu (1)");
    }
     else {
        
        printf("\nSuper poder: Carta 2 venceu (0)");
    }


    return 0;
}
