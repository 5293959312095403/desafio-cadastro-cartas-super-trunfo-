#include <stdio.h>
#include <string.h>



int main(){
    int populacao, pontosturisticos, populacao2, pontosturisticos2;
    char estado, estado2;
    char CodigoCarta[5], NomeCidade[45], CodigoCarta2[50], NomeCidade2[45];
    float AreakmQ, PIB, AreakmQ2, PIB2, DensidadePopulacional1, PIBPerCapita1, DensidadePopulacional2, PIBPerCapita2, SuperPoder, SuperPoder2, densidadeinversa, densidadeinversa2;


    printf("-- CARTA 1 --\n");
    printf("Digite a letra do Estado: ");
    scanf(" %c", &estado);
    printf("Digite o codigo da carta: ");
    scanf(" %49s", CodigoCarta);
    getchar();

    printf("Digite o nome da cidade: ");
    fgets(NomeCidade, 45, stdin);       
    NomeCidade[strcspn(NomeCidade, "\n")] = '\0'; 

    printf("Digite a Populacao: ");
    scanf(" %d", &populacao);

    printf("Digite a area: ");
    scanf(" %f", &AreakmQ);

    printf("Digite o PIB: ");
    scanf(" %f", &PIB);

    printf("Digite os pontos turisticos: ");
    scanf(" %d", &pontosturisticos);

    DensidadePopulacional1 = (float) populacao / AreakmQ;
    PIBPerCapita1 = (float) PIB / populacao;

    densidadeinversa = 1.0 / DensidadePopulacional1;

    SuperPoder = (float)populacao + AreakmQ + PIB + (float)pontosturisticos + PIBPerCapita1 + densidadeinversa; 

    printf("Os valores da carta 1 foram registrados!\n");

    printf("-- CARTA 2 --\n");
    printf("Digite a letra do Estado: ");
    scanf(" %c", &estado2);
    getchar();

    printf("Digite o codigo da carta: ");
    scanf(" %49s", CodigoCarta2);

    getchar();
    printf("Digite o nome da cidade: ");
    fgets(NomeCidade2, sizeof(NomeCidade2), stdin);
    NomeCidade2[strcspn(NomeCidade2, "\n")] = '\0';

    printf("Digite a Populacao: ");
    scanf(" %d", &populacao2);

    printf("Digite a area: ");
    scanf(" %f", &AreakmQ2);

    printf("Digite o PIB: ");
    scanf(" %f", &PIB2);

    printf("Digite os pontos turisticos: \n");
    scanf(" %d", &pontosturisticos2);
 
    DensidadePopulacional2 = (float) populacao2 / AreakmQ2;
    PIBPerCapita2 = (float) PIB2 / populacao2;
    densidadeinversa2 = 1.0 / DensidadePopulacional2;

    SuperPoder2 = (float)populacao2 + AreakmQ2 + PIB2 + (float)pontosturisticos2 + PIBPerCapita2 + densidadeinversa2;

    printf("Os valores da carta 2 foram registrados!\n\n");


    printf("-- Exibindo a comparação das cartas --\n\n");

    printf("População: Carta 1 venceu (%d)\n", populacao > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", AreakmQ > AreakmQ2);
    printf("PIB: Carta 1 venceu (%d)\n", PIB > PIB2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosturisticos > pontosturisticos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", DensidadePopulacional1 > DensidadePopulacional2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", PIBPerCapita1 > PIBPerCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", SuperPoder > SuperPoder2);

    // while (1);  Usei esse while para conseguir abrir o código em forma de executável no terminal do windows, 
    //estava achando muito chato ter que ler tudo no pequeno terminal do VS Code.

    return 0;
}
