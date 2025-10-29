# Calculadora em C com WebAssembly

Este projeto demonstra como compilar um programa C simples para WebAssembly (Wasm) e executá-lo em um navegador.

O programa C (`calculadora.c`) não é interativo. Em vez disso, ele define quatro funções de cálculo básicas (soma, subtração, multiplicação e divisão) e as executa uma vez dentro da função `main()` com valores pré-definidos (25 e 5). O resultado é então impresso no console.

## ⚙️ Pré-requisitos

Para compilar e executar este projeto, você precisará de:

1.  **Emscripten SDK:** Um kit de ferramentas para compilar C/C++ para WebAssembly.
2.  **Python:** Usado para iniciar um servidor web local e servir os arquivos para o navegador. O Emscripten SDK já inclui uma versão do Python.

## 🚀 Como Compilar e Executar

Siga estes passos para compilar o código C e vê-lo rodando no seu navegador.

### 1. Ativar o Ambiente Emscripten

Antes de compilar, você precisa ativar o ambiente Emscripten em um novo terminal.

1.  Abra um novo **Prompt de Comando (`cmd`)**.
2.  Navegue até a pasta onde você instalou o `emsdk`:
    ```cmd
    cd C:\emsdk
    ```
3.  Execute o script de ativação:
    ```cmd
    emsdk_env.bat
    ```

### 2. Compilar o Projeto

1.  Com o ambiente ainda ativo, navegue até a pasta deste projeto (onde o arquivo `calculadora.c` está localizado):
    ```cmd
    cd C:\caminho\para\seu\projeto
    ```
2.  Use o compilador `emcc` para compilar o código C. Usamos a flag `-o calculadora.html` para que o Emscripten gere automaticamente o módulo `.wasm`, o "cola" `.js` e um arquivo `.html` de visualização:
    ```cmd
    emcc calculadora.c -o calculadora.html
    ```
    Isso criará três arquivos: `calculadora.html`, `calculadora.js`, e `calculadora.wasm`.

### 3. Iniciar o Servidor Local

Os navegadores modernos exigem que o WebAssembly seja carregado a partir de um servidor (protocolo `http://`) por razões de segurança, e não diretamente do sistema de arquivos (`file://`).

1.  No mesmo terminal (ainda na pasta do projeto), inicie o servidor local do Python:
    ```cmd
    py -m http.server
    ```
    *(Nota: Se `py` não for encontrado, tente usar `python -m http.server`)*

2.  O servidor será iniciado na porta 8000. Mantenha este terminal aberto.

### 4. Ver o Resultado

1.  Abra seu navegador web (Chrome, Firefox, Edge, etc.).
2.  Na barra de endereço, digite:
    ```
    http://localhost:8000/calculadora.html
    ```
3.  A página será carregada (provavelmente com um fundo preto) e um console embutido na página exibirá os resultados.

## 📄 Resultado Esperado

O console dentro da página `calculadora.html` deve exibir a saída do programa C:
