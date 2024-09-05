/*Dada uma turma com 30 alunos, desenvolver um
programa que leia, para cada estudante, a sua
matrícula, nota na AV1 e nota na AV2. Ao final,
exibir:
1. Quantidade de alunos aprovados;
2. Quantidade de alunos reprovados;
3. Quantidade de alunos em AVF;
4. Percentual de alunos que apresentaram
aumento de desempenho da AV1 para a
AV2;
5. Matrícula do aluno que precisa tirar a maior
nota na AVF para ser aprovado.
Observações Gerais:
i. Conforme definido no critério de avaliação da
disciplina, a prova terá peso 8 na definição da nota
final da AV1;
ii. O tempo para a resolução das questões coincide com
o horário alocado à disciplina: 08:50h às 12:20h;
iii. Para a resolução das questões propostas, é permitida
a consulta apenas ao material trabalhado nas aulas;
iv. As resoluções devem apresentar apenas estruturas
estudadas até o momento nas aulas de FAC;
v. Os arquivos com as soluções devem ser postados no
Classroom, na atividade associada à AV1;
vi. Caso sejam detectadas soluções iguais/similares,
todos os alunos envolvidos ficarão sem nota, sem
direito à AVS.*/

#include <stdio.h>

int main() {
    float av1, av2, media, perctAumAlunos = 0;
    int matricula, alunosAprov = 0, alunosReprov = 0, avf = 0, i = 0;
    int alunos = 2, aumAlunos = 0;

    for (i = 0; i < alunos; i++) {
        printf("Digite o numero da sua matricula: ");
        scanf("%d", &matricula);

        printf("Digite a sua nota da AV1: ")
        scanf("%f", &av1);

        printf("Digite a sua nota da AV2: ");
        scanf("%f", &av2);

        media = (av1 + av2) / 2;

        if (media >= 6) {
            alunosAprov++;
        } else {
            alunosReprov++;
        }

        if (media <= 4) {
            avf++;
        }

        if (av2 > av1) {
            aumAlunos++;
        }
    }

    perctAumAlunos = (float)aumAlunos / alunos * 100;

    printf("A quantidade de alunos aprovados foi: %d\n", alunosAprov);
    printf("A quantidade de alunos reprovados foi: %d\n", alunosReprov);
    printf("A quantidade de alunos em AVF foi: %d\n", avf);
    printf("O percentual de alunos que tiveram um aumento na nota foi de: %.2f%%\n", perctAumAlunos);

    return 0;
}
