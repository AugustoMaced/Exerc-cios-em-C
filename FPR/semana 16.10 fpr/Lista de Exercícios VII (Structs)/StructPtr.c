/*programa usando struct e ponteiros
  ler e exibir funções de um estudante */
  
  #include <stdio.h>
  
  int main(){
  	
  struct estudante{
  	int nMatricula;
  	char nome[30];
  	float vMensalidade;
  	char dataBacharelado [30];
  	
  };
  
  //declarando variavel do tipo struct eestudante
  //declara variavel do tipo ponteiro de struct estudante
  struct estudante stud1, *ptr_stud1;
  
  ptr_stud1 = &stud1;
  printf ("\n Entre com a matricula");
  scanf("%d",&ptr_stud1->nMatricula);
  
  printf ("\n Entre com nome");
  scanf("%s",&ptr_stud1->nome);
    
  printf ("\n Entre com o valor da Mensalidade");
  scanf("%f",&ptr_stud1->vMensalidade);
  
  printf ("\n Entre com a data do bacharelado");
  scanf("%s",&ptr_stud1->dataBacharelado);   
  
  //exibir coleta de dados
  printf("\n ********CADASTRO DO ESTUDANTE********");
  printf("\n No. Matricula = %d", ptr_stud1->nMatricula);
  printf("\n Nome = %s", ptr_stud1->nome);
  printf("\n Val. Mensalidade = %9.2f", ptr_stud1->vMensalidade);
  printf("\n data Bacharelado = %s", ptr_stud1->dataBacharelado);
 
 return 0; 
};
