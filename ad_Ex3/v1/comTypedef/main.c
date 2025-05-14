#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char logradouro[100];
    int numeroRua;
} End;

typedef struct {
    char nome[100];
    int idade;
    End local;
} Cad;

void limparEntrada() {
    getchar();  // Lê eventuais '\n's
    setbuf(stdin, NULL); // Limpa o buffer do teclado (entrada padrão)
}

Cad* criarCadastro(int N) {
    if (N <= 0)
        return NULL;

    Cad *vetor = (Cad*) malloc(N * sizeof(Cad));
    if (vetor == NULL) {
        printf("Erro ao alocar memória.\n");
        exit(1);
    }

    for (int i = 0; i < N; i++) {
        printf("Cadastro %d:\n", i + 1);

        limparEntrada();

        printf("Nome completo:\t");
        fgets(vetor[i].nome, sizeof(vetor[i].nome), stdin);
        vetor[i].nome[strcspn(vetor[i].nome, "\n")] = '\0';

        printf("Idade:\t");
        scanf("%d", &vetor[i].idade);

        limparEntrada();

        printf("Rua:\t");
        fgets(vetor[i].local.logradouro, sizeof(vetor[i].local.logradouro), stdin);
        vetor[i].local.logradouro[strcspn(vetor[i].local.logradouro, "\n")] = '\0';

        printf("Numero:\t");
        scanf("%d", &vetor[i].local.numeroRua);
    }

    return vetor;
}

int main() {
    int N;
    printf("Digite o número de cadastros: ");
    scanf("%d", &N);

    Cad *pessoas = criarCadastro(N);

    printf("\n--- Dados cadastrados ---\n");
    for (int i = 0; i < N; i++) {
        printf("Pessoa %d:\n", i + 1);
        printf("Nome: %s\n", pessoas[i].nome);
        printf("Idade: %d\n", pessoas[i].idade);
        printf("Rua: %s\n", pessoas[i].local.logradouro);
        printf("Numero da rua: %d\n\n", pessoas[i].local.numeroRua);
    }

    free(pessoas);
    return 0;
}
