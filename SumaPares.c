//Alexis Palomares Olegario 
//Práctica #11
/*La suma de los números pares de 1 hasta n, también muestra los números que hay, y te dice cuántos hay*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char respuesta='s';
	int contador=2, n, a=0, b=0;
	
	while(respuesta=='s' || respuesta=='S'){
		
		system("cls");
		
		printf("Ingresa el numero hasta el que se sumaran los numeros pares:\n");
		fflush(stdin);
		scanf("%d", &n);
		
		if(0<n){
			
			if(n%2==0){
				
				printf("Los numeros pares que hay son:\n\n");
			
				while(contador-1<=n){
				
					a=a+contador;
					printf("%d\n", contador);
					contador+=2;
					b++;
				
				}
			
				printf("\nLa cantidad de numeros que hay son: %d\n", b);
				printf("\nLa suma de los numeros pares hasta %d, es: %d\n\n", n, a);
				system("pause");
				
			}
			else{
				
				printf("Los numeros pares que hay son:\n\n");
			
				while(contador-1<n){
				
					a=a+contador;
					printf("%d\n", contador);
					contador+=2;
					b++;
				
				}
			
				printf("\nLa cantidad de numeros que hay son: %d\n", b);
				printf("\nLa suma de los numeros pares hasta %d, es: %d\n\n", n, a);
				system("pause");
				
				
				
			}
			
		}
		else{
			
			system("cls");
			printf("\nIngresa un numero positivo.\n\n");
			system("pause");
			
		}
		
		system("cls");
		
		printf("%cDeseas repetir el programa?(Escribe s o n)\n", 168);
		fflush(stdin);
		scanf("%c", &respuesta);
		
		
	}
	
	system("pause");
	return 0;
	
	
}
