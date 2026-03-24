//Augusto Macedo
#include "apoio.h"

int buscarEntregadorLivre(Entregador* e[], int qtd) {
    for (int i = 0; i < qtd; i++) {
        if (entregador_estaDisponivel(e[i]))
            return i;
    }
    return -1;
}

int buscarPedidoPorID(Pedido* p[], int qtd, int id) {
    for (int i = 0; i < qtd; i++) {
        if (pedido_getID(p[i]) == id)
            return i;
    }
    return -1;
}

float calcularFaturamento(Pedido* p[], int qtd) {
    float total = 0;
    for (int i = 0; i < qtd; i++) {
        if (pedido_getStatus(p[i]) == 2) {
            total += pedido_getValor(p[i]);  // ✔ correto agora
        }
    }
    return total;
}

int melhorEntregador(Entregador* e[], int qtd) {
    int melhor = 0;

    for (int i = 1; i < qtd; i++) {
        if (entregador_getEntregas(e[i]) > entregador_getEntregas(e[melhor])) {
            melhor = i;
        }
    }

    return melhor;
}