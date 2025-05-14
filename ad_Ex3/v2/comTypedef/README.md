# 📋 Cadastro de Pessoas em C (com `typedef` e alocação dinâmica de strings)

Este projeto é uma variação mais avançada do sistema de cadastro de pessoas, utilizando `typedef` **e** alocação dinâmica para _strings_. Isso torna o programa mais eficiente no uso de memória e mais próximo das boas práticas em _C_ moderno.

---

## ⚙️ Lógica Implementada

1. **Uso de `typedef`** para simplificar o uso das estruturas `End` (endereço) e `Cad` (cadastro completo).
2. **Alocação dinâmica de memória para strings**, permitindo armazenar nomes e logradouros de qualquer tamanho (limitado apenas pela entrada e memória disponível).
3. **Função auxiliar `lerString()`** para leitura segura de strings com alocação de memória.
4. **Função auxiliar `limparEntrada()`** para evitar problemas de buffer entre `scanf` e `fgets`.
5. **Alocação dinâmica de um vetor de `Cad`** usando `malloc`.
6. **Impressão formatada dos dados** ao final da execução.
7. **Liberação de toda memória alocada dinamicamente** com a função `liberarCadastro()`.

---

## 🆚 Diferença em relação ao código da versão da pasta `v1` com `typedef` (estático)

| Característica                     | Código anterior (`typedef`) | Este código (`typedef` + dinâmico)       |
|-----------------------------------|-----------------------------|-------------------------------------------|
| Armazenamento de strings          | Arrays fixos (`char[100]`)  | Ponteiros com `malloc` (`char*`)          |
| Flexibilidade para nomes longos   | Limitada                    | Alta (alocação conforme necessidade)       |
| Uso de `typedef`                  | Sim                         | Sim                                        |
| Liberação de memória              | `free(vetor)`               | `free` para cada string e para o vetor     |
| Leitura de strings                | `fgets()` direto no array   | `lerString()` com `malloc`                |

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
Digite o número de cadastros: 1
Cadastro 1:
Nome completo: Ana Beatriz
Idade: 28
Rua: Rua Azul do Horizonte
Numero: 999

--- Dados cadastrados ---
Pessoa 1:
Nome: Ana Beatriz
Idade: 28
Rua: Rua Azul do Horizonte
Numero da rua: 999
```

---

## 🧹 Observação

Este código evita o desperdício de memória típico de arrays fixos ao usar `malloc` para strings. Porém, requer atenção redobrada com `free()` para evitar vazamentos de memória.

---
