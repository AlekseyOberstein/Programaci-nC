//Alexis Palomares Olegario
//Práctica #23
/*Este programa suma n números primos, e imprime la suma*/

#include <stdio.h>
#include <stdlib.h>
int sumap, n, cont, limite=10000, nprimos=0;

imprimesuma(){
	
	printf("\nLa suma hasta el %d%c termino de los numeros primos es: %d\n", n, 167, sumap);
	
	
}

criba(){
	int i=0, j=0;
	int a=0;
	cont=0;
	sumap=0;
	nprimos=0;
	for(i=2;i<limite;i++){
		for(j=2;j<limite;j++){
			a=i%j;
			if(a==0){
				cont++;
			}			
			
		}
		if(cont==1){
			
			sumap=sumap+i;
			nprimos++;
			if(nprimos==n){
				
				imprimesuma();
				
			}
		}
		cont=0;
			
	}
		
}

ingresan(){
	system("cls");
	printf("Ingresa n-%csimo termino de la sucecion de los primos hasta el que se sumara:\n", 130);
	fflush(stdin);
	scanf("%d", &n);
	
if(0<n){
	
	criba();
	
}
else{
	
	system("cls");
	printf("Error, el n término debe ser mayor a cero\n");
	ingresan();
	
}
	
	
}


int main(){
	char respuesta='s';
	
	while(respuesta=='s'  || respuesta=='S'){
	
		ingresan();
	 
	 
		printf("\n");	
		printf("\n");
		system("pause");

		system("cls");
		
		printf("%cDeseas repetir el programa?(Escribe s o n)\n", 168);
		fflush(stdin);
		scanf("%c", &respuesta);
		
	}
	
	system("pause");
	return 0;
	
}
