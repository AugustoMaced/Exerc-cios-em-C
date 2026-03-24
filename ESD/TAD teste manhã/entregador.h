//Augusto Macedo
#ifndef ENTREGADOR_H
#define ENTREGADOR_H

typedef struct entregador Entregador;

Entregador* entregador_criar(char* nome, char* veiculo);
void entregador_liberar(Entregador* e);

char* entregador_getNome(Entregador* e);

int entregador_estaDisponivel(Entregador* e);
void entregador_ocupar(Entregador* e);
void entregador_liberarStatus(Entregador* e);

void entregador_contabilizarEntrega(Entregador* e);

void entregador_imprimir(Entregador* e);

int entregador_getEntregas(Entregador* e);

#endif
