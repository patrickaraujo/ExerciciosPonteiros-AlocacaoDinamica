#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct endereco{
    char logradouro[100];
    int numeroRua;
};

struct cadastro{
    char nome[100];
    int idade;
    struct endereco local;
};

void limparEntrada(){
    getchar();  //  Lê eventuais '\n's e armazena para não passar para a próxima leitura
    setbuf(stdin, NULL);    //  Isso limpa o buffer do teclado (entrada padrão) antes da leitura
}

struct cadastro* criarCadastro(int N) {
    if (N <= 0) return NULL;
    
    //  aloca dinâmicamente a struct cadastro
    struct cadastro *vetor = (struct cadastro*) malloc(N * sizeof(struct cadastro));

    if (vetor == NULL) {
        printf("Erro ao alocar memória.\n");
        exit(1);
    }

    for (int i = 0; i < N; i++) {
        printf("Cadastro %d:\n", i + 1);

        limparEntrada();

        printf("Nome completo:\t");
        fgets(vetor[i].nome, sizeof(vetor[i].nome), stdin); // Lê linha inteira (inclui espaços)
        vetor[i].nome[strcspn(vetor[i].nome, "\n")] = '\0'; //  a função fgets lê o '\n' também, isso substitui o '\n' por '\0', indicando o fim da string

        printf("Idade:\t", i+1);
        scanf("%d", &vetor[i].idade);

        limparEntrada();

        printf("Rua:\t", i+1);
        fgets(vetor[i].local.logradouro, sizeof(vetor[i].local.logradouro), stdin); // Lê linha inteira (inclui espaços)
        vetor[i].local.logradouro[strcspn(vetor[i].local.logradouro, "\n")] = '\0'; //  a função fgets lê o '\n' também, isso substitui o '\n' por '\0', indicando o fim da string

        printf("Numero:\t", i+1);
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

    free(pessoas); // Libera a memória alocada
    return 0;
}
