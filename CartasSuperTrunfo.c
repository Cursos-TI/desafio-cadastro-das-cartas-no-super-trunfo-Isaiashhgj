#include <stdio.h>

struct Carta {
    char estado;           
    int numero;            
    int populacao;        
    float area;            
    float pib;            
    int pontos_turisticos; 
};

int main() {
    struct Carta carta1, carta2;


    printf("Cadastro da primeira carta:\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &carta1.estado);
    printf("Digite o número da cidade (1-4): ");
    scanf("%d", &carta1.numero);
    printf("Digite a população: ");
    scanf("%d", &carta1.populacao);
    printf("Digite a área (km²): ");
    scanf("%f", &carta1.area);
    printf("Digite o PIB: ");
    scanf("%f", &carta1.pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta1.pontos_turisticos);

 
    printf("\nCadastro da segunda carta:\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &carta2.estado);
    printf("Digite o número da cidade (1-4): ");
    scanf("%d", &carta2.numero);
    printf("Digite a população: ");
    scanf("%d", &carta2.populacao);
    printf("Digite a área (km²): ");
    scanf("%f", &carta2.area);
    printf("Digite o PIB: ");
    scanf("%f", &carta2.pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta2.pontos_turisticos);

   
    printf("\n--- Dados da Primeira Carta ---\n");
    printf("Código da Carta: %c%02d\n", carta1.estado, carta1.numero);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f\n", carta1.pib);
    printf("Pontos Turísticos: %d\n", carta1.pontos_turisticos);

    printf("\n--- Dados da Segunda Carta ---\n");
    printf("Código da Carta: %c%02d\n", carta2.estado, carta2.numero);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f\n", carta2.pib);
    printf("Pontos Turísticos: %d\n", carta2.pontos_turisticos);

    return 0;
}


 




































}


