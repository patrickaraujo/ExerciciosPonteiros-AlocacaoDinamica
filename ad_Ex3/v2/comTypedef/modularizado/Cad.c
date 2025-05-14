#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "Cad.h"

void limparEntrada() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

char* lerString() {
    char buffer[1000];
    fgets(buffer, sizeof(buffer), stdin);
    buffer[strcspn(buffer, "\n")] = '\0'; // Remove o '\n'

    char *str = (char*) malloc(strlen(buffer) + 1);
    if (str == NULL) {
        printf("Erro ao alocar memória para string.\n");
        exit(1);
    }
    strcpy(str, buffer);
    return str;
}

void liberarCadastro(Cad *pessoas, int N) {
    for (int i = 0; i < N; i++) {
        free(pessoas[i].nome);
        free(pessoas[i].local.logradouro);
    }
    free(pessoas);
}
