//Alexis Palomares Olegario
//Práctica #3
/*En este programa se ingresa una calificación y después se desglosa en su porcentaje respectivo de acuerdo al valor 
de los examenes, proyecto final y tareas*/

#include <stdio.h>

int main(){
	
	float calificacion, examenes, final, tareas, total;
	char respuesta='s';

	while('s'==respuesta || 'S'==respuesta)
	{
		
		system("cls");
		
		printf("Escribe tu calificacion:\n");
		fflush(stdin);
		scanf("%f", &calificacion);
		
	
		if(0<=calificacion && calificacion<=10)
		{
			examenes=calificacion*0.6;
			printf("\nDado que tu calificacion es %g, el 60%% que corresponde a los examenes es: %g\n", calificacion, examenes);
			final=calificacion*0.3;
			printf("\nDado que tu calificacion es %g, el 30%% que corresponde al proyecto final es: %g\n", calificacion, final);
			tareas=calificacion*0.1;
			printf("\nDado que tu calificacion es %g, el 10%% que corresponde a las tareas es: %g\n", calificacion, tareas);
			total=examenes+final+tareas;
			printf("\nSumar los puntos obtenidos de cada porcentaje equivale a la calificacion final.\n\nLa suma de los puntos obtenidos en los examenes, el proyecto final y las tareas resultan en la calificación final: %g+%g+%g=%g\n", examenes, final, tareas, total);
		}
		
		else{
			printf("Ingresa un numero valido\n");
		}
	
		system("pause");
		
		printf("\n%cDeseas ingresar otra calificacion?(Escribe s o n)\n", 168);
		fflush(stdin);
		scanf("%c", &respuesta);
	}
	
	system("pause");
	return 0;	

}
