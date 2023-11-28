//Alexis Palomares Olegario
//Práctica #17
/*Número decimal entero a binario*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int n, r, p=0, s, fin;
	char respuesta='s';
	//n=numero, p=posicion, r=residuo. s=simulación
	
	while(respuesta=='s' || respuesta=='S'){
		
		system("cls");
	
		printf("Ingresa el numero entero a convertir en binario.\n");
		fflush(stdin);
		scanf("%d", &n);
	
		s=n;
	
		while(1<s){
			
			if(s%2==0){
			
				s=s/2;

			}
			else{
			
				s=(s-1)/2;
	
			}
			
			p=p+1;
			
		}
	
		p=p+1;
		fin=p;
		int binario[p];
		
		while(1<n){
		
			r=n%2;
		
			binario[p]=r;
		
			if(r==0){
			
				n=n/2;
			
			}
			else{
				
				n=(n-1)/2;
			
			}
		
			p=p-1;
			
		}
	
		binario[p]=n;
	
		printf("El resultado en binario es:\n");
	
		for(p;p<=fin;p++){
	
		printf("%d", binario[p]);
		}

		printf("\n");	
		printf("\n");
		system("pause");

		system("cls");
		
		printf("%cDeseas repetir el programa?(Escribe s o n)\n", 168);
		fflush(stdin);
		scanf("%c", &respuesta);

	}
	
	printf("\n\n");
	system("pause");
	return 0;
	
}
