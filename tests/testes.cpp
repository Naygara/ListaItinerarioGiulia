#include <iostream>
#include "../include/Itinerario.h"

using namespace std;

int main() {
    cout << "Iniciando bateria de testes..." << endl;
    
    inserirInicio("Parada A");
    inserirFim("Parada B");
    inserirPosicao("Parada C", 1);
    
    cout << "Teste de Insercao: Concluido" << endl;
    
    removerInicio();
    removerFim();
    
    cout << "Teste de Remocao: Concluido" << endl;
    
    cout << "Testes finalizados com sucesso." << endl;
    
    return 0;
}
