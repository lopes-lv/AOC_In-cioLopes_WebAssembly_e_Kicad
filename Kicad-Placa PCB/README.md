# Projeto de Multiplexador 4x1 no KiCad



Este projeto, parte da Atividade 02, consiste no desenvolvimento do esquemático elétrico de um **multiplexador (MUX) de 4 para 1** utilizando o software KiCad, visando a criação de uma PCB.



## ⚙️ Componentes e Lógica



O circuito implementado é um multiplexador de 4x1, um componente digital que seleciona uma das quatro entradas de dados (`D0` a `D3`) e a encaminha para uma única saída, com base em duas linhas de seleção (`S0`, `S1`).



* **Portas Lógicas Utilizadas:**

    1.  **NOT** (Inversoras, ex: 74HCU04) - Para inverter os sinais de seleção.

    2.  **AND** (ex: 74HC08) - Para combinar os sinais de seleção com a entrada de dado correspondente.

    3.  **OR** (ex: 74HC32) - Para unir os resultados das portas AND na saída final.



* **Lógica de Funcionamento (Soma de Produtos):**

    A saída final é a soma (OR) dos produtos (AND) de cada entrada de dado e seu respectivo termo de seleção (mintermo).



    * `Saida = (D0 \cdot S1' \cdot S0') + (D1 \cdot S1' \cdot S0) + (D2 \cdot S1 \cdot S0') + (D3 \cdot S1 \cdot S0)`



* **Tabela Verdade de Seleção:**



| S1 | S0 | Saida Selecionada |



| 0 | 0 | D0 |

| 0 | 1 | D1 |

| 1 | 0 | D2 |

| 1 | 1 | D3 |



## 🚀 Entregáveis da Atividade



Conforme solicitado na atividade:



### 1. Esquemático e Layout da PCB

* O **esquemático elétrico** foi concluído com sucesso no KiCad (imagem na pasta).

* O **layout da PCB** (desenho da placa de circuito impresso) não pôde ser finalizado devido a dificuldades técnicas.



### 2. Valor de Fabricação da PCB

* Como o layout da PCB não foi concluído, não foi possível gerar os arquivos Gerber necessários para o orçamento. Portanto, o valor de fabricação não foi cotado.

