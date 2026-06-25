# CEFET-MG — Centro Federal de Educação Tecnológica de Minas Gerais
## Engenharia de Computação | Lógica de Programação
**Professora:** Kecia Marques  
**Trabalho Prático 2:** Cadastro de Despesas  

---

## 📌 Sobre o Projeto

Este repositório contém o desenvolvimento do **Trabalho Prático 2**, que consiste em um sistema de **Cadastro de Despesas** desenvolvido na linguagem **C**. O objetivo principal é aplicar conceitos de estruturas de dados homogêneas (vetores), modularização por meio de funções, manipulação de strings e lógica de programação estruturada.

O aplicativo permite que o usuário gerencie suas finanças mantendo os seguintes dados para cada despesa:
* **Descrição** (identificador único para alteração/exclusão)
* **Valor**
* **Mês**
* **Ano**

---

## 🚀 Funcionalidades Obrigatórias

O programa mantém o cadastro em um vetor e implementa as seguintes operações:

* **➕ Inclusão de despesa:** Permite cadastrar uma nova despesa. *Regra de negócio:* Não é permitida a inclusão de mais de uma despesa com a mesma descrição.
* **🔍 Pesquisa:** O usuário informa a descrição da despesa e o programa exibe todos os seus dados correspondentes.
* **📋 Listagem:** O sistema lista na tela todas as despesas atualmente cadastradas.
* **✏️ Alteração de despesa:** O usuário informa a descrição da despesa que deseja modificar. O programa exibe os dados atuais e solicita as novas informações. *Nota:* A descrição funciona como chave primária e não pode ser alterada.
* **❌ Exclusão de despesa:** O usuário informa a descrição da despesa a ser eliminada. Se encontrada, o programa exibe os dados e solicita uma confirmação formal. O registro só é excluído se o usuário confirmar.

---

## ⚠️ Regras e Diretrizes de Entrega

* **Formato:** Individual ou em dupla.
* **Submissão:** O trabalho deve ser entregue via **SIGAA** e apresentado presencialmente para a professora no laboratório.
* **Apresentação:** Ocorrerá exclusivamente na data determinada. O não comparecimento ou a falta de domínio do código por qualquer integrante implica em **avaliação nula (nota zero)**.
* **Plágio:** Trabalhos com conteúdos parcial ou totalmente iguais aos de outros grupos receberão **avaliação nula**.

---

## 📊 Critérios de Avaliação

A professora avaliará rigorosamente os seguintes aspectos do desenvolvimento do software:

1.  **Correção:** Execução do programa e conformidade com os requisitos.
2.  **Legibilidade:** Uso de nomes significativos para variáveis e funções, organização estrutural do código e uso adequado de comentários explicativos.
3.  **Modularidade:** Divisão correta do fluxo do programa através do uso adequado de funções.
4.  **Domínio Técnico:** Avaliação do domínio que cada membro do grupo possui sobre o trabalho implementado, demonstrado durante a apresentação.

---

## 📦 Conteúdo da Entrega

O artefato final a ser compactado e enviado deve conter:
1.  **Códigos-fonte:** Arquivo(s) `.c` devidamente estruturado(s).
2.  **Documentação (Formatos `.doc` ou `.pdf`):**
    * **Apresentação:** Descrição clara do objetivo do programa.
    * **Exemplo de Execução:** Demonstração visual do funcionamento das principais funcionalidades do sistema através de capturas de tela (*prints*) do terminal.

---

## 🛠️ Tecnologias Utilizadas

* **Linguagem:** C
* **Ambiente/Compilador:** GCC
