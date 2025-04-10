#include <stdio.h>

struct Card
{
    char state;
    char cardCode[3];
    char cityName[16];
    int population;
    int numberOfTouristAttractions;
    float area;
    float GDP;
};

int main()
{
    struct Card cardOne;
    struct Card cardTwo;

    // Primeira carta
    printf("Digite o estado da primeira carta: \n");
    scanf("%c", &cardOne.state);

    printf("Digite o código da primeira carta: \n");
    scanf("%2s", cardOne.cardCode);

    printf("Digite o nome da cidade da primeira carta: \n");
    scanf(" %15s", cardOne.cityName);

    printf("Digite a população da primeira carta: \n");
    scanf("%d", &cardOne.population);

    printf("Digite a área da cidade da primeira carta(KM): \n");
    scanf("%f", &cardOne.area);

    printf("Digite o PIB da cidade da primeira carta: \n");
    scanf("%f", &cardOne.GDP);

    printf("Digite o número de pontos turísticos da cidade da primeira carta: \n");
    scanf("%d", &cardOne.numberOfTouristAttractions);

    // Segunda carta
    printf("Digite o estado da segunda carta: \n");
    scanf(" %c", &cardTwo.state);

    printf("Digite o código da segunda carta: \n");
    scanf("%2s", cardTwo.cardCode);

    printf("Digite o nome da cidade da segunda carta: \n");
    scanf("%15s", cardTwo.cityName);

    printf("Digite a população da segunda carta: \n");
    scanf("%d", &cardTwo.population);

    printf("Digite a área da cidade da segunda carta(KM): \n");
    scanf("%f", &cardTwo.area);

    printf("Digite o PIB da cidade da segunda carta: \n");
    scanf("%f", &cardTwo.GDP);

    printf("Digite o número de pontos turísticos da cidade da segunda carta: \n");
    scanf("%d", &cardTwo.numberOfTouristAttractions);

    // Resultados: Primeira carta
    printf("Carta 1: \n");
    printf("Estado: %c\n", cardOne.state);
    printf("Código: %c%s\n", cardOne.state, cardOne.cardCode);
    printf("Nome da cidade: %s\n", cardOne.cityName);
    printf("População: %d\n", cardOne.population);
    printf("Área: %fkm²\n", cardOne.area);
    printf("PIB: %f bilhões de reais\n", cardOne.GDP);
    printf("Número de pontos turísticos: %d\n", cardOne.numberOfTouristAttractions);

    printf("\n");
    printf("<--------------------------------------->");
    printf("\n");

    // Resultados: Segunda carta
    printf("Carta 2: \n");
    printf("Estado: %c\n", cardTwo.state);
    printf("Código: %c%s\n", cardTwo.state, cardTwo.cardCode);
    printf("Nome da cidade: %s\n", cardTwo.cityName);
    printf("População: %d\n", cardTwo.population);
    printf("Área: %fkm²\n", cardTwo.area);
    printf("PIB: %f bilhões de reais\n", cardTwo.GDP);
    printf("Número de pontos turísticos: %d\n", cardTwo.numberOfTouristAttractions);

    return 0;
}
