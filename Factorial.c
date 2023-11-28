//Alexis Palomares Olegario
//Práctica #6
/*Calcular el factorial de un numero*/

#include <stdio.h>

int main(){
	
	char respuesta='s';
	long long factorial=0;
	int contador;
	int resultado=1;
	
	while(respuesta=='s' || 'S'==respuesta){
		
		system("cls");
		
			
		printf("Este programa te da el factorial de un numero.\n\n");
		printf("Ingresa el numero:\n");
		fflush(stdin);
		scanf("%d", &factorial);
		
		if(0<=factorial){
			contador=1;
			resultado=1;
		
			while(contador<=factorial){
			
				resultado=resultado*contador;
				contador++;
			
			}
		
			printf("\nEl factorial de %d, es: %d\n", factorial, resultado);
		
		}
		else{
			printf("Escribe un numero positivo\n");
		}
		
		system("pause");
		
		printf("\n%cDeseas obtener otro factorial?(escribe s o n)\n", 168);
		fflush(stdin);
		scanf("%c", &respuesta);
		
		}
	
system("pause");	
return 0;
		
}


