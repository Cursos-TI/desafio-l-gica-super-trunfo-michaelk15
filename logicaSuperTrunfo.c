#include <stdio.h>
#include <string.h>

// Estrutura que representa uma carta do Super Trunfo
typedef struct {
    char estado[30];
    char codigo[5];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int numPontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
} Carta;

int main() {
    // Cadastro das cartas (pré-definidas para este nível do desafio)
    Carta carta1 = {"SP", "A01", "São Paulo", 12300000, 1521.0, 699000000000.0, 50};
    Carta carta2 = {"RJ", "A02", "Rio de Janeiro", 6000000, 1182.0, 400000000000.0, 40};

    // Cálculo dos atributos derivados
    carta1.densidadePopulacional = carta1.populacao / carta1.area;
    carta1.pibPerCapita = carta1.pib / carta1.populacao;

    carta2.densidadePopulacional = carta2.populacao / carta2.area;
    carta2.pibPerCapita = carta2.pib / carta2.populacao;

    // ============================================================
    // Escolha do atributo de comparação
    // Troque o valor da variável "atributoEscolhido" para mudar a comparação:
    // 1 = População
    // 2 = Área
    // 3 = PIB
    // 4 = Densidade Populacional (menor vence)
    // 5 = PIB per capita
    // ============================================================
    int atributoEscolhido = 1; // <<<< altere aqui para testar outros atributos

    printf("============================================\n");
    printf("   Comparacao de Cartas do Super Trunfo\n");
    printf("============================================\n\n");

    // Lógica de comparação conforme o atributo escolhido
    if (atributoEscolhido == 1) {
        printf("Comparacao de cartas (Atributo: Populacao)\n\n");
        printf("Carta 1 - %s (%s): %d\n", carta1.nomeCidade, carta1.estado, carta1.populacao);
        printf("Carta 2 - %s (%s): %d\n\n", carta2.nomeCidade, carta2.estado, carta2.populacao);

        if (carta1.populacao > carta2.populacao)
            printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
        else if (carta2.populacao > carta1.populacao)
            printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
        else
            printf("Resultado: Empate!\n");
    }
    else if (atributoEscolhido == 2) {
        printf("Comparacao de cartas (Atributo: Area)\n\n");
        printf("Carta 1 - %s (%s): %.2f km²\n", carta1.nomeCidade, carta1.estado, carta1.area);
        printf("Carta 2 - %s (%s): %.2f km²\n\n", carta2.nomeCidade, carta2.estado, carta2.area);

        if (carta1.area > carta2.area)
            printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
        else if (carta2.area > carta1.area)
            printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
        else
            printf("Resultado: Empate!\n");
    }
    else if (atributoEscolhido == 3) {
        printf("Comparacao de cartas (Atributo: PIB)\n\n");
        printf("Carta 1 - %s (%s): %.2f trilhoes\n", carta1.nomeCidade, carta1.estado, carta1.pib);
        printf("Carta 2 - %s (%s): %.2f trilhoes\n\n", carta2.nomeCidade, carta2.estado, carta2.pib);

        if (carta1.pib > carta2.pib)
            printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
        else if (carta2.pib > carta1.pib)
            printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
        else
            printf("Resultado: Empate!\n");
    }
    else if (atributoEscolhido == 4) {
        printf("Comparacao de cartas (Atributo: Densidade Populacional)\n\n");
        printf("Carta 1 - %s (%s): %.2f hab/km²\n", carta1.nomeCidade, carta1.estado, carta1.densidadePopulacional);
        printf("Carta 2 - %s (%s): %.2f hab/km²\n\n", carta2.nomeCidade, carta2.estado, carta2.densidadePopulacional);

        // Regra especial: vence a menor densidade
        if (carta1.densidadePopulacional < carta2.densidadePopulacional)
            printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
        else if (carta2.densidadePopulacional < carta1.densidadePopulacional)
            printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
        else
            printf("Resultado: Empate!\n");
    }
    else if (atributoEscolhido == 5) {
        printf("Comparacao de cartas (Atributo: PIB per capita)\n\n");
        printf("Carta 1 - %s (%s): %.2f\n", carta1.nomeCidade, carta1.estado, carta1.pibPerCapita);
        printf("Carta 2 - %s (%s): %.2f\n\n", carta2.nomeCidade, carta2.estado, carta2.pibPerCapita);

        if (carta1.pibPerCapita > carta2.pibPerCapita)
            printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
        else if (carta2.pibPerCapita > carta1.pibPerCapita)
            printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
        else
            printf("Resultado: Empate!\n");
    }
    else {
        printf("Atributo invalido! Verifique a variavel 'atributoEscolhido'.\n");
    }

    printf("\n============================================\n");

    return 0;
}
