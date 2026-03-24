#ifndef TIPO_H
#define TIPO_H

#include "unidade.h"

typedef struct tipo TipoSalgado;

TipoSalgado* tipo_criar(char* nome, char* lote, float preco);
void tipo_liberar(TipoSalgado* ts);

void tipo_adicionarUnidade(TipoSalgado* ts, UnidadeSalgado* u);
void tipo_reajustePreco(TipoSalgado* ts, float percentual);

int tipo_temUnidadeAntiga(TipoSalgado* ts, Horario* consulta, int minutos);
int tipo_buscarPorHorario(TipoSalgado* ts, Horario* horario, int* indices);

char* tipo_paraString(TipoSalgado* ts);
char* tipo_paraStringDetalhado(TipoSalgado* ts, Horario* consulta);

#endif
