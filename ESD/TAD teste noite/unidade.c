#include "unidade.h"
#include <stdlib.h>
#include <stdio.h>

struct unidade {
    Horario* horarioSaida;
    int numeroEstufa;
};

UnidadeSalgado* uni_criar(int numeroEstufa) {
    UnidadeSalgado* u = malloc(sizeof(UnidadeSalgado));
    u->horarioSaida = hor_atual();
    u->numeroEstufa = numeroEstufa;
    return u;
}

UnidadeSalgado* uni_criarComHorario(Horario* h, int numeroEstufa) {
    UnidadeSalgado* u = malloc(sizeof(UnidadeSalgado));
    u->horarioSaida = h;
    u->numeroEstufa = numeroEstufa;
    return u;
}

void uni_liberar(UnidadeSalgado* u) {
    if (u) {
        hor_liberar(u->horarioSaida);
        free(u);
    }
}

int uni_tempoDeVitrine(UnidadeSalgado* u, Horario* consulta) {
    if (!u || !consulta) return -1;
    return hor_diferencaMinutos(u->horarioSaida, consulta);
}

int uni_ehMaisFresco(UnidadeSalgado* u1, UnidadeSalgado* u2, Horario* consulta) {
    int t1 = uni_tempoDeVitrine(u1, consulta);
    int t2 = uni_tempoDeVitrine(u2, consulta);

    if (t1 < t2) return 1;
    if (t1 == t2 && u1->numeroEstufa < u2->numeroEstufa) return 1;
    return 0;
}

int uni_getEstufa(UnidadeSalgado* u) {
    if (!u) return -1;
    return u->numeroEstufa;
}

Horario* uni_getHorario(UnidadeSalgado* u) {
    return u->horarioSaida;
}

char* uni_paraString(UnidadeSalgado* u, Horario* consulta) {
    char* hStr = hor_paraString(u->horarioSaida);
    int tempo = consulta ? uni_tempoDeVitrine(u, consulta) : 0;

    char* str = malloc(100);
    sprintf(str, "Estufa %d - Saída: %s - Tempo: %d min",
            u->numeroEstufa, hStr, tempo);

    free(hStr);
    return str;
}
