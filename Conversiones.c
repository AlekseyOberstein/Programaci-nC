//Alexis Palomares Olegario
//Práctica #2
/*Este programa hace lo siguiente:
Dada una cantidad expresada en pies y otra en metros.
1. Mostrar ambas cantidades en centímetros
2. 	Mostrar el resultado de la suma. En pulgadas, yardas, metros y millas por separado. 
*/

#include <stdio.h> 
	
	int main(){
	
	//Definir las variables
	
	float pies, metros, centimetros1, centimetros2, centimetros3;
	double pulgadas, yardas, metros2, millas, kilometros;
	char respuesta='s';
	
	while('s'==respuesta || 'S'==respuesta)
	{
	
		system("cls");
	
		//Pedir las cantidades
		printf("Ingresa la primer cantidad en pies:\n");
		scanf("%f", &pies);
		fflush(stdin);
	
		printf("Ingresa la segunda cantidad en metros:\n");
		scanf("%f", &metros);
		fflush(stdin);
	
		if(0<=pies && 0<=metros){
	
			//convertir las cantidades a centimetros
	
			centimetros1=pies*30.48;
			centimetros2=metros*100;
	
			//1. Mostrar ambas cantidades en centímetros
			centimetros3=centimetros1+centimetros2;
	
			printf("El resultado de la suma de ambas cantidades en centimetros es:\n %g", centimetros3);
	
			//2. Mostrar el resultado de la suma. En pulgadas, yardas, metros y millas por separado. 
	
			//2.1 Pulgadas.
	
			pulgadas=0.393701*centimetros3;
			printf("\nEl resultado de la suma de ambas cantidades en pulgadas es:\n %g", pulgadas);
	
			//2.2 Yardas
	
			yardas=0.0109361*centimetros3;
			printf("\nEl resultado de la suma de ambas cantidades en yardas es:\n %g", yardas);
	
			//2.3 Metros
	
			metros2=0.01*centimetros3;
			printf("\nEl resultado de la suma de ambas cantidades en metros es:\n %g", metros2);
	
			//2.4 Millas
	
			kilometros=0.00001*centimetros3;
			millas=kilometros*0.621371;
			printf("\nEl resultado de la suma de ambas cantidades en millas es:\n %g\n", millas);
		
		}
		else 
		{
			printf("Ingresa un numero valido");
		}
		printf("\n%cDeseas repetir el programa?(escribe s o n)\n", 168);
		scanf("%c", &respuesta);

	}
	
	system("pause");
	return 0;
	
	
}
