#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado1[20] = "SP";
    char estado2[20] = "RJ";
    char codigo1[20] = "A01";
    char codigo2[20] = "B01";
    char cidade1[30], cidade2[30];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    float densidade1, densidade2;
    float pib_per_capita1, pib_per_capita2;
    int pontos_turisticos1, pontos_turisticos2;
    float super_poder1, super_poder2;
    const char *atributo = "População";
    float valor1 = 0.0f, valor2 = 0.0f;
    int carta_vencedora = 0;

    // Área para entrada de dados
    // Cadastro da primeira carta
    printf("Cadastro da Carta 1\n");
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);
    printf("Digite a população: ");
    scanf("%lu", &populacao1);
    printf("Digite a área: ");
    scanf("%f", &area1);
    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);
    // Cálculo dos atributos derivados para a primeira carta
    densidade1 = (float) populacao1 / area1;
    pib_per_capita1 = (float) (pib1 * 1000000000.0) / populacao1; // Convertendo o PIB de bilhões para reais e depois dividindo pela população para obter o PIB per capita
    super_poder1 = (float) ((float) populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1 + (1.0f / densidade1)); // Exemplo de cálculo do super poder, somando os atributos e usando o inverso da densidade
    printf("Carta 1 - Cadastro completo:\n");

    // Cadastro da segunda carta
    printf("\nCadastro da Carta 2\n");
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);
    printf("Digite a população: ");
    scanf("%lu", &populacao2);
    printf("Digite a área: ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);
    // Cálculo dos atributos derivados para a segunda carta
    densidade2 = (float) populacao2 / area2;
    pib_per_capita2 = (float) (pib2 * 1000000000.0) / populacao2;
    super_poder2 = (float) ((float) populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 + (1.0f / densidade2)); // Exemplo de cálculo do super poder, somando os atributos e usando o inverso da densidade
    printf("Carta 2 - Cadastro completo:\n\n");

    // Comparação de Cartas:
    // Neste nível, a escolha do atributo foi definida diretamente no código.
    // Para o desafio, vamos comparar a população.
    valor1 = (float) populacao1;
    valor2 = (float) populacao2;

    // A regra é: para todos os atributos numéricos, exceto densidade, o maior valor vence.
    // Para densidade populacional, o menor valor vence.
    if (valor1 > valor2) {
        carta_vencedora = 1;
    } else {
        carta_vencedora = 2;
    }

    // Exibição dos Resultados:
    printf("\n=== Resultado da Comparação ===\n");
    printf("Atributo escolhido: %s\n", atributo);
    printf("Carta 1 (%s - %s): %.0f\n", estado1, cidade1, valor1);
    printf("Carta 2 (%s - %s): %.0f\n", estado2, cidade2, valor2);

    if (carta_vencedora == 1) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }

    return 0;
}