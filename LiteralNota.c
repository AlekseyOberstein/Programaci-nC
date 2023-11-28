//Alexis Palomares Olegario
//Práctica #15
/*En base a una calificación, el programa te da el literal correspondiente*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char respuesta='s';
	int calificacion;
	
	while(respuesta=='s' || respuesta=='S'){
		
		system("cls");
		
		printf("\nIngresa tu calificacion:\n");
		fflush(stdin);
		scanf("%d", &calificacion);
		
		if(calificacion==10){
			
			system("cls");
			printf("\nDado que tu calificacion es %d, tu nota es A, que corresponde con Excelencia.\n\n", calificacion);
			
		}
		if(calificacion==9 || calificacion==8){
			
			system("cls");
			printf("\nDado que tu calificacion es %d, tu nota es B, que corresponde con Notable.\n\n", calificacion);
			
		}
		if(calificacion==7 || calificacion==6){
			
			system("cls");
			printf("\nDado que tu calificacion es %d, tu nota es C, que corresponde con Aprobado.\n\n", calificacion);
			
		}
		if(0<=calificacion && calificacion<=5){
			
			system("cls");
			printf("\nDado que tu calificacion es %d, tu nota es F, que corresponde con Reprobado.\n\n", calificacion);		
			
		}
		if(calificacion<0 || 10<calificacion){
			
			system("cls");
			printf("\nIngresa un numero valido.\n\n");
			
		}
		
		
	system("pause");

	system("cls");
		
	printf("%cDeseas repetir el programa?(Escribe s o n)\n", 168);
	fflush(stdin);
	scanf("%c", &respuesta);
			
	}
	
	system("pause");
	return 0;
	
}
