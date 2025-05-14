# 📋 Exercício 3: Cadastro de Pessoas com Vetores e Alocação Dinâmica

**Prof. Me. Patrick Araújo**  
**Aula 11 (Alocação Dinâmica) - Estrutura de Dados e Algoritmos**  
**14 de Maio de 2025**

---

## 📝 Descrição do Projeto

- Implementação em _C_ de um exercício prático sobre alocação dinâmica e manipulação de estruturas, baseado na proposta de criar um cadastro de pessoas com nome, idade e endereço.
- Exercício 3 do Capítulo 11 do livro *"Linguagem C: Completa e Descomplicada"* (André Backes, Elsevier, 2013), desenvolvido como atividade prática sobre alocação dinâmica.

**Objetivo:**  
Criar uma estrutura chamada `Cadastro`, armazenar os dados de `N` pessoas alocados dinamicamente, preenchê-los com entrada do usuário e exibir os dados ao final.

---

## 📁 Pastas

- v1: versões com arrays de tamanho fixos para as _strings_ com `typedef` e com uso explícito de `struct`;
- v2: versões com alocação dinâmica (`malloc`) para as _strings_ com `typedef` e com uso explícito de `struct`. Há subpastas com uma versão modularizadas e sem modularização.

---

## 📚 Enunciado Original

"Crie uma estrutura chamada `Cadastro`. Essa estrutura deve conter o nome, a idade e o endereço de uma pessoa.  
Agora, escreva uma função que receba um inteiro positivo `N` e retorne o ponteiro para um vetor de tamanho `N`, alocado dinamicamente, dessa estrutura.  
Solicite também que o usuário digite os dados desse vetor dentro da função."

---

## 🛠 Funcionamento

### 🔧 Tecnologias Utilizadas
- Linguagem C
- Biblioteca padrão (`stdio.h`, `string.h`, `stdlib.h`)

### 📥 Entradas
1. Número inteiro positivo `N` (quantidade de cadastros)
2. Para cada pessoa:
   - Nome (completo)
   - Idade
   - Rua
   - Número da rua

### 📤 Saídas
1. Dados de todos os cadastros inseridos, formatados
