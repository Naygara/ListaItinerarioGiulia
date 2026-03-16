# 01 - Lista Simplesmente Encadeada (Linked List)
​Aluna: Giulia Naygara Barboza
Instituição: UNIVALI - Escola Politécnica (Ciência da Computação)
## Descrição
Exercício com Lista Simplesmente Encadeada (Linked List). O projeto implementa as funcionalidades de uma Lista Encadeada com alocação dinâmica de memória

## Funcionalidades
- [x] Criação/Inicialização: criar uma lista vazia
- [x] Mostrar lista: imprime os elementos da lista
- [x] Lista Vazia: verifica se lista está vazia
- [x] Número de Elementos: quantidade de elementos na lista
- [x] Inserção: início da lista
- [x] Inserção: posição específica
- [x] Remoção: elemento (node) de posição específica
- [x] Inversão: Inverter os elementos da lista
- [x] Destruição: Liberar a memória da lista

## Pré-requisitos

## Ferramentas de Desenvolvimento
-​Compilador C++:
​Windows: MinGW-w64 (gcc) ou MSVC (Visual Studio)
​Linux: g++
-​CMake para build automatizado

##​Instalação
​Clone o repositório:
git clone https://github.com/Naygara/01-exercicio-linked-list
​Build do projeto:
​Linux:
mkdir build && cd build
cmake ..
make

Ou com Makefile:
make build

Windows (executando a partir de Windows):
mkdir build && cd build
# Gera os arquivos de build (usando MinGW)
cmake .. -G "MinGW Makefiles"
# Ou usando MSVC (se tiver Visual Studio instalado)
cmake .. -G "Visual Studio 17 2022"
# Compila
cmake --build .

##Execução
​Fluxo de Execução
​Após o build do projeto, executar via CLI:
./build/linked_list

O CLI irá mostrar algo como:
Exercício de Linked List
------------------------
-- Lista inicial --
Conteúdo: 35
Conteúdo: 99
Conteúdo: 10
-- Lista invertida --
Conteúdo: 10
Conteúdo: 99
Conteúdo: 35
Cardinalidade da Lista: 3
Posição conteúdo: 2
Impressão da lista após remoção
Conteúdo: 10
Conteúdo: 35
Lista após destruir: cardinalidade = 0

Fluxo de Testes
​Para buildar os testes do projeto, executar o comando abaixo:
​Criar a pasta "build", caso ela não exista:
mkdir build 

Executar o comando de build com a flag de testes ativada:
cd build
cmake -DBUILD_TESTS=ON .. 

Gerar os executáveis:
make 

Executar os testes:
./tests 

A saída será algo como:
=========================================
INICIANDO TESTES DE LINKED LIST
=========================================
Testando criaLista()...
✓ criaLista() passou em todos os testes

Testando insere()...
✓ insere() passou em todos os testes

Testando listaVazia()...
✓ listaVazia() passou em todos os testes

Testando numElementos()...
✓ numElementos() passou em todos os testes

Testando existeElemento()...
✓ existeElemento() passou em todos os testes

Testando posicaoConteudo()...
✓ posicaoConteudo() passou em todos os testes

Testando inserePosicao()...
✓ inserePosicao() passou em todos os testes

Testando removeElementoPosicao()...
✓ removeElementoPosicao() passou em todos os testes

Testando esvaziaLista()...
✓ esvaziaLista() passou em todos os testes

Testando inverteLista()...
✓ inverteLista() passou em todos os testes

Testando destroiLista()...
✓ destroiLista() passou em todos os testes
=========================================
✓ TODOS OS TESTES PASSARAM COM SUCESSO!
=========================================

