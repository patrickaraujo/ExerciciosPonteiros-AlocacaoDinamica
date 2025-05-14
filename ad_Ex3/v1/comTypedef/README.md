# 📋 Cadastro de Pessoas em C (Versão com `typedef`)

Este projeto implementa um sistema simples de cadastro de pessoas, incluindo nome, idade e endereço, com uso de `typedef` para tornar o código mais legível e conciso.

---

## ⚙️ Lógica Implementada

1. **Uso de arrays fixos** de tamanho 100 para armazenar _strings_.
2. **Uso de `typedef`** para definir os tipos `End` (para endereço) e `Cad` (para cadastro completo).
3. **Alocação dinâmica** de um vetor de `Cad` com `malloc`.
4. **Leitura de dados** com `fgets()` (para strings) e `scanf()` (para inteiros).
5. **Remoção de `\n`** das strings com `strcspn()` após `fgets()`.
6. **Impressão formatada** dos dados coletados.
7. **Liberação de memória** com `free()`.

---

## ✨ Vantagens do uso de `typedef`

O uso de `typedef` permite simplificar a sintaxe ao declarar variáveis e ponteiros de estruturas. Em vez de repetir `struct cadastro`, podemos apenas usar `Cad`. Isso torna o código mais limpo e fácil de ler, especialmente em programas maiores.

### Exemplo:

```c
typedef struct {
    char logradouro[100];
    int numeroRua;
} End;

typedef struct {
    char nome[100];
    int idade;
    End local;
} Cad;

// Uso direto sem 'struct':
Cad *pessoas = criarCadastro(N);
```

---

## 🚀 Como Compilar e Executar

```bash
gcc main.c -o main
./main
```

---

## 📚 Requisitos

- Compilador C (como `gcc`)
- Terminal Linux/macOS/Windows

---

## ✅ Exemplo de Execução

```
Digite o número de cadastros: 2
Cadastro 1:
Nome completo: João da Silva
Idade: 30
Rua: Av. Brasil
Numero: 123

Cadastro 2:
Nome completo: Maria Souza
Idade: 25
Rua: Rua das Flores
Numero: 456

--- Dados cadastrados ---
Pessoa 1:
Nome: João da Silva
Idade: 30
Rua: Av. Brasil
Numero da rua: 123

Pessoa 2:
Nome: Maria Souza
Idade: 25
Rua: Rua das Flores
Numero da rua: 456
```

---

## 🧹 Observação

A função `limparEntrada()` é usada antes de `fgets()` para garantir que o buffer de entrada esteja limpo, evitando quebras de fluxo de leitura causadas por `\n` deixados por `scanf()`.

---
