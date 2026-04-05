#include "../include/Itinerario.h"
#include <iostream>

using namespace std;

No* inicioLista = nullptr;
No* fimLista = nullptr;
unsigned int totalParadas = 0;

void inserirInicio(string nome) {
    No* novo = new No;
    novo->nome = nome;
    novo->prox = inicioLista;
    novo->ant = nullptr;

    if (inicioLista != nullptr) {
        inicioLista->ant = novo;
    } else {
        fimLista = novo;
    }
    inicioLista = novo;
    totalParadas++;
}

void inserirFim(string nome) {
    No* novo = new No;
    novo->nome = nome;
    novo->prox = nullptr;
    novo->ant = fimLista;

    if (fimLista != nullptr) {
        fimLista->prox = novo;
    } else {
        inicioLista = novo;
    }
    fimLista = novo;
    totalParadas++;
}

void inserirPosicao(string nome, unsigned int posicao) {
    if (posicao == 0) {
        inserirInicio(nome);
        return;
    }
    if (posicao >= totalParadas) {
        inserirFim(nome);
        return;
    }

    No* atual = inicioLista;
    for (unsigned int i = 0; i < posicao; i++) {
        atual = atual->prox;
    }

    No* novo = new No;
    novo->nome = nome;
    novo->prox = atual;
    novo->ant = atual->ant;

    atual->ant->prox = novo;
    atual->ant = novo;
    totalParadas++;
}

void removerInicio() {
    if (inicioLista == nullptr) return;

    No* temp = inicioLista;
    inicioLista = inicioLista->prox;

    if (inicioLista != nullptr) {
        inicioLista->ant = nullptr;
    } else {
        fimLista = nullptr;
    }

    delete temp;
    totalParadas--;
}

void removerFim() {
    if (fimLista == nullptr) return;

    No* temp = fimLista;
    fimLista = fimLista->ant;

    if (fimLista != nullptr) {
        fimLista->prox = nullptr;
    } else {
        inicioLista = nullptr;
    }

    delete temp;
    totalParadas--;
}

void buscarNome(string busca) {
    No* atual = inicioLista;
    bool encontrou = false;
    unsigned int pos = 0;

    while (atual != nullptr) {
        if (atual->nome.find(busca) != string::npos) {
            cout << pos << " - " << atual->nome << endl;
            encontrou = true;
        }
        atual = atual->prox;
        pos++;
    }

    if (!encontrou) {
        cout << "Nenhuma parada encontrada." << endl;
    }
}

void listarIda() {
    No* atual = inicioLista;
    while (atual != nullptr) {
        cout << atual->nome << " -> ";
        atual = atual->prox;
    }
    cout << "FIM" << endl;
}

void listarVolta() {
    No* atual = fimLista;
    while (atual != nullptr) {
        cout << atual->nome << " -> ";
        atual = atual->ant;
    }
    cout << "INICIO" << endl;
}

void contarParadas() {
    cout << "Total de paradas: " << totalParadas << endl;
}
