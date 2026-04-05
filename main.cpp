#include <iostream>
#include "include/Itinerario.h"

using namespace std;

int main() {
    int opcao = -1;
    string nomeBusca;
    string nomeInserir;
    unsigned int posicaoInserir;

    while (opcao != 0) {
        cout << "\n--- MENU ---" << endl;
        cout << "1. Inserir parada no inicio" << endl;
        cout << "2. Inserir parada no fim" << endl;
        cout << "3. Inserir parada por posicao" << endl;
        cout << "4. Remover primeira parada" << endl;
        cout << "5. Remover ultima parada" << endl;
        cout << "6. Buscar parada por nome" << endl;
        cout << "7. Listar rota completa (ida)" << endl;
        cout << "8. Listar rota em ordem inversa" << endl;
        cout << "9. Contar paradas" << endl;
        cout << "0. Sair" << endl;
        cout << "Escolha: ";
        cin >> opcao;
        cin.ignore();

        switch (opcao) {
            case 1:
                cout << "Nome da parada: ";
                getline(cin, nomeInserir);
                inserirInicio(nomeInserir);
                break;
            case 2:
                cout << "Nome da parada: ";
                getline(cin, nomeInserir);
                inserirFim(nomeInserir);
                break;
            case 3:
                cout << "Nome da parada: ";
                getline(cin, nomeInserir);
                cout << "Posicao (0 para inicio): ";
                cin >> posicaoInserir;
                inserirPosicao(nomeInserir, posicaoInserir);
                break;
            case 4:
                removerInicio();
                break;
            case 5:
                removerFim();
                break;
            case 6:
                cout << "Nome para buscar: ";
                getline(cin, nomeBusca);
                buscarNome(nomeBusca);
                break;
            case 7:
                listarIda();
                break;
            case 8:
                listarVolta();
                break;
            case 9:
                contarParadas();
                break;
            case 0:
                break;
            default:
                cout << "Opcao invalida." << endl;
        }
    }
    return 0;
}
