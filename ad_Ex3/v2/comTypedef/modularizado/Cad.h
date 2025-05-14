#ifndef CAD_H_INCLUDED
#define CAD_H_INCLUDED

typedef struct {
    char *logradouro;
    int numeroRua;
} End;

typedef struct {
    char *nome;
    int idade;
    End local;
} Cad;

void limparEntrada();
char* lerString();
void liberarCadastro(Cad *pessoas, int N);


#endif // CAD_H_INCLUDED
