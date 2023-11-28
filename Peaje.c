//Alexis Palomares Olegario 
//Práctica #10
/*Se selecciona un tipo de vehículo y te dice que cantidad de peaje vas a pagar*/
#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int n;
	char respuesta='s';
	
	while(respuesta=='s' || respuesta=='S'){
		
		system("cls");
	
		printf("1 - Turismo\n");
		printf("2 - Autobus\n");
		printf("3 - Motocicleta\n\n");
		printf("Ingresa un valor del menu, para obtener el peaje a pagar:\n");
		fflush(stdin);
		scanf("%d", &n);
		
		system("cls");
	
		switch(n){
			case 1:
			
				printf("El peaje a pagar por el vehiculo de Turismo es: $500\n\n");
				system("pause");
				
				break;
		
			case 2:
				
				printf("El peaje a pagar por el Autobus es: $3000\n\n");
				system("pause");
				
				break;
		
			case 3:
			
				printf("El peaje a pagar por la Motocicleta es: $300\n\n");
				system("pause");
				
				break;
		
			default:
			
			printf("Ingresa un numero valido del menu\n\n");
			system("pause");
			
			break;
		
		}
		
		system("cls");
		
		printf("%cDeseas repetir el programa?\n", 168);
		fflush(stdin);
		scanf("%c", &respuesta);
	
	}
	
	system("pause");
	return 0;
	
	
}
