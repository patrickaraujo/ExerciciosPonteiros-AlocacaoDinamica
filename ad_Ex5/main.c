#include <stdio.h>
#include <stdlib.h>

// Função para ler um valor inteiro não negativo maior que 0
int ler_valor_n() {
    int n;
    do {
        printf("Digite um valor inteiro positivo (N >= 1): ");
        scanf("%d", &n);
        if (n < 1) {
            printf("Valor inválido. Tente novamente.\n");
        }
    } while (n < 1);
    return n;
}

// Função para alocar o vetor dinamicamente
int* alocar_vetor(int tamanho) {
    int* vetor = (int*) malloc(tamanho * sizeof(int));
    if (vetor == NULL) {
        printf("Erro ao alocar memória.\n");
        exit(1);
    }
    return vetor;
}

// Função para ler os elementos do vetor (maiores ou iguais a 2)
void ler_vetor(int* vetor, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        do {
            printf("Digite o elemento %d (>= 2): ", i + 1);
            scanf("%d", &vetor[i]);
            if (vetor[i] < 2) {
                printf("Valor inválido. Tente novamente.\n");
            }
        } while (vetor[i] < 2);
    }
}

// Função para imprimir o vetor
void imprimir_vetor(int* vetor, int tamanho) {
    printf("Elementos do vetor: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main() {
    int N = ler_valor_n();
    int* V = alocar_vetor(N);
    ler_vetor(V, N);
    imprimir_vetor(V, N);
    free(V);
    return 0;
}
