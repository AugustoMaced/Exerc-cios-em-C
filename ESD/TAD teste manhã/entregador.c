//Augusto Macedo
#include "entregador.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct entregador {
   char nome[50];
   char veiculo[20];
   int disponivel;
   int entregas;
};

Entregador* entregador_criar(char* nome, char* veiculo) {
   Entregador* e = malloc(sizeof(Entregador));
   strcpy(e->nome, nome);
   strcpy(e->veiculo, veiculo);
   e->disponivel = 1;
   e->entregas = 0;
   return e;
}

void entregador_liberar(Entregador* e) {
   free(e);
}

char* entregador_getNome(Entregador* e) {
   return e->nome;
}

int entregador_estaDisponivel(Entregador* e) {
   return e->disponivel;
}

void entregador_ocupar(Entregador* e) {
   e->disponivel = 0;
}

void entregador_liberarStatus(Entregador* e) {
   e->disponivel = 1;
}

void entregador_contabilizarEntrega(Entregador* e) {
   e->entregas++;
}

int entregador_getEntregas(Entregador* e) {
    return e->entregas;
}


void entregador_imprimir(Entregador* e) {
   printf("%s | %s | %s | Entregas: %d\n",
       e->nome,
       e->veiculo,
       e->disponivel ? "Disponível" : "Ocupado",
       e->entregas);
}
