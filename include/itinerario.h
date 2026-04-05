#ifndef ITINERARIO_H
#define ITINERARIO_H

#include <string>

struct No {
    std::string nome;
    No* prox;
    No* ant;
};

void inserirInicio(std::string nome);
void inserirFim(std::string nome);
void inserirPosicao(std::string nome, unsigned int posicao);
void removerInicio();
void removerFim();
void buscarNome(std::string busca);
void listarIda();
void listarVolta();
void contarParadas();

#endif
