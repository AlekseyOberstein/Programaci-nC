//Alexs Palomares Olegario
//Práctica #13
/* Utilizar do while para imprimir las letras minúsculas del alfabeto*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char respuesta='s';
	int letra;
	while(respuesta=='s' || respuesta=='S'){
		
		system("cls");
		
		printf("Este programa imprime las letras minusculas del alfabeto\n\n");
		system("pause");
		system("cls");
		
		printf("Las letras minusculas del alfabeto son:\n");
		
		letra=97;
		
		do{
			
			printf("%c\n", letra);
			letra++;
			
		}while(letra<=110);
		
		printf("%c\n", 164);
		
		do{
			
			printf("%c\n", letra);
			letra++;
			
		}while(letra<=122);
		

		
		system("pause");
		
		system("cls");
		
		printf("%cDeseas repetir el programa?(Escribe s o n)\n", 168);
		fflush(stdin);
		scanf("%c", &respuesta);
		
	}
	
	
	return 0;
	system("pause");
	
	
	
}
