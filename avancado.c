#include <stdio.h>
#include <string.h>

struct Card
{
    char state;
    char cardCode[3];
    char cityName[16];
    int population;
    int numberOfTouristAttractions;
    float area;
    float GDP;
    float populationDensity;
    float GDPPerCapita;
    float inverseDensity;
    float superPower;
};

int main()
{
    struct Card cardOne;
    struct Card cardTwo;
    char populationWinner[20], areaWinner[20], GDPWinner[20], numberOfTouristAttractionsWinner[20], GDPPerCapitaWinner[20], superPowerWinner[20], populationDensityWinner[20];

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

    // Second Card
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

    // Cálculos: Primeira carta
    cardOne.populationDensity = cardOne.population / cardOne.area;
    cardOne.GDPPerCapita = cardOne.GDP / cardOne.population;
    cardOne.inverseDensity = 1 / cardOne.populationDensity;
    cardOne.superPower = cardOne.population + cardOne.area + cardOne.GDP + cardOne.numberOfTouristAttractions + cardOne.GDPPerCapita + cardOne.inverseDensity;

    // Cálculos: Segunda carta
    cardTwo.populationDensity = cardTwo.population / cardTwo.area;
    cardTwo.GDPPerCapita = cardTwo.GDP / cardTwo.population;
    cardTwo.inverseDensity = 1 / cardTwo.populationDensity;
    cardTwo.superPower = cardTwo.population + cardTwo.area + cardTwo.GDP + cardTwo.numberOfTouristAttractions + cardTwo.GDPPerCapita + cardTwo.inverseDensity;

    // Cálculos dos vencedores
    strcpy(populationWinner, cardOne.population != cardTwo.population ? (cardOne.population > cardTwo.population ? "Carta 1 vence (1)" : "Carta 2 vence (2)") : "Empate");
    strcpy(areaWinner, cardOne.area != cardTwo.area ? (cardOne.area > cardTwo.area ? "Carta 1 vence (1)" : "Carta 2 vence (2)") : "Empate");
    strcpy(GDPWinner, cardOne.GDP != cardTwo.GDP ? (cardOne.GDP > cardTwo.GDP ? "Carta 1 vence (1)" : "Carta 2 vence (2)") : "Empate");
    strcpy(numberOfTouristAttractionsWinner, cardOne.numberOfTouristAttractions != cardTwo.numberOfTouristAttractions ? (cardOne.numberOfTouristAttractions > cardTwo.numberOfTouristAttractions ? "Carta 1 vence (1)" : "Carta 2 vence (2)") : "Empate");
    strcpy(GDPPerCapitaWinner, cardOne.GDPPerCapita != cardTwo.GDPPerCapita ? (cardOne.GDPPerCapita > cardTwo.GDPPerCapita ? "Carta 1 vence (1)" : "Carta 2 vence (2)") : "Empate");
    strcpy(superPowerWinner, cardOne.superPower != cardTwo.superPower ? (cardOne.superPower > cardTwo.superPower ? "Carta 1 vence (1)" : "Carta 2 vence (2)") : "Empate");
    strcpy(populationDensityWinner, cardOne.populationDensity != cardTwo.populationDensity ? (cardOne.populationDensity < cardTwo.populationDensity ? "Carta 1 vence (1)" : "Carta 2 vence (2)") : "Empate");
    strcpy(GDPPerCapitaWinner, cardOne.GDPPerCapita != cardTwo.GDPPerCapita ? (cardOne.GDPPerCapita > cardTwo.GDPPerCapita ? "Carta 1 vence (1)" : "Carta 2 vence (2)") : "Empate");

    // Resultados: Primeira carta
    printf("Carta 1: \n");
    printf("Estado: %c\n", cardOne.state);
    printf("Código: %c%s\n", cardOne.state, cardOne.cardCode);
    printf("Nome da cidade: %s\n", cardOne.cityName);
    printf("População: %d\n", cardOne.population);
    printf("Área: %fkm²\n", cardOne.area);
    printf("PIB: %f bilhões de reais\n", cardOne.GDP);
    printf("Número de pontos turísticos: %d\n", cardOne.numberOfTouristAttractions);
    printf("Densidade populacional: %fhab/km²\n", cardOne.populationDensity);
    printf("PIB per capita: %f reais\n", cardOne.GDPPerCapita);

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
    printf("Densidade populacional: %fhab/km²\n", cardTwo.populationDensity);
    printf("PIB per capita: %f reais\n", cardTwo.GDPPerCapita);

    printf("\n");
    printf("<--------------------------------------->");
    printf("\n");

    // Resultados das comparações
    printf("Comparação de cartas:\n");
    printf("População: %s\n", populationWinner);
    printf("Área: %s\n", areaWinner);
    printf("PIB: %s\n", GDPWinner);
    printf("Pontos Turísticos: %s\n", numberOfTouristAttractionsWinner);
    printf("Densidade populacional: %s\n", populationDensityWinner);
    printf("PIB per capita: %s\n", GDPPerCapitaWinner);
    printf("Super poder: %s\n", superPowerWinner);

    return 0;
}
