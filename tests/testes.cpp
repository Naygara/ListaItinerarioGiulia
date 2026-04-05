#include <iostream>
#include "../include/Itinerario.h"

using namespace std;

int main() {
    cout << "Iniciando testes gerais das implementacoes..." << endl;
    
    inserirInicio("Estacao Central");
    inserirFim("Terminal Norte");
    inserirPosicao("Praca da Matriz", 1);
    
    cout << "Lista de Ida:" << endl;
    listarIda();
    
    cout << "Contagem de paradas:" << endl;
    contarParadas();
    
    cout << "Lista de Volta:" << endl;
    listarVolta();
    
    cout << "Busca por nome (Matriz):" << endl;
    buscarNome("Matriz");
    
    cout << "Busca por nome (Inexistente):" << endl;
    buscarNome("Praia");
    
    removerInicio();
    removerFim();
    
    cout << "Lista apos remocoes:" << endl;
    listarIda();
    
    cout << "Testes finalizados." << endl;
    
    return 0;
}
