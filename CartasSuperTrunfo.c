#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa
typedef struct Carta
{
    char estado;
    char codigoCarta[3];
    char nomeCidade[20];
    unsigned long populacao;
    float area;
    float pib;
    int pontosTuristicos;

    float densidade;
    float pibCapita;

    float super;
} Carta;


int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    Carta a;
    Carta b;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Pedir para o jogador escolher as propriedades da primeira carta
    printf("Digite o código do estado (1 letra) da primeira carta:");
    scanf("%c", &a.estado);

    printf("Digite o código da carta (2 números) da primeira carta:");
    scanf("%s", a.codigoCarta);

    printf("Digite o nome da cidade da primeira carta:");
    scanf("%s", a.nomeCidade);

    printf("Digite a população da primeira carta:");
    scanf("%lu", &a.populacao);

    printf("Digite a área da primeira carta:");
    scanf("%f", &a.area);

    printf("Digite o PIB da primeira carta:");
    scanf("%f", &a.pib);

    printf("Digite a quantidade de pontos turísticos da primeira carta:");
    scanf("%i", &a.pontosTuristicos);

    a.densidade = (float)a.populacao / a.area;
    a.pibCapita = a.pib / (float)a.populacao;

    a.super = (float)a.populacao + a.area + a.pib + a.pontosTuristicos + a.pibCapita * (1.0 / a.densidade);

    // Pedir para o jogador escolher as propriedades da segunda carta
    printf("Digite o código do estado (1 letra) da segunda carta:");
    scanf(" %c", &b.estado);

    printf("Digite o código da carta (2 números) da segunda carta:");
    scanf("%s", b.codigoCarta);

    printf("Digite o nome da cidade da segunda carta:");
    scanf("%s", b.nomeCidade);

    printf("Digite a população da segunda carta:");
    scanf("%lu", &b.populacao);

    printf("Digite a área da segunda carta:");
    scanf("%f", &b.area);

    printf("Digite o PIB da segunda carta:");
    scanf("%f", &b.pib);

    printf("Digite a quantidade de pontos turísticos da segunda carta:");
    scanf("%i", &b.pontosTuristicos);

    b.densidade = (float)b.populacao / b.area;
    b.pibCapita = b.pib / (float)b.populacao;

    b.super = (float)b.populacao + b.area + b.pib + b.pontosTuristicos + b.pibCapita * (1.0 / b.densidade);

    // Exibir todas as propriedades da primeira carta cadastrada
    printf("Carta 1\n");
    printf("Estado: %c \n", a.estado);
    printf("Código da carta: %c%s \n", a.estado, a.codigoCarta);
    printf("Nome da cidade: %s \n", a.nomeCidade);
    printf("População: %lu \n", a.populacao);
    printf("Área: %f km²\n", a.area);
    printf("PIB: %f bilhões de reais\n", a.pib);
    printf("Número de pontos turísticos: %i \n", a.pontosTuristicos);
    printf("Densidade populacional: %f hab/km²\n", a.densidade);
    printf("PIB per capita: %f reais\n", a.pibCapita);
    printf("Super poder: %f \n", a.super);

    // Exibir todas as propriedades da segunda carta cadastrada
    printf("Carta 2\n");
    printf("Estado: %c \n", b.estado);
    printf("Código da carta: %c%s \n", b.estado, b.codigoCarta);
    printf("Nome da cidade: %s \n", b.nomeCidade);
    printf("População: %lu \n", b.populacao);
    printf("Área: %f km²\n", b.area);
    printf("PIB: %f bilhões de reais\n", b.pib);
    printf("Número de pontos turísticos: %i \n", b.pontosTuristicos);
    printf("Densidade populacional: %f hab/km²\n", b.densidade);
    printf("PIB per capita: %f reais\n", b.pibCapita);
    printf("Super poder: %f \n", b.super);

    printf("Comparação das cartas:\n");
    a.populacao > b.populacao ? printf("População: Carta 1 venceu\n") : printf("População: Carta 2 venceu\n");
    a.area > b.area ? printf("Área: Carta 1 venceu\n") : printf("Área: Carta 2 venceu\n");
    a.pib > b.pib ? printf("PIB: Carta 1 venceu\n") : printf("PIB: Carta 2 venceu\n");
    a.pontosTuristicos > b.pontosTuristicos ? printf("Pontos turísticos: Carta 1 venceu\n") : printf("Pontos turísticos: Carta 2 venceu\n");
    a.densidade < b.densidade ? printf("Densidade: Carta 1 venceu\n") : printf("Densidade: Carta 2 venceu\n");
    a.pibCapita > b.pibCapita ? printf("PIB per capita: Carta 1 venceu\n") : printf("PIB per capita: Carta 2 venceu\n");
    a.super > b.super ? printf("Super poder: Carta 1 venceu\n") : printf("Super poder: Carta 2 venceu\n");
    return 0;
}
