#include <stdio.h>
#include <string.h>

// Definindo a estrutura de País
typedef struct {
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_demografica;
} Pais;

// Função para comparar os países com base no atributo selecionado
void comparar_pais(Pais pais1, Pais pais2, int atributo) {
    char *atributo_nome;

    switch (atributo) {
        case 1:  // Nome do País
            atributo_nome = "Nome do País";
            printf("\nComparação: %s\n", atributo_nome);
            printf("País 1: %s\n", pais1.nome);
            printf("País 2: %s\n", pais2.nome);
            printf("Não é possível comparar nomes diretamente.\n");
            break;

        case 2:  // População
            atributo_nome = "População";
            printf("\nComparação: %s\n", atributo_nome);
            printf("País 1: %s | População: %d\n", pais1.nome, pais1.populacao);
            printf("País 2: %s | População: %d\n", pais2.nome, pais2.populacao);
            if (pais1.populacao > pais2.populacao)
                printf("\nVencedor: %s\n", pais1.nome);
            else if (pais1.populacao < pais2.populacao)
                printf("\nVencedor: %s\n", pais2.nome);
            else
                printf("\nEmpate!\n");
            break;

        case 3:  // Área
            atributo_nome = "Área";
            printf("\nComparação: %s\n", atributo_nome);
            printf("País 1: %s | Área: %.2f km²\n", pais1.nome, pais1.area);
            printf("País 2: %s | Área: %.2f km²\n", pais2.nome, pais2.area);
            if (pais1.area > pais2.area)
                printf("\nVencedor: %s\n", pais1.nome);
            else if (pais1.area < pais2.area)
                printf("\nVencedor: %s\n", pais2.nome);
            else
                printf("\nEmpate!\n");
            break;

        case 4:  // PIB
            atributo_nome = "PIB";
            printf("\nComparação: %s\n", atributo_nome);
            printf("País 1: %s | PIB: %.2f bilhões\n", pais1.nome, pais1.pib);
            printf("País 2: %s | PIB: %.2f bilhões\n", pais2.nome, pais2.pib);
            if (pais1.pib > pais2.pib)
                printf("\nVencedor: %s\n", pais1.nome);
            else if (pais1.pib < pais2.pib)
                printf("\nVencedor: %s\n", pais2.nome);
            else
                printf("\nEmpate!\n");
            break;

        case 5:  // Pontos Turísticos
            atributo_nome = "Pontos Turísticos";
            printf("\nComparação: %s\n", atributo_nome);
            printf("País 1: %s | Pontos Turísticos: %d\n", pais1.nome, pais1.pontos_turisticos);
            printf("País 2: %s | Pontos Turísticos: %d\n", pais2.nome, pais2.pontos_turisticos);
            if (pais1.pontos_turisticos > pais2.pontos_turisticos)
                printf("\nVencedor: %s\n", pais1.nome);
            else if (pais1.pontos_turisticos < pais2.pontos_turisticos)
                printf("\nVencedor: %s\n", pais2.nome);
            else
                printf("\nEmpate!\n");
            break;

        case 6:  // Densidade Demográfica
            atributo_nome = "Densidade Demográfica";
            printf("\nComparação: %s\n", atributo_nome);
            printf("País 1: %s | Densidade Demográfica: %.2f pessoas/km²\n", pais1.nome, pais1.densidade_demografica);
            printf("País 2: %s | Densidade Demográfica: %.2f pessoas/km²\n", pais2.nome, pais2.densidade_demografica);
            if (pais1.densidade_demografica < pais2.densidade_demografica)
                printf("\nVencedor: %s\n", pais1.nome);
            else if (pais1.densidade_demografica > pais2.densidade_demografica)
                printf("\nVencedor: %s\n", pais2.nome);
            else
                printf("\nEmpate!\n");
            break;

        default:
            printf("Opção inválida!\n");
    }
}

// Função para exibir o menu e obter a escolha do usuário
void exibir_menu() {
    printf("\nEscolha um atributo para comparação:\n");
    printf("1 - Nome do País\n");
    printf("2 - População\n");
    printf("3 - Área\n");
    printf("4 - PIB\n");
    printf("5 - Pontos Turísticos\n");
    printf("6 - Densidade Demográfica\n");
    printf("0 - Sair\n");
}

int main() {
    // Inicializando dois países com suas cartas
    Pais pais1 = {"Brasil", 211000000, 8515767, 2055.5, 200, 24.8};
    Pais pais2 = {"Argentina", 44494502, 2780400, 530.0, 250, 16.0};

    int opcao;
    
    while (1) {
        // Exibindo o menu e lendo a opção
        exibir_menu();
        printf("Digite a opção: ");
        scanf("%d", &opcao);

        if (opcao == 0) {
            printf("Saindo do programa...\n");
            break;
        }

        // Comparando as cartas com base na opção escolhida
        comparar_pais(pais1, pais2, opcao);
    }

    return 0;
}
