// ============================================================================
//         PROJETO WAR ESTRUTURADO - DESAFIO DE CÓDIGO
// ============================================================================

// Inclusão das bibliotecas padrão necessárias para entrada/saída, alocação de memória, manipulação de strings e tempo.
#include <stdio.h>
#include <string.h>

// --- Constantes Globais ---
// Definem valores fixos para o número de territórios, missões e tamanho máximo de strings, facilitando a manutenção.
#define QTDE_TERRITORIOS 5

// Definição da struct Territorio
typedef struct {
    char nome[50];
    char corExercito[30];
    int tropas;  
} Territorio;

// --- Estrutura de Dados ---
// Define a estrutura para um território, contendo seu nome, a cor do exército que o domina e o número de tropas.

int main() {
    Territorio mapa[QTDE_TERRITORIOS];

    printf("=== Cadastro de Territórios ===\n\n");


    //  Laço Principal do Jogo (Game Loop):
    // Cadastro dos territórios
    for (int i = 0; i < QTDE_TERRITORIOS; i++) {
        printf("Territorio %d:\n", i + 1);

        printf("Nome: ");
        fgets(mapa[i].nome, 50, stdin);
        mapa[i].nome[strcspn(mapa[i].nome, "\n")] = 0; // remove o \n

        printf("Cor do exercito: ");
        fgets(mapa[i].corExercito, 30, stdin);
        mapa[i].corExercito[strcspn(mapa[i].corExercito, "\n")] = 0;

        printf("Numero de tropas: ");
        scanf("%d", &mapa[i].tropas);
        getchar(); // limpa o buffer do Enter

        printf("\n");
    }
 // Exibir estado atual do mapa
    printf("\n=== Estado Atual do Mapa ===\n\n");
    for (int i = 0; i < QTDE_TERRITORIOS; i++) {
        printf("Territorio %d:\n", i + 1);
        printf("Nome: %s\n", mapa[i].nome);
        printf("Cor do Exercito: %s\n", mapa[i].corExercito);
        printf("Tropas: %d\n\n", mapa[i].tropas);
    }

    return 0;
}