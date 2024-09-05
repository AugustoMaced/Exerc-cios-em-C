/*Dada uma turma com 30 alunos, desenvolver um
programa que leia, para cada estudante, a sua
matr�cula, nota na AV1 e nota na AV2. Ao final,
exibir:
1. Quantidade de alunos aprovados;
2. Quantidade de alunos reprovados;
3. Quantidade de alunos em AVF;
4. Percentual de alunos que apresentaram
aumento de desempenho da AV1 para a
AV2;
5. Matr�cula do aluno que precisa tirar a maior
nota na AVF para ser aprovado.
Observa��es Gerais:
i. Conforme definido no crit�rio de avalia��o da
disciplina, a prova ter� peso 8 na defini��o da nota
final da AV1;
ii. O tempo para a resolu��o das quest�es coincide com
o hor�rio alocado � disciplina: 08:50h �s 12:20h;
iii. Para a resolu��o das quest�es propostas, � permitida
a consulta apenas ao material trabalhado nas aulas;
iv. As resolu��es devem apresentar apenas estruturas
estudadas at� o momento nas aulas de FAC;
v. Os arquivos com as solu��es devem ser postados no
Classroom, na atividade associada � AV1;
vi. Caso sejam detectadas solu��es iguais/similares,
todos os alunos envolvidos ficar�o sem nota, sem
direito � AVS.*/

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
