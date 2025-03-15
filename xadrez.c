#include <stdio.h>

typedef struct {
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_demografica;
} Pais;

// Função para comparar dois atributos de acordo com as regras
float comparar_atributos(Pais pais1, Pais pais2, int atributo, int atributo2) {
    float soma_pais1 = 0, soma_pais2 = 0;
    
    // Comparação para o primeiro atributo
    if (atributo == 2) {
        soma_pais1 += pais1.populacao;
        soma_pais2 += pais2.populacao;
    } else if (atributo == 3) {
        soma_pais1 += pais1.area;
        soma_pais2 += pais2.area;
    } else if (atributo == 4) {
        soma_pais1 += pais1.pib;
        soma_pais2 += pais2.pib;
    } else if (atributo == 5) {
        soma_pais1 += pais1.pontos_turisticos;
        soma_pais2 += pais2.pontos_turisticos;
    } else if (atributo == 6) {
        soma_pais1 += pais1.densidade_demografica;
        soma_pais2 += pais2.densidade_demografica;
    }

    // Comparação para o segundo atributo
    if (atributo2 == 2) {
        soma_pais1 += pais1.populacao;
        soma_pais2 += pais2.populacao;
    } else if (atributo2 == 3) {
        soma_pais1 += pais1.area;
        soma_pais2 += pais2.area;
    } else if (atributo2 == 4) {
        soma_pais1 += pais1.pib;
        soma_pais2 += pais2.pib;
    } else if (atributo2 == 5) {
        soma_pais1 += pais1.pontos_turisticos;
        soma_pais2 += pais2.pontos_turisticos;
    } else if (atributo2 == 6) {
        soma_pais1 += pais1.densidade_demografica;
        soma_pais2 += pais2.densidade_demografica;
    }

    // Exibindo o resultado da soma dos atributos
    printf("\nSoma dos atributos:\n");
    printf("País 1 (%s) - Atributo 1: %.2f, Atributo 2: %.2f, Soma: %.2f\n", pais1.nome, soma_pais1, soma_pais2, soma_pais1 + soma_pais2);

    return soma_pais1 - soma_pais2; // Retorna a diferença de somas para comparação
}

// Função para exibir o menu de escolha de atributos
void exibir_menu(int atributo_selecionado) {
    printf("\nEscolha o segundo atributo para comparação (não pode ser o mesmo do primeiro):\n");

    if (atributo_selecionado != 2) printf("2 - População\n");
    if (atributo_selecionado != 3) printf("3 - Área\n");
    if (atributo_selecionado != 4) printf("4 - PIB\n");
    if (atributo_selecionado != 5) printf("5 - Pontos Turísticos\n");
    if (atributo_selecionado != 6) printf("6 - Densidade Demográfica\n");

    printf("0 - Sair\n");
}

// Função para comparar os países
void comparar_pais(Pais pais1, Pais pais2, int atributo, int atributo2) {
    printf("\nComparação entre %s e %s\n", pais1.nome, pais2.nome);

    // Exibindo os valores dos atributos selecionados para cada país
    if (atributo == 2) {
        printf("Atributo 1: População\n");
        printf("País 1 (%s): %d\n", pais1.nome, pais1.populacao);
        printf("País 2 (%s): %d\n", pais2.nome, pais2.populacao);
    } else if (atributo == 3) {
        printf("Atributo 1: Área\n");
        printf("País 1 (%s): %.2f km²\n", pais1.nome, pais1.area);
        printf("País 2 (%s): %.2f km²\n", pais2.nome, pais2.area);
    } else if (atributo == 4) {
        printf("Atributo 1: PIB\n");
        printf("País 1 (%s): %.2f bilhões\n", pais1.nome, pais1.pib);
        printf("País 2 (%s): %.2f bilhões\n", pais2.nome, pais2.pib);
    } else if (atributo == 5) {
        printf("Atributo 1: Pontos Turísticos\n");
        printf("País 1 (%s): %d\n", pais1.nome, pais1.pontos_turisticos);
        printf("País 2 (%s): %d\n", pais2.nome, pais2.pontos_turisticos);
    } else if (atributo == 6) {
        printf("Atributo 1: Densidade Demográfica\n");
        printf("País 1 (%s): %.2f pessoas/km²\n", pais1.nome, pais1.densidade_demografica);
        printf("País 2 (%s): %.2f pessoas/km²\n", pais2.nome, pais2.densidade_demografica);
    }

    // Comparação de ambos os atributos
    int resultado = comparar_atributos(pais1, pais2, atributo, atributo2);

    if (resultado > 0) {
        printf("\nResultado: %s vence com a maior soma de atributos!\n", pais1.nome);
    } else if (resultado < 0) {
        printf("\nResultado: %s vence com a maior soma de atributos!\n", pais2.nome);
    } else {
        printf("\nEmpate! As somas dos atributos são iguais.\n");
    }
}

int main() {
    Pais pais1 = {"Brasil", 211000000, 8515767, 2055.5, 200, 24.8};
    Pais pais2 = {"Argentina", 44494502, 2780400, 530.0, 250, 16.0};

    int atributo1, atributo2;

    // Menu de escolha do primeiro atributo
    printf("Escolha o primeiro atributo para comparação:\n");
    printf("2 - População\n");
    printf("3 - Área\n");
    printf("4 - PIB\n");
    printf("5 - Pontos Turísticos\n");
    printf("6 - Densidade Demográfica\n");

    printf("Digite o número do atributo escolhido: ");
    scanf("%d", &atributo1);

    // Mostrar o segundo menu para o segundo atributo
    exibir_menu(atributo1);

    printf("Digite o número do segundo atributo escolhido: ");
    scanf("%d", &atributo2);

    // Validar se o jogador escolheu atributos diferentes
    if (atributo1 == atributo2) {
        printf("Erro: Não é possível escolher o mesmo atributo duas vezes.\n");
        return 1;
    }

    // Comparar os dois países com os atributos escolhidos
    comparar_pais(pais1, pais2, atributo1, atributo2);

    return 0;
}
