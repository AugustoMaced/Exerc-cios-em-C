#include "tipo.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct tipo {
    char nome[30];
    char lote[10];
    float preco;
    int qtd;
    UnidadeSalgado** unidades;
};

TipoSalgado* tipo_criar(char* nome, char* lote, float preco) {
    TipoSalgado* ts = malloc(sizeof(TipoSalgado));
    strcpy(ts->nome, nome);
    strcpy(ts->lote, lote);
    ts->preco = preco;
    ts->qtd = 0;
    ts->unidades = NULL;
    return ts;
}

void tipo_adicionarUnidade(TipoSalgado* ts, UnidadeSalgado* u) {
    ts->unidades = realloc(ts->unidades, (ts->qtd + 1) * sizeof(UnidadeSalgado*));
    ts->unidades[ts->qtd] = u;
    ts->qtd++;
}

void tipo_liberar(TipoSalgado* ts) {
    for (int i = 0; i < ts->qtd; i++) {
        uni_liberar(ts->unidades[i]);
    }
    free(ts->unidades);
    free(ts);
}

void tipo_reajustePreco(TipoSalgado* ts, float percentual) {
    ts->preco += ts->preco * (percentual / 100.0);
}

int tipo_temUnidadeAntiga(TipoSalgado* ts, Horario* consulta, int minutos) {
    for (int i = 0; i < ts->qtd; i++) {
        if (uni_tempoDeVitrine(ts->unidades[i], consulta) >= minutos)
            return 1;
    }
    return 0;
}

int tipo_buscarPorHorario(TipoSalgado* ts, Horario* h, int* indices) {
    int count = 0;
    for (int i = 0; i < ts->qtd; i++) {
        if (hor_comparar(uni_getHorario(ts->unidades[i]), h) == 0) {
            indices[count++] = i;
        }
    }
    return count;
}

char* tipo_paraString(TipoSalgado* ts) {
    char* str = malloc(100);
    sprintf(str, "%s | Lote: %s | Preço: R$ %.2f | Qtd: %d",
            ts->nome, ts->lote, ts->preco, ts->qtd);
    return str;
}

char* tipo_paraStringDetalhado(TipoSalgado* ts, Horario* consulta) {
    char* base = tipo_paraString(ts);
    char* str = malloc(1000);

    strcpy(str, base);
    strcat(str, "\nUnidades:\n");

    for (int i = 0; i < ts->qtd; i++) {
        char* uStr = uni_paraString(ts->unidades[i], consulta);
        strcat(str, "  [");
        char idx[5];
        sprintf(idx, "%d", i+1);
        strcat(str, idx);
        strcat(str, "] ");
        strcat(str, uStr);
        strcat(str, "\n");
        free(uStr);
    }

    free(base);
    return str;
}
