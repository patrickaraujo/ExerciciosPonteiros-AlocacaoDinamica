# 📋 Cadastro de Pessoas em C

Este projeto implementa um sistema simples de cadastro de pessoas, incluindo nome, idade e endereço, utilizando alocação dinâmica em linguagem C.

---

## ⚙️ Lógica Implementada

1. **Uso de arrays fixos** de tamanho 100 para armazenar _strings_ (mais simples, porém menos flexível).
2. **Definição de duas estruturas:** `struct endereco` e `struct cadastro`.
3. **Sem uso de `typedef`**, ou seja, os tipos são utilizados com a palavra-chave `struct` explicitamente.
4. **Alocação dinâmica** de um vetor de `struct cadastro` com `malloc`.
5. **Leitura de dados** com `fgets()` (para strings) e `scanf()` (para inteiros).
6. **Tratamento do `\n`** das strings lidas com `fgets()` usando `strcspn()` para substituí-lo por `\0`.
7. **Impressão formatada** dos dados cadastrados.
8. **Liberação de memória** com `free()`.

---

## 📌 Diferença em relação ao código com `typedef`

Este código é equivalente ao da pasta `comTypedef`, com **a principal diferença sendo a ausência de `typedef`**.  
No código com `typedef`, os tipos `struct endereco` e `struct cadastro` são renomeados para `End` e `Cad`, respectivamente, permitindo chamadas mais curtas:

```c
// Código com typedef
typedef struct endereco End;
typedef struct cadastro Cad;

// Uso:
Cad *pessoas = criarCadastro(N);
```

Já neste código, o uso de `struct` é explícito:

```c
// Código atual (sem typedef)
struct cadastro *pessoas = criarCadastro(N);
```

Essa abordagem exige escrever sempre `struct` antes do tipo, o que pode tornar o código mais verboso, mas é útil para fins didáticos e compreensão da estrutura da linguagem C.

---

## 🚀 Como Compilar e Executar

```bash
gcc main.c -o main
./main
```

---

## 📚 Requisitos

- Compilador C (ex: `gcc`)
- Sistema Linux/macOS/Windows com terminal

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

A função `limparEntrada()` é usada antes de `fgets()` para garantir que o buffer de entrada esteja limpo, evitando problemas com `\n` deixados por `scanf()`.

---
