#include <iostream>
#include <cstdlib> // Para o uso do NULL
#include "linked_list.h"

using namespace std;

// 1. Criação/Inicialização
ListaSimplesmenteEncadeada* criaLista() {
    ListaSimplesmenteEncadeada* lista = new ListaSimplesmenteEncadeada;
    lista->cardinalidade = 0;
    lista->inicio = NULL;
    return lista;
}

// 2. Inserção: início da lista
void insere(ListaSimplesmenteEncadeada &lista, int conteudo) {
    Node* novo = new Node;
    novo->conteudo = conteudo;
    novo->proximo = lista.inicio;
    
    lista.inicio = novo;
    lista.cardinalidade++;
}

// 3. Liberar lista (destroi)
void destroiLista(ListaSimplesmenteEncadeada &lista) {
    Node* atual = lista.inicio;
    while (atual != NULL) {
        Node* proximo = atual->proximo;
        delete atual;
        atual = proximo;
    }
    lista.inicio = NULL;
    lista.cardinalidade = 0;
}

// 4. Mostrar lista
void mostraLista(ListaSimplesmenteEncadeada &lista) {
    Node* atual = lista.inicio;
    while (atual != NULL) {
        cout << atual->conteudo << " -> ";
        atual = atual->proximo;
    }
    cout << "NULL" << endl;
}

// 5. Lista Vazia
bool listaVazia(ListaSimplesmenteEncadeada &lista) {
    return lista.inicio == NULL;
}

// 6. Número de Elementos
int numeroElementos(ListaSimplesmenteEncadeada &lista) {
    return lista.cardinalidade;
}

// 7. Inserção
void inserePosicao(ListaSimplesmenteEncadeada &lista, int conteudo, int posicao) {
    if (posicao <= 0 || lista.inicio == NULL) {
        insere(lista, conteudo);
        return;
    }

    Node* atual = lista.inicio;
    for (int i = 0; i < posicao - 1 && atual->proximo != NULL; i++) {
        atual = atual->proximo;
    }

    Node* novo = new Node;
    novo->conteudo = conteudo;
    novo->proximo = atual->proximo;
    atual->proximo = novo;
    lista.cardinalidade++;
}

// 8. Remoção
void removePosicao(ListaSimplesmenteEncadeada &lista, int posicao) {
    if (lista.inicio == NULL) return;

    Node* temp = lista.inicio;

    if (posicao == 0) {
        lista.inicio = temp->proximo;
        delete temp;
        lista.cardinalidade--;
        return;
    }

    for (int i = 0; i < posicao - 1 && temp != NULL; i++) {
        temp = temp->proximo;
    }

    if (temp == NULL || temp->proximo == NULL) return;

    Node* noRemover = temp->proximo;
    temp->proximo = noRemover->proximo;
    delete noRemover;
    lista.cardinalidade--;
}

// 9. Inversão

void inverteLista(ListaSimplesmenteEncadeada &lista) {
    Node* anterior = NULL;
    Node* atual = lista.inicio;
    Node* proximo = NULL;
    
    while (atual != NULL) {
        proximo = atual->proximo;
        atual->proximo = anterior;
        anterior = atual;
        atual = proximo;
    }
    lista.inicio = anterior; 
}
