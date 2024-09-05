# include <stdio.h>

int main(){
	
		int a=0, b=0, c=0, d=0;
		
		while (a<=21){
			
			a += 2 + b;
			
			b = (a/2)+1;
			
			c=(b/a);
			
			printf("\n a=%d b=%d c=%d", a, b, c);
			
		}
	
			d = ((a+b+c)-1)/2;
	
			printf ("\nd=%d", d);
	
}
