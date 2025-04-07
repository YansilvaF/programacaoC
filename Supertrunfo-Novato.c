#include <stdio.h>

int main() {
    char estado1[30], cidade1[30], codigo1[10],estado2[30], cidade2[30], codigo2[10];
    int populacao1, turismo1, populacao2, turismo2;
    float area1, PIB1, area2, PIB2;

    //escaneamento dos dados da 1° carta
    printf("Digite as informações da 1° carta sem espaço e acento.\n");

    printf("Digite o código da carta(Exemplo: A01)\n");
    scanf("%s", estado1);

    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade1);

    printf("Digite a população da cidade:\n");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade em km²:\n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade em bilhões:\n");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turísticos da cidade:\n");
    scanf("%d", &turismo1);

    //escaneamento dos dados da 2° carta
    printf("Digite as informações da 2° carta sem espaço e acento.\n");

    printf("Digite o código da carta(Exemplo: A01)\n");
    scanf("%s", estado2);

    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade2);

    printf("Digite a população da cidade:\n");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade em km²:\n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade em bilhões:\n");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos da cidade:\n");
    scanf("%d", &turismo2);

    printf("\n----- Dados da Cidade 1-----\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", PIB1);
    printf("Pontos turísticos: %d\n", turismo1);

    printf("\n----- Dados da Cidade 2-----\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", PIB2);
    printf("Pontos turísticos: %d\n", turismo2);

    return 0;
}

