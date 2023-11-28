#include <stdio.h>
#include <stdlib.h>

enum dias{
	lunes, 
	martes, 
	miercoles,	
	jueves,	
	viernes, 
	sabado, 
	domingo
	}tiempo;

int main(){
	
	tiempo=lunes;
	char respuesta='s';
	
	while (respuesta=='s' || respuesta=='S'){
		
		printf("/Hola, %d\n\n", tiempo);
		
	/*	switch(tiempo){

		case 0;
		printf("Lunes, 1");
		break;
		
		case 1;
		printf("Martes, 2");
		break;

		case 2;
		printf("Miercoles, 3");
		break;
		
		case 3;
		printf("Jueves, 4");
		break;
		
		case 4;
		printf("Viernes, 5");
		break;
		
		case 5;
		printf("Sabado, 6");
		break;

		case 6;
		printf("Domingo, 7");
		break;
		
		default;
		printf("No pasa");
		break;
			
			
	}*/
		

	printf("%cQuieres volver a repetir el programa?", 168);
	fflush(stdin);
	scanf("%c", &respuesta);
	}
	
	
	
	
}
