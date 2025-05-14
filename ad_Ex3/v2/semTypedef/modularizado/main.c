#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "Cadastro.h"

struct cadastro* criarCadastro(int N) {
    if (N <= 0) return NULL;

    struct cadastro *vetor = (struct cadastro*) malloc(N * sizeof(struct cadastro));
    if (vetor == NULL) {
        printf("Erro ao alocar memória.\n");
        exit(1);
    }

    for (int i = 0; i < N; i++) {
        printf("Cadastro %d:\n", i + 1);

        limparEntrada();

        printf("Nome completo:\t");
        vetor[i].nome = lerString();

        printf("Idade:\t");
        scanf("%d", &vetor[i].idade);

        limparEntrada();

        printf("Rua:\t");
        vetor[i].local.logradouro = lerString();

        printf("Numero:\t");
        scanf("%d", &vetor[i].local.numeroRua);
    }

    return vetor;
}

int main() {
    int N;
    printf("Digite o número de cadastros: ");
    scanf("%d", &N);

    struct cadastro *pessoas = criarCadastro(N);

    printf("\n--- Dados cadastrados ---\n");
    for (int i = 0; i < N; i++) {
        printf("Pessoa %d:\n", i + 1);
        printf("Nome: %s\n", pessoas[i].nome);
        printf("Idade: %d\n", pessoas[i].idade);
        printf("Rua: %s\n", pessoas[i].local.logradouro);
        printf("Numero da rua: %d\n\n", pessoas[i].local.numeroRua);
    }

    liberarCadastro(pessoas, N);
    return 0;
}
