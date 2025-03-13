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

Carta carta1;
Carta carta2;
double pontos1 = 0;
double pontos2 = 0;

void EscolherAtributo(int op)
{
    /*
    printf("Escolha um atributo do menu abaixo digitando um número de 1 a 5 para comparar as cartas:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Densidade populacional\n");
    printf("5 - PIB per capita\n");
    */
    switch(op)
    {
        case 1:
            printf("Escolheu atributo (População):\n");
            printf("Carta1 - População: %lu \n", carta1.populacao);
            printf("Carta2 - População: %lu \n", carta2.populacao);
            pontos1 += carta1.populacao;
            pontos2 += carta2.populacao;
            break;
        case 2:
            printf("Escolheu atributo (Área):\n");
            printf("Carta1 - Área: %f \n", carta1.area);
            printf("Carta2 - Área: %f \n", carta2.area);
            pontos1 += carta1.area;
            pontos2 += carta2.area;
            break;
        case 3:
            printf("Escolheu atributo (PIB):\n");
            printf("Carta1 - PIB: %f \n", carta1.pib);
            printf("Carta2 - PIB: %f \n", carta2.pib);
            pontos1 += carta1.pib;
            pontos2 += carta2.pib;
            break;
        case 4:
            printf("Escolheu atributo (Densidade populacional):\n");
            printf("Carta1 - Densidade populacional: %f \n", carta1.densidade);
            printf("Carta2 - Densidade populacional: %f \n", carta2.densidade);
            pontos1 += carta1.densidade;
            pontos2 += carta2.densidade;
            break;
        case 5:
            printf("Escolheu atributo (PIB per capita):\n");
            printf("Carta1 - PIB per capita: %f \n", carta1.pibCapita);
            printf("Carta2 - PIB per capita: %f \n", carta2.pibCapita);
            pontos1 += carta1.pibCapita;
            pontos2 += carta2.pibCapita;
            break;
        default:
            printf("Opção inválida.");
            return;
    }
}

void CompararCartas()
{
    if(pontos1 > pontos2)
        printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
    else if(pontos1 < pontos2)
        printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
    else
        printf("Resultado: Empatou!\n");
}

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Pedir para o jogador escolher as propriedades da primeira carta
    printf("Digite o código do estado (1 letra) da primeira carta:");
    scanf("%c", &carta1.estado);

    printf("Digite o código da carta (2 números) da primeira carta:");
    scanf("%s", carta1.codigoCarta);

    printf("Digite o nome da cidade da primeira carta:");
    scanf("%s", carta1.nomeCidade);

    printf("Digite a população da primeira carta:");
    scanf("%lu", &carta1.populacao);

    printf("Digite a área da primeira carta:");
    scanf("%f", &carta1.area);

    printf("Digite o PIB da primeira carta:");
    scanf("%f", &carta1.pib);

    printf("Digite a quantidade de pontos turísticos da primeira carta:");
    scanf("%i", &carta1.pontosTuristicos);

    carta1.densidade = (float)carta1.populacao / carta1.area;
    carta1.pibCapita = carta1.pib / (float)carta1.populacao;

    carta1.super = (float)carta1.populacao + carta1.area + carta1.pib + carta1.pontosTuristicos + carta1.pibCapita * (1.0 / carta1.densidade);

    // Pedir para o jogador escolher as propriedades da segunda carta
    printf("Digite o código do estado (1 letra) da segunda carta:");
    scanf(" %c", &carta2.estado);

    printf("Digite o código da carta (2 números) da segunda carta:");
    scanf("%s", carta2.codigoCarta);

    printf("Digite o nome da cidade da segunda carta:");
    scanf("%s", carta2.nomeCidade);

    printf("Digite a população da segunda carta:");
    scanf("%lu", &carta2.populacao);

    printf("Digite a área da segunda carta:");
    scanf("%f", &carta2.area);

    printf("Digite o PIB da segunda carta:");
    scanf("%f", &carta2.pib);

    printf("Digite a quantidade de pontos turísticos da segunda carta:");
    scanf("%i", &carta2.pontosTuristicos);

    // Cálculo automático de densidade populacional, pib per capita e super poder
    carta2.densidade = (float)carta2.populacao / carta2.area;
    carta2.pibCapita = carta2.pib / (float)carta2.populacao;
    carta2.super = (float)carta2.populacao + carta2.area + carta2.pib + carta2.pontosTuristicos + carta2.pibCapita * (1.0 / carta2.densidade);

    // Exibir todas as propriedades da primeira carta cadastrada
    printf("Carta 1\n");
    printf("Estado: %c \n", carta1.estado);
    printf("Código da carta: %c%s \n", carta1.estado, carta1.codigoCarta);
    printf("Nome da cidade: %s \n", carta1.nomeCidade);
    printf("População: %lu \n", carta1.populacao);
    printf("Área: %f km²\n", carta1.area);
    printf("PIB: %f bilhões de reais\n", carta1.pib);
    printf("Número de pontos turísticos: %i \n", carta1.pontosTuristicos);
    printf("Densidade populacional: %f hab/km²\n", carta1.densidade);
    printf("PIB per capita: %f reais\n", carta1.pibCapita);
    printf("Super poder: %f \n", carta1.super);
    printf("\n");

    // Exibir todas as propriedades da segunda carta cadastrada
    printf("Carta 2\n");
    printf("Estado: %c \n", carta2.estado);
    printf("Código da carta: %c%s \n", carta2.estado, carta2.codigoCarta);
    printf("Nome da cidade: %s \n", carta2.nomeCidade);
    printf("População: %lu \n", carta2.populacao);
    printf("Área: %f km²\n", carta2.area);
    printf("PIB: %f bilhões de reais\n", carta2.pib);
    printf("Número de pontos turísticos: %i \n", carta2.pontosTuristicos);
    printf("Densidade populacional: %f hab/km²\n", carta2.densidade);
    printf("PIB per capita: %f reais\n", carta2.pibCapita);
    printf("Super poder: %f \n", carta2.super);
    printf("\n");

    // Armazena o valor do atributo escolhido das duas cartas para comparar depois
    EscolherAtributo(1);

    // Faz a comparação dos valores das duas cartas e mostra o resultado
    CompararCartas();
    return 0;
}