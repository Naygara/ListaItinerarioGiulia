#include <cassert>
#include <iostream>
#include "linked_list.h"

using namespace std;

// ===== TESTES DA FUNÇÃO criaLista =====
void teste_criaLista() {
    cout << "Testando criaLista()..." << endl;
    ListaSimplesmenteEncadeada* lista = criaLista();
    assert(lista != NULL);
    assert(lista->cardinalidade == 0);
    assert(lista->inicio == NULL);
    free(lista);
    cout << "criaLista() passou em todos os testes!" << endl;
}

// ===== TESTES DA FUNÇÃO insere (inserção no início) =====
void teste_insere() {
    cout << "Testando insere()..." << endl;
    ListaSimplesmenteEncadeada* lista = criaLista();

    insere(*lista, 10);
    assert(lista->cardinalidade == 1);
    assert(lista->inicio != NULL);
    assert(lista->inicio->conteudo == 10);
    assert(lista->inicio->proximo == NULL);

    insere(*lista, 20);
    assert(lista->cardinalidade == 2);
    assert(lista->inicio->conteudo == 20);
    assert(lista->inicio->proximo->conteudo == 10);

    insere(*lista, 30);
    assert(lista->cardinalidade == 3);
    assert(lista->inicio->conteudo == 30);
    assert(lista->inicio->proximo->conteudo == 20);
    assert(lista->inicio->proximo->proximo->conteudo == 10);

    destroiLista(*lista);
    free(lista);
    cout << "insere() passou em todos os testes" << endl;
}

// ===== TESTES DA FUNÇÃO destroiLista =====
void teste_destroiLista() {
    cout << "Testando destroiLista()..." << endl;
    ListaSimplesmenteEncadeada* lista = criaLista();

    insere(*lista, 1);
    insere(*lista, 2);
    insere(*lista, 3);

    destroiLista(*lista);
    assert(lista->cardinalidade == 0);
    assert(lista->inicio == NULL);

    free(lista);
    cout << "destroiLista() passou em todos os testes" << endl;
}

// ===== NOVOS TESTES: INSERE E REMOVE POSIÇÃO =====
void teste_insere_remove_posicao() {
    cout << "Testando inserePosicao() e removePosicao()..." << endl;
    ListaSimplesmenteEncadeada* lista = criaLista();

    // Testando inserção em posições variadas
    inserePosicao(*lista, 10, 0); // 10
    inserePosicao(*lista, 30, 1); // 10 -> 30
    inserePosicao(*lista, 20, 1); // 10 -> 20 -> 30

    assert(lista->cardinalidade == 3);
    assert(lista->inicio->conteudo == 10);
    assert(lista->inicio->proximo->conteudo == 20);
    assert(lista->inicio->proximo->proximo->conteudo == 30);

    // Testando remoção do meio
    removePosicao(*lista, 1); // Remove o 20, fica: 10 -> 30
    assert(lista->cardinalidade == 2);
    assert(lista->inicio->proximo->conteudo == 30);

    // Testando remoção do início
    removePosicao(*lista, 0); // Remove o 10, fica: 30
    assert(lista->cardinalidade == 1);
    assert(lista->inicio->conteudo == 30);

    destroiLista(*lista);
    free(lista);
    cout << "inserePosicao() e removePosicao() passaram em todos os testes!" << endl;
}

// ===== NOVOS TESTES: INVERSÃO =====
void teste_inverteLista() {
    cout << "Testando inverteLista()..." << endl;
    ListaSimplesmenteEncadeada* lista = criaLista();

    insere(*lista, 3);
    insere(*lista, 2);
    insere(*lista, 1);

    inverteLista(*lista);
    assert(lista->inicio->conteudo == 3);
    assert(lista->inicio->proximo->conteudo == 2);
    assert(lista->inicio->proximo->proximo->conteudo == 1);

    destroiLista(*lista);
    free(lista);
    cout << "inverteLista() passou em todos os testes!" << endl;
}

// ===== NOVOS TESTES: FUNÇÕES AUXILIARES =====
void teste_auxiliares() {
    cout << "Testando mostraLista(), listaVazia() e numeroElementos()..." << endl;
    ListaSimplesmenteEncadeada* lista = criaLista();

    assert(listaVazia(*lista) == true);
    assert(numeroElementos(*lista) == 0);

    insere(*lista, 100);
    insere(*lista, 200);
    assert(listaVazia(*lista) == false);
    assert(numeroElementos(*lista) == 2);

    cout << "  -> Saida visual esperada: 200 -> 100 -> NULL" << endl;
    cout << "  -> Sua saida real:        ";
    mostraLista(*lista);

    destroiLista(*lista);
    free(lista);
    cout << "Funcoes auxiliares passaram em todos os testes!" << endl;
}

// ===== FUNÇÃO PRINCIPAL =====
int main() {
    cout << "\n=========================================" << endl;
    cout << " INICIANDO TESTES DE LINKED LIST" << endl;
    cout << "=========================================" << endl << endl;

    try {
        teste_criaLista();
        teste_insere();
        teste_destroiLista();
        
        // Chamada dos novos testes
        teste_insere_remove_posicao();
        teste_inverteLista();
        teste_auxiliares();

        cout << "\n=========================================" << endl;
        cout << " TODOS OS TESTES PASSARAM COM SUCESSO!" << endl;
        cout << "=========================================" << endl << endl;

        return 0;
    } catch (const exception& e) {
        cout << "\nErro durante os testes: " << e.what() << endl;
        return 1;
    } catch (const char* e) {
        cout << "\nErro durante os testes: " << e << endl;
        return 1;
    }
}
