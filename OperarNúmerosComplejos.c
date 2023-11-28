#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef struct complejo{
	
	int r;
	int i;
	
}comp;


int opcion3;

divi1(){
	comp comp1;
	comp comp2;
	comp comp3;
	printf("Ingresa el primer numero imaginario\n");
	printf("Ingresa la parte real del número complejo:\n");
	scanf("%d", &comp1.r);
	printf("Ingresa la parte imaginaria del número complejo:\n");
	scanf("%d", &comp1.i);

	system("cls");
	
	printf("Ingresa el segundo numero imaginario\n");
	printf("Ingresa la parte real del número complejo:\n");
	scanf("%d", &comp2.r);
	printf("Ingresa la parte imaginaria del número complejo:\n");
	scanf("%d", &comp2.i);
	
	comp3.r=(comp1.r*comp2.r+comp1.i*comp2.i)/(pow(comp2.r, 2)+pow(comp2.i, 2));
	comp3.i=(comp2.r*comp1.i-comp1.r*comp2.i)/(pow(comp2.r, 2)+pow(comp2.i, 2));
	
	system("cls");
	
	printf("\nEl resultado de la division es: %d+%di ", comp3.r, comp3.i);
	
	
}
mult1(){
	comp comp1, comp2, comp3;
	printf("Ingresa el primer numero imaginario\n");
	printf("Ingresa la parte real del número complejo:\n");
	scanf("%d", &comp1.r);
	printf("Ingresa la parte imaginaria del número complejo:\n");
	scanf("%d", &comp1.i);

	system("cls");
	
	printf("Ingresa el segundo numero imaginario\n");
	printf("Ingresa la parte real del número complejo:\n");
	scanf("%d", &comp2.r);
	printf("Ingresa la parte imaginaria del número complejo:\n");
	scanf("%d", &comp2.i);
	
	comp3.r=comp1.r*comp2.r-comp1.i*comp2.i;
	comp3.i=comp1.r*comp2.i+comp2.r*comp1.i;
	
	system("cls");
	
	printf("\nEl resultado de la multiplicacion es: %d+%di ", comp3.r, comp3.i);
	
}
resta1(){
	comp comp1, comp2, comp3;
	printf("Ingresa el primer numero imaginario\n");
	printf("Ingresa la parte real del número complejo:\n");
	scanf("%d", &comp1.r);
	printf("Ingresa la parte imaginaria del número complejo:\n");
	scanf("%d", &comp1.i);

	system("cls");
	
	printf("Ingresa el segundo numero imaginario\n");
	printf("Ingresa la parte real del número complejo:\n");
	scanf("%d", &comp2.r);
	printf("Ingresa la parte imaginaria del número complejo:\n");
	scanf("%d", &comp2.i);
	
	comp3.r=comp1.r-comp2.r;
	comp3.i=comp1.i-comp2.i;
	
	system("cls");
	
	printf("\nEl resultado de la resta es: %d+%di ", comp3.r, comp3.i);
	
}
suma1(){
	comp comp1, comp2, comp3;
	printf("Ingresa el primer numero imaginario\n");
	printf("Ingresa la parte real del número complejo:\n");
	scanf("%d", &comp1.r);
	printf("Ingresa la parte imaginaria del número complejo:\n");
	scanf("%d", &comp1.i);

	system("cls");
	
	printf("Ingresa el segundo numero imaginario\n");
	printf("Ingresa la parte real del número complejo:\n");
	scanf("%d", &comp2.r);
	printf("Ingresa la parte imaginaria del número complejo:\n");
	scanf("%d", &comp2.i);
	
	comp3.r=comp1.r+comp2.r;
	comp3.i=comp1.i+comp2.i;
	
	system("cls");
	
	printf("\nEl resultado de la suma es: %d+%di ", comp3.r, comp3.i);
	
	
}

complejos(){
	
	printf("Este programa realiza operaciones entre numeros complejos.\n");
	printf("1 - Suma\n");
	printf("2 - Resta\n");
	printf("3 - Multiplicacion\n");
	printf("4 - Division\n");
	printf("5 - Salir\n");
	printf("Escribe la operacion que deseas realizar:\n");
	scanf("%d", &opcion3);
	
	switch(opcion3){

		case 1:
			system("cls");
			suma1();
			break;

		case 2:
			system("cls");
			resta1();
			break;
		
		case 3:
			system("cls");
			mult1();
			break;
		
		case 4:
			system("cls");
			divi1();
			break;
			
		case 5:
			
			system("cls"),
			menuprincipal();

		case 6:
			exit(0);
			break;

		default:
			system("cls");
			printf("Error, elija una opcion valida\n");
			complejos();
			break;

	}
		
}
	
menuprincipal(){
	
	printf("Hola");
	complejos();
	
}	
	
	

int main(){
	

	menuprincipal();
	
	
	
}
