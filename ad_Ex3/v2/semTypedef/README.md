# 📋 Cadastro de Pessoas em C (sem `typedef`, com alocação dinâmica de strings)

Este projeto apresenta um sistema de cadastro de pessoas utilizando `struct` diretamente (sem `typedef`) e alocação dinâmica de memória para as strings, o que permite maior flexibilidade e uso mais eficiente da memória.

---

## ⚙️ Lógica Implementada

1. **Uso direto de `struct`**, sem simplificação via `typedef`.
2. **Alocação dinâmica de memória para strings** com a função `lerString()`, permitindo nomes e ruas de qualquer tamanho.
3. **Função `limparEntrada()`** garante que o buffer esteja limpo após entradas numéricas.
4. **Criação dinâmica de vetor de `struct cadastro`** com `malloc`.
5. **Liberação correta de memória alocada**, incluindo strings internas.
6. **Impressão formatada** dos dados cadastrados.

---

## 🚀 Como Compilar e Executar

Este projeto está contido em um único arquivo-fonte.

### Comando para compilar no terminal:

```bash
gcc main.c -o cadastro
./cadastro
```

(Substitua `main.c` pelo nome real do arquivo, caso esteja diferente.)

---

## 📚 Requisitos

- Compilador C (como `gcc`)
- Terminal Linux/macOS/Windows

---

## ✅ Exemplo de Execução

```
Digite o número de cadastros: 1
Cadastro 1:
Nome completo: João da Silva
Idade: 35
Rua: Avenida Central
Numero: 1010

--- Dados cadastrados ---
Pessoa 1:
Nome: João da Silva
Idade: 35
Rua: Avenida Central
Numero da rua: 1010
```

---

## 🧹 Observação

Mesmo sem `typedef`, o uso de ponteiros para strings e alocação dinâmica torna o programa flexível. Contudo, requer atenção especial ao uso de `free()` para evitar vazamentos de memória.

---

A representação das estruturas (structs) aqui usam ponteiros (char*) para strings, o que requer alocação dinâmica de memória (malloc, free), o que torna mais flexível, pois strings podem ter tamanhos variáveis.
