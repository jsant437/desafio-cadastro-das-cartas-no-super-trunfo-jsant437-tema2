#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado;
    char codigoCarta[3];
    char nomeCidade[20];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Pedir para o jogador escolher as propriedades da carta
    printf("Digite o código do estado (1 letra):");
    scanf("%c", &estado);

    printf("Digite o código da carta (2 números):");
    scanf("%s", &codigoCarta);

    printf("Digite o nome da cidade:");
    scanf("%s", &nomeCidade);

    printf("Digite a população:");
    scanf("%i", &populacao);

    printf("Digite a área:");
    scanf("%f", &area);

    printf("Digite o PIB:");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turísticos:");
    scanf("%i", &pontosTuristicos);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // Exibir todas as propriedades da carta cadastrada
    printf("- Carta cadastrada - \n");
    printf("Estado: %c \n", estado);
    printf("Código da carta: %c%s \n", estado, codigoCarta);
    printf("Nome da cidade: %s \n", nomeCidade);
    printf("População: %i \n", populacao);
    printf("Área: %f \n", area);
    printf("PIB: %f \n", pib);
    printf("Número de pontos turísticos: %i \n", pontosTuristicos);
    return 0;
}
