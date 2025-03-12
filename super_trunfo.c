#include <stdio.h>

typedef struct {
    char estado;          // Estado representado por uma letra (A-H)
    char codigo[5];       // Código da carta (ex: A01, B03)
    char cidade[100];     // Nome da cidade
    int populacao;        // População da cidade
    float area;           // Área da cidade em km²
    float pib;            // PIB da cidade em bilhões de reais
    int pontos_turisticos;// Número de pontos turísticos da cidade
} Carta;

void exibirCarta(Carta carta, int num) {
    printf("\nCarta %d:\n", num);
    printf("Estado: %c\n", carta.estado);
    printf("Código: %s\n", carta.codigo);
    printf("Nome da Cidade: %s\n", carta.cidade);
    printf("População: %d\n", carta.populacao);
    printf("Área: %.2f km²\n", carta.area);
    printf("PIB: %.2f bilhões de reais\n", carta.pib);
    printf("Número de Pontos Turísticos: %d\n", carta.pontos_turisticos);
}

int main() {
    Carta carta1, carta2;

    // Entrada de dados para a Carta 1
    printf("Digite os dados da primeira carta:\n");

    printf("Estado (letra de A a H): ");
    scanf(" %c", &carta1.estado);  // O espaço antes de %c é para limpar o buffer
    printf("Código da Carta (ex: A01): ");
    scanf("%s", carta1.codigo);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", carta1.cidade);  // Para ler strings com espaços
    printf("População: ");
    scanf("%d", &carta1.populacao);
    printf("Área (em km²): ");
    scanf("%f", &carta1.area);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &carta1.pib);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta1.pontos_turisticos);

    // Entrada de dados para a Carta 2
    printf("\nDigite os dados da segunda carta:\n");

    printf("Estado (letra de A a H): ");
    scanf(" %c", &carta2.estado);  // O espaço antes de %c é para limpar o buffer
    printf("Código da Carta (ex: B02): ");
    scanf("%s", carta2.codigo);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", carta2.cidade);  // Para ler strings com espaços
    printf("População: ");
    scanf("%d", &carta2.populacao);
    printf("Área (em km²): ");
    scanf("%f", &carta2.area);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &carta2.pib);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta2.pontos_turisticos);

    // Exibição das cartas
    exibirCarta(carta1, 1);
    exibirCarta(carta2, 2);

    return 0;
}
