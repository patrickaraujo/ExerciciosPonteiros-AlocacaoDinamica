# 📌 Exercício 5: Validação e Alocação Dinâmica de Vetor

**Prof. Me. Patrick Araújo**  
**Aula 11 (Alocação Dinâmica) - Estrutura de Dados e Algoritmos**  
**14 de Maio de 2025**

---

## 📝 Descrição do Projeto

Implementação em C de um programa que valida um valor N fornecido pelo usuário, aloca dinamicamente um vetor de inteiros e garante que seus elementos sejam maiores ou iguais a 2.

**Objetivo:**  
Garantir a entrada correta do valor N (positivo) e dos elementos do vetor (>= 2), realizando alocação dinâmica.

---

## 📚 Enunciado Original

"Faça um programa que leia um valor inteiro N não negativo. Se o valor de N for inválido, o usuário deverá digitar outro até que ele seja válido (ou seja, positivo). Em seguida, leia um vetor V contendo N posições de inteiros, em que cada valor deverá ser maior ou igual a 2. Esse vetor deverá ser alocado dinamicamente."

---

## 🛠 Funcionamento

### 🔧 Tecnologias Utilizadas
- Linguagem C
- Biblioteca padrão (`stdio.h`, `stdlib.h`)

### ⚙️ Lógica Implementada
1. Validação do valor de N (deve ser positivo)
2. Alocação dinâmica do vetor com `malloc`
3. Leitura dos elementos do vetor, validando que cada valor seja >= 2
4. Impressão do vetor
5. Liberação da memória com `free`

---

## 📥 Entradas
1. Um valor inteiro N (deve ser >= 1)
2. N inteiros, cada um >= 2

---

## 📤 Saídas
1. Mensagens orientando o usuário
2. Elementos válidos do vetor

---

## 🚀 Como Executar

```bash
gcc main.c -o main
./main
```
