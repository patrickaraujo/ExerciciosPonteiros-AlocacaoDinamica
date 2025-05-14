# 📌 Alocação Dinâmica de Vetor

**Prof. Me. Patrick Araújo**  
**Aula 11 (Alocação Dinâmica) - Estrutura de Dados e Algoritmos**  
**14 de Maio de 2025**

---

## 📝 Descrição do Projeto

Implementação em C de um programa que realiza a alocação dinâmica de um vetor de inteiros, desenvolvido como atividade prática sobre uso de ponteiros e alocação dinâmica de memória.

**Objetivo:**
- Ler do usuário o tamanho de um vetor, alocar dinamicamente o vetor, preencher seus elementos e imprimir os valores.
- Exercício 4 do Capítulo 11 do livro *"Linguagem C: Completa e Descomplicada"* (André Backes, Elsevier, 2013), desenvolvido como atividade prática sobre alocação dinâmica.

---

## 📚 Enunciado Original

"Elabore um programa em _C_ que leia do usuário o tamanho de um vetor a ser lido. Em seguida, faça a alocação dinâmica desse vetor. Por fim, leia o vetor do usuário e o imprima."

---

## 🛠 Funcionamento

### 🔧 Tecnologias Utilizadas
- Linguagem C
- Biblioteca padrão (`stdio.h`, `stdlib.h`)

### ⚙️ Lógica Implementada
1. Leitura do tamanho do vetor fornecido pelo usuário
2. Alocação dinâmica de memória com `malloc`
3. Verificação de sucesso na alocação
4. Leitura dos elementos do vetor com `scanf`
5. Impressão dos elementos na tela
6. Liberação da memória com `free`

---

## 📥 Entradas
1. Um número inteiro representando o tamanho do vetor
2. `n` números inteiros para preenchimento dos elementos do vetor

---

## 📤 Saídas
1. Mensagens de solicitação de entrada
2. Lista dos elementos digitados, impressos em sequência

---

## 🚀 Como Executar

```bash
gcc main.c -o main
./main
```
