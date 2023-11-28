//Alexis Palomares Olegario
//Práctica #12
/*Este programa es una tabla de multiplicar de un Número Entero Positivo hasta n*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char respuesta='s';
	int tabla, n, contador, resultado=0;
	
	while(respuesta=='s'  || respuesta=='S'){
		
		system("cls");
		
		do{
			
			printf("Escribe el numero del cual se desea obtener la tabla:\n");
			fflush(stdin);
			scanf("%d", &tabla);
			
			printf("Ingresa el numero hasta el que se multiplicara:\n");
			fflush(stdin);
			scanf("%d", &n);
			
			system("cls");
				
		}while(0>n && 0>tabla);
		
		contador=0;
		
		printf("Los numeros de la tabla de multiplicar de %d hasta %d son:\n\n",  tabla, n);
		
		while(contador<=n){
			
			resultado=contador*tabla;
			printf("%d\n", resultado);
			contador++;
			
		}
		
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
