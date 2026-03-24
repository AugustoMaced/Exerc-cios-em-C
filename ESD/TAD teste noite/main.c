#include <stdio.h>
#include "tipo.h"

int main() {

    printf("=== CONTROLE DE FRESCOR ===\n\n");

    // Criando tipos
    TipoSalgado* coxinha = tipo_criar("Coxinha", "COX01", 5.0);
    TipoSalgado* empada = tipo_criar("Empada", "EMP02", 6.0);
    TipoSalgado* joelho = tipo_criar("Joelho", "JOE03", 4.5);

    // Adicionando unidades
    tipo_adicionarUnidade(coxinha, uni_criarComHorario(hor_criar(8,0),1));
    tipo_adicionarUnidade(coxinha, uni_criarComHorario(hor_criar(9,30),1));
    tipo_adicionarUnidade(coxinha, uni_criarComHorario(hor_criar(10,0),2));

    tipo_adicionarUnidade(empada, uni_criarComHorario(hor_criar(8,30),1));
    tipo_adicionarUnidade(empada, uni_criarComHorario(hor_criar(9,0),2));
    tipo_adicionarUnidade(empada, uni_criarComHorario(hor_criar(10,30),1));

    tipo_adicionarUnidade(joelho, uni_criarComHorario(hor_criar(7,0),1));
    tipo_adicionarUnidade(joelho, uni_criarComHorario(hor_criar(8,0),2));

    // Estado inicial
    printf("=== ESTADO INICIAL DA VITRINE ===\n");

    char* s;

    s = tipo_paraStringDetalhado(coxinha, NULL);
    printf("%s\n", s); free(s);

    s = tipo_paraStringDetalhado(empada, NULL);
    printf("%s\n", s); free(s);

    s = tipo_paraStringDetalhado(joelho, NULL);
    printf("%s\n", s); free(s);

    // Entrada
    int h, m;
    printf("\nHorario atual (hora minuto): ");
    scanf("%d %d", &h, &m);

    Horario* agora = hor_criar(h, m);

    printf("\n=== ANALISE DE FRESCOR ===\n");
    char* hStr = hor_paraString(agora);
    printf("Horário de referência: %s\n\n", hStr);
    free(hStr);

    TipoSalgado* tipos[3] = {coxinha, empada, joelho};

    for (int i = 0; i < 3; i++) {
        s = tipo_paraString(tipos[i]);
        printf("%s\n", s); free(s);

        int indices[10];
        int qtd = tipo_buscarPorHorario(tipos[i], agora, indices);

        printf("Unidades das %02d:%02d: ", h, m);
        if (qtd == 0) printf("Nenhuma\n");
        else {
            for (int j = 0; j < qtd; j++) {
                printf("Estufa %d ", uni_getEstufa(tipos[i]->unidades[indices[j]]));
            }
            printf("\n");
        }

        if (tipo_temUnidadeAntiga(tipos[i], agora, 30)) {
            float novo = tipos[i]->preco * 0.75;
            printf("Promocao 25%%: APLICAR (R$ %.2f)\n", novo);
        } else {
            printf("Promocao 25%%: NAO (tudo fresco)\n");
        }

        printf("\n");
    }

    // Teste frescor
    printf("=== TESTE DE COMPARACAO ===\n");

    UnidadeSalgado* u1 = coxinha->unidades[0];
    UnidadeSalgado* u2 = coxinha->unidades[1];

    if (uni_ehMaisFresco(u2, u1, agora))
        printf("B é mais fresco que A\n");
    else
        printf("A é mais fresco\n");

    // Liberar memória
    tipo_liberar(coxinha);
    tipo_liberar(empada);
    tipo_liberar(joelho);
    hor_liberar(agora);

    printf("\nMemoria liberada.\n");

    return 0;
}
