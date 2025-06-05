#include <stdio.h>

int main() {
    // Definindo uma estrutura para representar uma carta de cidade
    struct CartaCidade {
        char estado[50]; //Nome do estado (uma letra entre A e H)
        char codigo[4]; // Ex: A01, B02 (3 caracteres + null)
        char nome[50];  // Nome da cidade (ex: "Belo Horizonte")
        int populacao;
        float area;
        float pib;
        int pontos_turisticos;
    };

    // Declarando duas variáveis do tipo CartaCidade para as duas cartas
    struct CartaCidade carta1;
    struct CartaCidade carta2;

    // --- Cadastro da Primeira Carta ---
    printf("--- Cadastro da Primeira Carta ---\n");

    printf("Digite uma letra entre A e H para representar o estado: ");
    scanf("%s", carta1.estado);

    printf("Digite o codigo da carta, a letra do estado seguida de 01, 02, 03 ou 04 (ex: A01): ");
    scanf("%s", carta1.codigo);

    printf("Digite o nome da cidade: ");
    scanf("%s", carta1.nome);

    printf("Digite a populacao: ");
    scanf("%d", &carta1.populacao);

    printf("Digite a area (em km2): ");
    scanf("%f", &carta1.area);

    printf("Digite o PIB: ");
    scanf("%f", &carta1.pib);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &carta1.pontos_turisticos);




    // --- Cadastro da Segunda Carta ---
    printf("\n--- Cadastro da Segunda Carta ---\n");

    printf("Digite uma letra entre A e H para representar o estado: ");
    scanf("%s", carta2.estado);

    printf("Digite o codigo da carta (ex: B02): ");
    scanf("%s", carta2.codigo);

    printf("Digite o nome da cidade: ");
    scanf("%s", carta2.nome);

    printf("Digite a populacao: ");
    scanf("%d", &carta2.populacao);

    printf("Digite a area (em km2): ");
    scanf("%f", &carta2.area);

    printf("Digite o PIB: ");
    scanf("%f", &carta2.pib);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &carta2.pontos_turisticos);


    // --- Exibição dos Dados das Cartas ---
    printf("\n--- Dados da Primeira Carta (%s - %s - %s) ---\n", carta1.estado, carta1.codigo, carta1.nome);
    printf("Populacao: %d\n", carta1.populacao);
    printf("Area: %.2f km2\n", carta1.area);
    printf("PIB: %.2f\n", carta1.pib);
    printf("Pontos Turisticos: %d\n", carta1.pontos_turisticos);

    printf("\n--- Dados da Segunda Carta (%s - %s - %s) ---\n", carta2.estado, carta2.codigo, carta2.nome);
    printf("Populacao: %d\n", carta2.populacao);
    printf("Area: %.2f km2\n", carta2.area);
    printf("PIB: %.2f\n", carta2.pib);
    printf("Pontos Turisticos: %d\n", carta2.pontos_turisticos);

    return 0; // Para finalizar e executar o programa.
}
