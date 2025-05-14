#ifndef CADASTRO_H_INCLUDED
#define CADASTRO_H_INCLUDED

struct endereco {
    char *logradouro;
    int numeroRua;
};

struct cadastro {
    char *nome;
    int idade;
    struct endereco local;
};

void limparEntrada();
char* lerString();
void liberarCadastro(struct cadastro *pessoas, int N);

#endif // CADASTRO_H_INCLUDED
