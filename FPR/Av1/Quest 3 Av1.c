#include <stdio.h>
#include <string.h>

struct Professor {
    int codigo;
    char nome[50];
};

struct Disciplina {
    int codigo;
    char nomDisciplina[50];
};

struct Relacao {
    int codigoProfessor;
    int codigoDisciplina;
    char semestreAno[10];
};

void mostrarDisciplinas(struct Professor professores[], int Numprofessores, struct Disciplina disciplinas[], int Numdisciplinas, struct Relacao relacoes[], int Numrelacoes) {
    for (int i = 0; i < Numprofessores; i++) {
        printf("O professor %s deu aula nas seguintes Disciplinas:\n", professores[i].nome);
        for (int j = 0; j < Numrelacoes; j++) {
            if (professores[i].codigo == relacoes[j].codigoProfessor) {
                for (int k = 0; k < Numdisciplinas; k++) {
                    if (disciplinas[k].codigo == relacoes[j].codigoDisciplina) {
                        printf("- %s\n", disciplinas[k].nomDisciplina);
                    }
                }
            }
        }
        printf("\n");
    }
}

//chamando a main
int main() {
    int CodProfessores, CodDisciplinas, Numrelacoes; //declarando as variaveis

//pedindo as informações dos Professores
    printf("Quantos professores deseja cadastrar? ");
    scanf("%d", &CodProfessores);
    struct Professor professores[CodProfessores];

    for (int i = 0; i < CodProfessores; i++) {
        printf("Informe o código do professor %d: ", i + 1);
        scanf("%d", &professores[i].codigo);
        printf("Informe o nome do professor %d: ", i + 1);
        scanf("%s", professores[i].nome);
    }

//Pedindo as informações das Disciplinas
    printf("Quantas disciplinas deseja cadastrar? ");
    scanf("%d", &CodDisciplinas);
    struct Disciplina disciplinas[CodDisciplinas];

    for (int i = 0; i < CodDisciplinas; i++) {
        printf("Informe o código da disciplina %d: ", i + 1);
        scanf("%d", &disciplinas[i].codigo);
        printf("Informe o nome da disciplina %d: ", i + 1);
        scanf("%s", disciplinas[i].nomDisciplina);
    }

    printf("Quantos Professores deseja cadastrar? ");
    scanf("%d", &Numrelacoes);
    struct Relacao relacoes[Numrelacoes];

//
    for (int i = 0; i < Numrelacoes; i++) {
        printf("Informe o código do professor para a relação %d: ", i + 1);
        scanf("%d", &relacoes[i].codigoProfessor);
        printf("Informe o código da disciplina para a relação %d: ", i + 1);
        scanf("%d", &relacoes[i].codigoDisciplina);
        printf("Informe o semestre/ano para a relação %d: ", i + 1);
        scanf("%s", relacoes[i].semestreAno);
    }

    mostrarDisciplinas(professores, CodProfessores, disciplinas, CodDisciplinas, relacoes, Numrelacoes);

    return 0;
}


