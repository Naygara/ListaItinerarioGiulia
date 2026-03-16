01 - Lista Simplesmente Encadeada (Linked List)
Aluna: Giulia Naygara Barboza (24203662)

Descrição:
Este repositório contém a implementação de um exercício de Lista Simplesmente Encadeada (Linked List) em C++. O projeto foi desenvolvido utilizando apenas alocação dinâmica de memória para a estrutura de Lista Dinâmica, sem o uso de estruturas de dados adicionais, cumprindo os requisitos do trabalho.

Funcionalidades:
As seguintes operações foram implementadas na estrutura da lista:
 * Criação/Inicialização: criar uma lista vazia
 * Inserção: início da lista
 * Liberar lista (destroi): Liberar a memória da lista
 * Mostrar lista: imprime os elementos da lista
 * Lista Vazia: verifica se lista está vazia
 * Número de Elementos: quantidade de elementos na lista
 * Inserção: posição específica
 * Remoção: elemento (node) de posição específica
 * Inversão: Inverter os elementos da lista
   
Pré-requisitos:
Ferramentas de Desenvolvimento necessárias para rodar o projeto:
 * Compilador: GCC/G++
 * Debugger: GDB
 * Editor: Visual Studio Code (feito nesse caso em Codespace)

   
Passo-a-passo para execução do projeto:

Instalação
 * Clone o repositório.
 * Certifique-se de ter o g++ e gdb instalados em seu sistema.
   
Fluxo Principal (Execução)
Para compilar o projeto manualmente via terminal:
g++ main.cpp src/linked_list.cpp -Iinclude -o main
./main

Fluxo de Testes
Para compilar e rodar os testes:
g++ tests/tests.cpp src/linked_list.cpp -Iinclude -o tests_bin
./tests_bin

Depuração (Debugging)
Via VSCode (Interface Gráfica)
O projeto já está configurado com os arquivos .vscode/tasks.json e .vscode/launch.json.
 * Abra a pasta do projeto no VSCode.
 * Coloque breakpoints clicando na margem esquerda do código.
 * Pressione F5 ou acesse a aba Run and Debug e clique em "Debug Linked List".
   
   O VSCode irá compilar o projeto com símbolos de debug (-g) automaticamente antes de iniciar a sessão.
Via CLI (Terminal com GDB)
Compilar com símbolos de debug:
g++ -g main.cpp src/linked_list.cpp -Iinclude -o main
Iniciar o GDB:
gdb ./main

Comandos básicos do GDB:
 * break main: Define um ponto de parada na função principal.
 * run (ou r): Inicia a execução do programa.
 * next (ou n): Executa a próxima linha de código.
 * step (ou s): Entra em uma função.
 * print <variavel> (ou p): Exibe o valor de uma variável.
 * continue (ou c): Continua a execução até o próximo breakpoint.
 * info breakpoints: Lista todos os breakpoints.
 * quit (ou q): Sai do GDB.
Fluxo de Exemplo:
(gdb) info breakpoints
(gdb) break main
(gdb) break criaLista()
(gdb) run
(gdb) next
(gdb) next
(gdb) print lista
(gdb) quit
