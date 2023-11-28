//Alexis Palomares Olegario
//Práctica #4
/*Este programa te dan los segundos contenidos en horas, minutos y segundos
Ejemplo: 1:00:48=3648*/

#include <stdio.h>
int main(){
	char respuesta='s';
	int horas, minutos, segundos1, segundos2, segundos3, total;
	
	while(respuesta=='s' || 'S'==respuesta)
	{
		
		system("cls");
		
		printf("\nIngresa el numero de horas:\n");
		fflush(stdin);
		scanf("%d", &horas);
		
		if(0<=horas){
			segundos1=horas*3600;
			printf("\nIngresa el numero de minutos:\n");
			fflush(stdin);
			scanf("%d", &minutos);
			
			if(0<=minutos)
			{
				segundos2=minutos*60;
				printf("\nIngresa el numero de segundos:\n\n");	
				fflush(stdin);
				scanf("%d", &segundos3);
				
				if(0<=segundos3)
				{
					
					total=segundos1+segundos2+segundos3;
					printf("\nLa totalidad de segundos es de: %d\n\n", total);
					
				}
				else{
					
					printf("Ingresa un numero valido\n\n");
				}
			}
			else{
				
				printf("Ingresa un numero valido\n\n");
				
			}
		}
		else{
			
			printf("Ingresa un numero valido\n\n");
		}
		
		system("pause");
		
		printf("\n%cDeseas hacer de nuevo esta operacion?(Escribe s o n)\n", 168);
		fflush(stdin);
		scanf("%c", &respuesta);
	}
	system("pause");
	return 0;
}
