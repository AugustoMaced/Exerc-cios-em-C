//Augusto Macedo
#include <stdio.h>
#include <stdlib.h>
#include "entregador.h"
#include "pedido.h"
#include "apoio.h"
#include "horario.h"

int main() {

    printf("=== SISTEMA DE ENTREGAS RÁPIDO EXPRESS ===\n\n");

    // Vetores fixos
    Entregador* entregadores[5];
    Pedido* pedidos[8];

    // Criando entregadores
    entregadores[0] = entregador_criar("Carlos Moto", "Moto");
    entregadores[1] = entregador_criar("Ana Bike", "Bicicleta");
    entregadores[2] = entregador_criar("Pedro Carro", "Carro");

    // Criando pedidos
    pedidos[0] = pedido_criar(1, "João Silva", 32.5, 8, 15);
    pedidos[1] = pedido_criar(2, "Maria Santos", 45.9, 8, 30);
    pedidos[2] = pedido_criar(3, "Pedro Oliveira", 28.0, 8, 45);
    pedidos[3] = pedido_criar(4, "Ana Costa", 67.3, 9, 0);

    // ENTREGADORES 
    printf("=== ENTREGADORES CADASTRADOS ===\n");
    for (int i = 0; i < 3; i++) {
        printf("[%d] ", i + 1);
        entregador_imprimir(entregadores[i]);
    }

    //  PEDIDOS 
    printf("\n=== PEDIDOS RECEBIDOS ===\n");
    for (int i = 0; i < 4; i++) {
        pedido_imprimir(pedidos[i]);
    }

    // CONSULTA
    int h, m;
    printf("\n=== CONSULTA ===\n");
    printf("Horario atual para simulação (hora minuto): ");
    scanf("%d %d", &h, &m);

    Horario* agora = hor_criar(h, m);
    char* hStr = hor_paraString(agora);

    printf("\n=== INICIANDO OPERAÇÕES (referência: %s) ===\n\n", hStr);
    free(hStr);

    // ATRIBUIÇÕES 
    int i1 = buscarEntregadorLivre(entregadores, 3);
    pedido_atribuir(pedidos[0], entregadores[i1], h, m);
    printf("%02d:%02d - Atribuindo Pedido #1 para %s\n",
           h, m, entregador_getNome(entregadores[i1]));

    int i2 = buscarEntregadorLivre(entregadores, 3);
    pedido_atribuir(pedidos[1], entregadores[i2], h, m);
    printf("%02d:%02d - Atribuindo Pedido #2 para %s\n",
           h, m, entregador_getNome(entregadores[i2]));

    //  STATUS 
    printf("\n=== PEDIDOS EM ROTA / PENDENTES ===\n");
    for (int i = 0; i < 4; i++) {
        pedido_imprimir(pedidos[i]);
    }

    //  ENTREGAS 
    pedido_entregar(pedidos[0], h, m + 25);
    printf("\n%02d:%02d - Pedido #1 ENTREGUE por %s\n",
           h, m + 25, entregador_getNome(entregadores[i1]));
    printf("Tempo total: %dmin | Tempo em rota: %dmin\n",
           pedido_tempoTotal(pedidos[0]),
           pedido_tempoRota(pedidos[0]));

    pedido_entregar(pedidos[1], h, m + 40);
    printf("\n%02d:%02d - Pedido #2 ENTREGUE por %s\n",
           h, m + 40, entregador_getNome(entregadores[i2]));
    printf("Tempo total: %dmin | Tempo em rota: %dmin\n",
           pedido_tempoTotal(pedidos[1]),
           pedido_tempoRota(pedidos[1]));

    // Novo pedido entra em rota
    int i3 = buscarEntregadorLivre(entregadores, 3);
    pedido_atribuir(pedidos[2], entregadores[i3], h, m + 40);
    printf("\n%02d:%02d - Atribuindo Pedido #3 para %s\n",
           h, m + 40, entregador_getNome(entregadores[i3]));

    pedido_entregar(pedidos[2], h, m + 70);
    printf("\n%02d:%02d - Pedido #3 ENTREGUE por %s\n",
           h, m + 70, entregador_getNome(entregadores[i3]));
    printf("Tempo total: %dmin | Tempo em rota: %dmin\n",
           pedido_tempoTotal(pedidos[2]),
           pedido_tempoRota(pedidos[2]));

    //  RESUMO
    printf("\n=== RESUMO FINAL ===\n\n");

    printf("Pedidos Realizados: 3\n");
    printf("Faturamento Total: R$ %.2f\n",
           calcularFaturamento(pedidos, 4));

    // SITUAÇÃO 
    printf("\n=== SITUAÇÃO DOS PEDIDOS ===\n");
    for (int i = 0; i < 4; i++) {
        pedido_imprimir(pedidos[i]);
    }

    //  ESTATÍSTICAS 
    printf("\n=== ESTATÍSTICAS DOS ENTREGADORES ===\n");
    for (int i = 0; i < 3; i++) {
        printf("%s | Entregas: %d\n",
               entregador_getNome(entregadores[i]),
               entregador_getEntregas(entregadores[i]));
    }

    //  MELHOR 
    int melhor = melhorEntregador(entregadores, 3);

    printf("\n=== MELHOR ENTREGADOR DO DIA ===\n");
    printf("%s | %d entregas\n",
           entregador_getNome(entregadores[melhor]),
           entregador_getEntregas(entregadores[melhor]));

    // LIBERAÇÃO
    for (int i = 0; i < 3; i++) {
        entregador_liberar(entregadores[i]);
    }

    for (int i = 0; i < 4; i++) {
        pedido_liberar(pedidos[i]);
    }

    hor_liberar(agora);

    printf("\n=== SISTEMA FINALIZADO. MEMÓRIA LIBERADA ===\n");

    return 0;
}