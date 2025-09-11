#include <stdio.h>

struct Carta {
    char estado;               // Ex: A-H
    int codigo;                // Código numérico
    char nome_da_cidade[50];   // Nome da cidade
    int numero;                // Número da cidade (1-4)
    int populacao;             // População
    float area;                // Área em km²
    float pib;                 // PIB
    int pontos_turisticos;     // Pontos turísticos
    float densidade_populacional; 
    float pib_per_capita;
};

int main() {
    struct Carta carta1, carta2;

    printf("Cadastro da primeira carta: \n");
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &carta1.estado);
    printf("Digite o Código: ");
    scanf("%d", &carta1.codigo);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", carta1.nome_da_cidade);
    printf("Digite o Número da cidade (1-4): ");
    scanf("%d", &carta1.numero);
    printf("Digite a População: ");
    scanf("%d", &carta1.populacao);
    printf("Digite a Área (km²): ");
    scanf("%f", &carta1.area);
    printf("Digite o PIB: ");
    scanf("%f", &carta1.pib);
    printf("Digite o Número de pontos turísticos: ");
    scanf("%d", &carta1.pontos_turisticos);

    // Calcula automaticamente
    carta1.densidade_populacional = carta1.populacao / carta1.area;
    carta1.pib_per_capita = carta1.pib / carta1.populacao;

    printf("\nCadastro da segunda carta: \n");
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &carta2.estado);
    printf("Digite o Código: ");
    scanf("%d", &carta2.codigo);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", carta2.nome_da_cidade);
    printf("Digite o Número da cidade (1-4): ");
    scanf("%d", &carta2.numero);
    printf("Digite a População: ");
    scanf("%d", &carta2.populacao);
    printf("Digite a Área (km²): ");
    scanf("%f", &carta2.area);
    printf("Digite o PIB: ");
    scanf("%f", &carta2.pib);
    printf("Digite o Número de pontos turísticos: ");
    scanf("%d", &carta2.pontos_turisticos);

    // Calcula automaticamente
    carta2.densidade_populacional = carta2.populacao / carta2.area;
    carta2.pib_per_capita = carta2.pib / carta2.populacao;

    // Exibir resultados
    printf("\n--- Dados da Primeira Carta ---\n");
    printf("Código da Carta: %c%02d\n", carta1.estado, carta1.numero);
    printf("Código: %d\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nome_da_cidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f\n", carta1.pib);
    printf("Pontos Turísticos: %d\n", carta1.pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta1.densidade_populacional);
    printf("PIB per capita: %.2f\n", carta1.pib_per_capita);

    printf("\n--- Dados da Segunda Carta ---\n");
    printf("Código da Carta: %c%02d\n", carta2.estado, carta2.numero);
    printf("Código: %d\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nome_da_cidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f\n", carta2.pib);
    printf("Pontos Turísticos: %d\n", carta2.pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta2.densidade_populacional);
    printf("PIB per capita: %.2f\n", carta2.pib_per_capita);

    return 0;
}






