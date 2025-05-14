#include <stdio.h>
#include <stdlib.h>

// Função para alocar dinamicamente o vetor
int* alocar_vetor(int tamanho) {
    int* vetor = (int*) malloc(tamanho * sizeof(int));
    if (vetor == NULL) {
        printf("Erro ao alocar memória!\n");
        exit(1); // Encerra o programa em caso de erro
    }
    return vetor;
}

// Função para ler os valores do vetor
void ler_vetor(int* vetor, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
}

// Função para imprimir os valores do vetor
void imprimir_vetor(int* vetor, int tamanho) {
    printf("Elementos do vetor: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main() {
    int tamanho;
    int* vetor;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    if (tamanho <= 0) {
        printf("Tamanho inválido!\n");
        return 1;
    }

    vetor = alocar_vetor(tamanho);
    ler_vetor(vetor, tamanho);
    imprimir_vetor(vetor, tamanho);

    // Libera a memória alocada
    free(vetor);

    return 0;
}
