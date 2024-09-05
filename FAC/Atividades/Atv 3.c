#include <stdio.h>


void ordem(float num1, float num2,float num3, float *menor, float *meio, float *maior){
    
    (num1 > num2 && num1 > num3);
    
    *maior = num1;
    
    if ( num2 > num3){
        *meio = num2;
        *menor = num3;
    }
    
    else{
        
        *meio = num3;
        *menor = num2;
    }
    
    (num2 > num3 && num2 > num3);
        
        *maior = num2;
        
    if (num1 > num3){
        
        *meio = num1;
        *menor = num3;
    }
    else{
        
        *meio = num3;
        *menor = num1;
    }
    
    
    (num3 > num1 && num3 > num2);
    
        *maior = num3;
    
    if (num2 > num1){
        
        *meio = num2;
        *menor = num1;
    }
    else{
        
        *meio = num1;
        *menor = num2;
    }



    (num1 == num2 && num2 == num3);
        
        *maior = num1;
        *meio = num2;
        *menor = num3;
    
}


void main(){
    
    float num1, num2, num3, menor, meio, maior;
    
    printf( "Insira seu primeiro numero:");
    scanf( "%f", &num1);
    
    printf( "Insira seu segundo numero:");
    scanf( "%f", &num2);
    
    printf( "Insira seu terceiro numero:");
    scanf( "%f", &num3);
    
    ordem ( num1, num2,num3, &menor, &meio, &maior);
    
    printf("%.2f    %.2f    %.2f", menor, meio, maior);
    
    
}
