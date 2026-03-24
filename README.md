# Setup Tarefa: Lista Itinerário

## Descrição
Este projeto é um sistema interno em C++ desenvolvido para auxiliar motoristas e supervisores de rota de uma empresa de transporte coletivo[cite: 5]. [cite_start]O sistema utiliza listas encadeadas como estrutura de dados principal para gerenciar as paradas e evitar que ônibus pulem pontos ou sigam a ordem incorreta do trajeto[cite: 4, 6].

## Requisitos
- [cite_start]**Compilador:** GCC (g++) para compilação em C++[cite: 6].
- **IDE Recomendada:** VSCode com extensões para C/C++.

## Compilação e Execução

### Fluxo Principal
Para compilar e executar o código principal (na raiz do projeto):
`g++ -I include src/*.cpp main.cpp -o programa`
`.\programa.exe` (Windows) ou `./programa` (Linux/macOS)

### Testes
Para compilar e executar a suíte de testes:
`g++ -I include tests/*.cpp -o testes`
`.\testes.exe` (Windows) ou `./testes` (Linux/macOS)

---

## Pontos de Análise e Justificativa

**1. [cite_start]Qual variação de lista foi escolhida (simplesmente encadeada, duplamente encadeada ou circular)?** [cite: 11]
Foi escolhida a Lista Duplamente Encadeada.

**2. Por que essa estrutura é mais adequada para esse problema do que as demais? [cite_start]Justifique com base nas operações implementadas.** [cite: 12, 13]
[cite_start]A lista duplamente encadeada é a escolha ideal porque o menu do sistema exige a operação de "Listar rota em ordem inversa" (exibir o trajeto percorrido de trás para frente)[cite: 8]. Em uma lista simples, fazer o percurso reverso seria ineficiente (exigiria percorrer a estrutura toda várias vezes ou usar estruturas auxiliares). Com a lista dupla, os ponteiros para o nó anterior permitem essa travessia reversa de forma direta e rápida. [cite_start]Além disso, ter um ponteiro para o nó anterior facilita operações no final da lista, como a de "Remover última parada"[cite: 8].

**3. Haveria algum cenário real (ex: linha circular de ônibus) em que outra variação de lista seria mais vantajosa? [cite_start]Explique.** [cite: 14]
Sim. [cite_start]Em um cenário de uma linha de ônibus estritamente circular — onde o veículo chega ao ponto final e a próxima parada já é imediatamente o ponto inicial, recomeçando o trajeto sem pausas na garagem — uma Lista Circular seria a mais vantajosa[cite: 14]. Nesse caso, o ponteiro final da lista apontaria de volta para o primeiro nó, o que modelaria perfeitamente a lógica contínua e cíclica da rota no mundo real.
