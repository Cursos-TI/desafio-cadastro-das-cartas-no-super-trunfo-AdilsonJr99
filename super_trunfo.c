#include <stdio.h>

// Estrutura para armazenar os dados de uma carta
typedef struct {
    char estado[50];
    int codigo;
    char cidade[50];
    long int populacao;
    float area;
    float pib;
    int pontosTuristicos;
} Carta;

// Função para ler os dados de uma carta
void lerCarta(Carta *carta, int numero) {
    printf("\n--- Inserindo dados da carta %d ---\n", numero);

    printf("Estado: ");
    scanf(" %[^\n]", carta->estado);

    printf("Código da carta: ");
    scanf("%d", &carta->codigo);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta->cidade);

    printf("População: ");
    scanf("%ld", &carta->populacao);

    printf("Área (em km²): ");
    scanf("%f", &carta->area);

    printf("PIB (em bilhões): ");
    scanf("%f", &carta->pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &carta->pontosTuristicos);
}

// Função para exibir os dados de uma carta
void exibirCarta(Carta carta, int numero) {
    printf("\n--- Carta %d ---\n", numero);
    printf("Estado: %s\n", carta.estado);
    printf("Código: %d\n", carta.codigo);
    printf("Cidade: %s\n", carta.cidade);
    printf("População: %ld\n", carta.populacao);
    printf("Área: %.2f km²\n", carta.area);
    printf("PIB: R$ %.2f bilhões\n", carta.pib);
    printf("Pontos Turísticos: %d\n", carta.pontosTuristicos);
}

int main() {
    Carta carta1, carta2;

    // Leitura das cartas
    lerCarta(&carta1, 1);
    lerCarta(&carta2, 2);

    // Exibição dos dados
    exibirCarta(carta1, 1);
    exibirCarta(carta2, 2);

    return 0;
}
