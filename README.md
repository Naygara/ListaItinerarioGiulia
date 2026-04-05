# Sistema de Gerenciamento de Itinerário

## Descrição
Sistema interno desenvolvido em C++ para auxiliar motoristas e supervisores de rota de uma empresa de transporte coletivo municipal. O sistema permite gerenciar as paradas de ônibus, garantindo a ordem correta do trajeto utilizando uma estrutura de Lista Duplamente Encadeada.

## Requisitos
* Compilador GCC (g++) versão 11 ou superior.
* IDE recomendada: Visual Studio Code (VSCode).

## Compilação e Execução

### Fluxo Principal
Para compilar o código do fluxo principal, abra o terminal na raiz do projeto e execute o comando:
```bash
g++ src/Itinerario.cpp main.cpp -o sistema_itinerario

##Para executar o programa gerado:
./sistema_itinerario

## Para tests:
g++ src/Itinerario.cpp tests/testes.cpp -o testes
./testes

    1. Qual variação de lista foi escolhida (simplesmente encadeada, duplamente encadeada ou circular)?
Foi escolhida a lista duplamente encadeada.

2. Por que essa estrutura é mais adequada para esse problema do que as demais? Justifique com base nas operações implementadas.
A lista duplamente encadeada mantém um ponteiro tanto para o próximo nó quanto para o nó anterior. Essa característica é fundamental para executar a operação "Listar rota em ordem inversa" de forma eficiente, permitindo percorrer a lista a partir do último nó até o primeiro sem a necessidade de lógicas complexas ou de travessias repetitivas de complexidade O(N²). Além disso, a operação "Remover última parada" torna-se muito mais rápida (O(1)), pois temos acesso direto ao penúltimo nó através do ponteiro de retorno do último nó, bastando atualizar as conexões. Em uma lista simplesmente encadeada, seria necessário percorrer todo o trajeto desde o início apenas para remover o último elemento.

3. Haveria algum cenário real (ex: linha circular de ônibus) em que outra variação de lista seria mais vantajosa? Explique.
Sim, em uma linha de ônibus estritamente circular, a variação de "Lista Circular" (simples ou duplamente encadeada) seria muito mais vantajosa. Em uma linha circular, o ponto final do trajeto conecta-se naturalmente e de forma contínua de volta ao ponto inicial. Ao utilizar uma lista circular, o ponteiro "próximo" do último nó aponta diretamente para o primeiro nó da lista. Essa estrutura modela a realidade perfeitamente, permitindo que o sistema acompanhe o ônibus dando voltas ininterruptas na rota sem precisar reiniciar artificialmente a travessia no código toda vez que o fim da linha for atingido.
