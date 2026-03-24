#include <stdio.h>

typedef struct {
	char nome[10];
	int idade ;
	int pref [4];
	}top;
	
void preencher (top *ent) {

	int i;
		
	printf("Dados?\n");
	
	scanf("%s", ent->nome);
	scanf("%d", &ent->idade);
	

	for(i=0; i<4; i++){
		scanf("%d", &ent->pref[i]);
	}
}

int main (){
	
	int i;
	
	top ent1 ;
	
	preencher(&ent1);
	
	printf("\n Nome: %s\n", ent1.nome);
	printf("idade: %d \n", ent1.idade);
	
	printf("Preferencias: ");
	for(i =0; i < 4; i++) {
		printf("%d ", ent1.pref[i]);
	}
	return 0;
}

/*
Cdigo do amigo

#include <stdio.h>
#include <stdlib.h>
struct opiniao{
    char nome[15];
    int idade;
    int vPref[4];
};
typedef struct opiniao TOp;

void preenche(TOp *pont);
void exibir(TOp *pont);

int main()
{
    printf("Hello World");
    
    TOp vEnt1[3];
    TOp *vEnt2;
    
    vEnt2 = (TOp *) malloc (3 *sizeof (TOp));
    
    for(int i=0; i < 3; i++){
        
        preenche(&vEnt2[i]);
    }    
    for(int i=0; i < 3; i++){
        
        exibir(&vEnt2[i]);
    }
    
    

    return 0;
}

void preenche(TOp *pont){

    
    printf("ENTRE COM SEU NOME: ");
    scanf(" %[^\n]", pont -> nome);
    
    printf("\nentre com sua idade:");
    scanf("%d", &pont-> idade);
    
    for(int i = 0; i<3; i++){
        printf("\nentre com sua nota:   ");
        scanf("%d", &pont -> vPref[i]);
    }
    }
    
    


void exibir(TOp *pont){
    printf("\nseu nome: %s", pont -> nome);
    printf("\nSua idade: %d", pont -> idade);
    for(int i = 0; i<3; i++){
        printf("\nsua nota:  %d", pont -> vPref[i]);
        
    }
    }
    */
