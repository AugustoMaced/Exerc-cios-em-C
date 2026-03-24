//Augusto Macedo
#ifndef APOIO_H
#define APOIO_H

#include "entregador.h"
#include "pedido.h"

int buscarEntregadorLivre(Entregador* e[], int qtd);
int buscarPedidoPorID(Pedido* p[], int qtd, int id);
float calcularFaturamento(Pedido* p[], int qtd);
int melhorEntregador(Entregador* e[], int qtd);

#endif