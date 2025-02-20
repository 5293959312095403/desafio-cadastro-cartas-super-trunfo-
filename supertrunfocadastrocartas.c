#include <stdio.h>
#include <string.h>

int main(){
    int populacao, pontosturisticos, populacao2, pontosturisticos2;
    char estado, estado2;
    char CodigoCarta[5], NomeCidade[45], CodigoCarta2[50], NomeCidade2[45];
    float AreakmQ, PIB, AreakmQ2, PIB2, DensidadePopulacional1, PIBPerCapita1, DensidadePopulacional2, PIBPerCapita2;

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

    printf("Digite os pontos turisticos: ");
    scanf(" %d", &pontosturisticos2);
 
    DensidadePopulacional2 = (float) populacao2 / AreakmQ2;
    PIBPerCapita2 = (float) PIB2 / populacao2;

    printf("Os valores da carta 2 foram registrados!\n\n");


    printf("-- EXIBINDO VALORES --\n\n");

    printf("-- CARTA 1 --\n");

    printf("Estado: %c\n", estado);
    printf("Codigo da Carta: %s\n", CodigoCarta);
    printf("Nome da Cidade: %s\n", NomeCidade);
    printf("Populacao: %d habitantes\n", populacao);
    printf("Area: %.2f km2\n", AreakmQ);
    printf("PIB: %.2f\n", PIB);
    printf("Pontos Turisticos: %d\n", pontosturisticos); 
    printf("Densidade Populacional: %.2f hab/km2\n", DensidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", PIBPerCapita1);
    printf("\n");
    printf("-- CARTA 2 --\n\n");

    printf("Estado: %c\n", estado2);
    printf("Codigo da Carta: %s\n", CodigoCarta2);
    printf("Nome da Cidade: %s\n", NomeCidade2);
    printf("Populacao: %d habitantes\n", populacao2);
    printf("Area: %.2f km2\n", AreakmQ2);
    printf("PIB: %.2f\n", PIB2);
    printf("Pontos Turisticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km2\n", DensidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", PIBPerCapita2);
    return 0;
}
