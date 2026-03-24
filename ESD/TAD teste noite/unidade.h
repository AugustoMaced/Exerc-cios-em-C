#ifndef UNIDADE_H
#define UNIDADE_H

#include "Horario.h"

typedef struct unidade UnidadeSalgado;

UnidadeSalgado* uni_criar(int numeroEstufa);
UnidadeSalgado* uni_criarComHorario(Horario* h, int numeroEstufa);
void uni_liberar(UnidadeSalgado* u);

int uni_tempoDeVitrine(UnidadeSalgado* u, Horario* horarioConsulta);
int uni_ehMaisFresco(UnidadeSalgado* u1, UnidadeSalgado* u2, Horario* horarioConsulta);

int uni_getEstufa(UnidadeSalgado* u);
Horario* uni_getHorario(UnidadeSalgado* u);

char* uni_paraString(UnidadeSalgado* u, Horario* consulta);

#endif
