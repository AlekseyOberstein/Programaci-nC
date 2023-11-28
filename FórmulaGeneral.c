//Alexis Palomares Olegario
//Práctica #7
/*Calculo de ecuaciones de segundo grado con la fórmula general*/

#include <stdio.h>
#include <math.h>

int main(){
	
	float a, b, c, x1, x2, raiz1, i, i2, entero, i3, i4;
	char respuesta='s';
	
	while(respuesta=='s' || 'S'==respuesta){
		
		system("cls");
		
		
		printf("Este programa de te da las raices de una ecuacion de segundo grado, de acuerdo a la formula general.\n");
		printf("Ingresa el valor de a:\n");
		fflush(stdin);
		scanf("%f", &a);
		
		printf("Ingresa el valor de b:\n");
		fflush(stdin);
		scanf("%f", &b);
		
		printf("Ingresa el valor de c:\n");
		fflush(stdin);
		scanf("%f", &c);
		
		
		i=((b*b)-(4*a*c));
		
		if(0<i){
			
			raiz1=sqrt(i);
	
			x1=(-(b)+(raiz1))/(2*a);
			x2=(-(b)-(raiz1))/(2*a);

			printf("\nLa primer raiz de la ecuacion  es: %g\n", x1);
			printf("\nLa segunda raiz de la ecuacion  es: %g\n\n", x2);
	
		}
		if(0==i){
		
			x1=-(b)/(2*a);
			printf("\nLa unica raiz de la ecuacion  es: %g\n\n", x1);
			
		}
		if(i<0){
			entero=-(b)/(2*a);
			
			i2=-i;
			i3=sqrt(i2);
			i4=i3/(2*a);
			
			printf("\nLa primer raiz imaginaria de la ecuacion es:%g+%gi", entero, i3);
			printf("\n\nLa segunda raiz imaginaria de la ecuacion es:%g-%gi\n\n", entero, i3);
			
		}
		
		system("pause");
		
		printf("\n%cDeseas obtener otra raiz?(escribe s o n)\n", 168);
		fflush(stdin);
		scanf("%c", &respuesta);

	}
	
	system("pause");
	return 0;
}
