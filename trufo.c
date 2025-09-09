#include <stdio.h>
#include <string.h>

struct Carta {
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidade; // populacao / area
};

// Função para comparar atributos
void comparar(struct Carta c1, struct Carta c2, int opcao) {
    printf("\n--- Comparação ---\n");
    printf("País 1: %s\n", c1.nome);
    printf("País 2: %s\n", c2.nome);

    switch(opcao) {
        case 1: // População
            printf("População %s: %d\n", c1.nome, c1.populacao);
            printf("População %s: %d\n", c2.nome, c2.populacao);
            if (c1.populacao > c2.populacao)
                printf("Vencedor: %s\n", c1.nome);
            else if (c2.populacao > c1.populacao)
                printf("Vencedor: %s\n", c2.nome);
            else
                printf("Empate!\n");
            break;

        case 2: // Área
            printf("Área %s: %.2f\n", c1.nome, c1.area);
            printf("Área %s: %.2f\n", c2.nome, c2.area);
            if (c1.area > c2.area)
                printf("Vencedor: %s\n", c1.nome);
            else if (c2.area > c1.area)
                printf("Vencedor: %s\n", c2.nome);
            else
                printf("Empate!\n");
            break;

        case 3: // PIB
            printf("PIB %s: %.2f\n", c1.nome, c1.pib);
            printf("PIB %s: %.2f\n", c2.nome, c2.pib);
            if (c1.pib > c2.pib)
                printf("Vencedor: %s\n", c1.nome);
            else if (c2.pib > c1.pib)
                printf("Vencedor: %s\n", c2.nome);
            else
                printf("Empate!\n");
            break;

        case 4: // Pontos turísticos
            printf("Pontos turísticos %s: %d\n", c1.nome, c1.pontosTuristicos);
            printf("Pontos turísticos %s: %d\n", c2.nome, c2.pontosTuristicos);
            if (c1.pontosTuristicos > c2.pontosTuristicos)
                printf("Vencedor: %s\n", c1.nome);
            else if (c2.pontosTuristicos > c1.pontosTuristicos)
                printf("Vencedor: %s\n", c2.nome);
            else
                printf("Empate!\n");
            break;

        case 5: // Densidade demográfica (MENOR vence!)
            printf("Densidade %s: %.2f\n", c1.nome, c1.densidade);
            printf("Densidade %s: %.2f\n", c2.nome, c2.densidade);
            if (c1.densidade < c2.densidade)
                printf("Vencedor: %s\n", c1.nome);
            else if (c2.densidade < c1.densidade)
                printf("Vencedor: %s\n", c2.nome);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opção inválida!\n");
    }
}

int main() {
    struct Carta carta1 = {"Brasil", 214000000, 8516000.0, 2200000.0, 10};
    struct Carta carta2 = {"Argentina", 46000000, 2780000.0, 500000.0, 6};

    int opcao;

    printf("=== Super Trunfo ===\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    comparar(carta1, carta2, opcao);

    return 0;
}