//Alexis Palomares Olegario
//Práctica #16
/*Este programa obtiene la tarifa de la luz, según la corriente eléctrica*/

#include <stdio.h>
#include <stdlib.h>

int main(){

	char respuesta='s';
	int gasto, tarifa;

	while(respuesta=='s' || respuesta=='S'){
		
		system("cls");
	
		printf("\nIngresa tu gasto de corriente electrica:\n");
		fflush(stdin);
		scanf("%d", &gasto);
		
		if(0<=gasto && gasto<=1000){
			
			system("cls");
			tarifa=gasto*1.2;
			printf("\nLa tarifa de la luz que vas a pagar es: %d", tarifa);
			
		}
		if(1000<gasto && gasto<=1850){
			
			system("cls");
			tarifa=gasto;
			printf("\nLa tarifa de la luz que vas a pagar es: %d", tarifa);
			
		}
		if(1850<gasto){
			
			system("cls");
			tarifa=gasto*0.9;
			printf("\nLa tarifa de la luz que vas a pagar es: %d", tarifa);
			
		}
		
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
