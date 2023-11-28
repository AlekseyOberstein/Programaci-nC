//Alexis Palomares Olegario
//Práctica #25
/*El programa muestra un menú y te da a elegir entre 

1. Factorial de un número.
2. Ecuaciones de segundo grado con fórmula general.
3. Sacar el residuo de una división.
4. Salir.*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int opcion;

int opcion1, factorial, resultadof, contadorf;
float a, b, c, x1, x2, raiz1, i, i2, entero, i3, i4;
int opcion2;

int residuo, opcion3;
int dividendo, divisor;

//MENU PRINCIPAL
	menuprincipal(){
	
		printf("1 - Factorial de un numero.");
		printf("\n2 - Ecuaciones de segundo grado con la formula general.");
		printf("\n3 - Obtener el residuo de una division.");
		printf("\n4 - salir.");
		printf("\nElija la opcion deseada: ");
		scanf("%d", &opcion);
		switch (opcion){
			case 1:
				
				system("cls");
				factor();
				break;
				
			case 2:
				
				system("cls");
				ecuacion();
				break;
				
			case 3:
				
				system("cls");
				funcionresiduo();
				break;
				
			case 4:
				
				exit(-1);
				
				break;
				
			default:
				system("cls");
				printf("Error, elija una opcion valida\n");
				menuprincipal();
				break;
		}
		
		}


//FACTORIAL DE UN NÚMERO
factor(){
		
		contadorf=1;
		resultadof=1;
			
		printf("Esta opcion te da el factorial de un numero.\n\n");
		printf("Ingresa el numero:\n");
		fflush(stdin);
		scanf("%d", &factorial);
		
		if(0<=factorial){
		
			while(contadorf<=factorial){
			
				resultadof=resultadof*contadorf;
				contadorf++;
			
			}
		
			printf("\nEl factorial de %d, es: %d\n\n", factorial, resultadof);
			printf("\nPresione 1 para repetir el programa.\n");
			printf("\nPresione 2 para regresar al menu principal.\n");
			printf("\nPresione 3 para finalizar el programa.\n");
			fflush(stdin);
			scanf("%d", &opcion1);
		
			switch(opcion1){
				
				case 1:
					
					system("cls");
					factor();
					break;
					
				case 2:
					
					system("cls");
					menuprincipal();
					break;
					
				case 3:
					
					exit(-1);
					break;
					
				default:
					
                system("cls");
                printf("Error, elija una opcion valida\n");
                factor();
                break;
                
				}
			}
		else{
			
			system("cls");
			printf("Escribe un numero positivo\n");
			factor();
			
		}	
	}

	
//ECUACIONES DE SEGUNDO GRADO CON LA FORMULA GENERAL
ecuacion(){
	
		
		
		printf("Esta opcion de te da las raices de una ecuacion de segundo grado, de acuerdo a la formula general.\n");
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
		
			printf("\nPresione 1 para repetir el programa.\n");
			printf("\nPresione 2 para regresar al menu principal.\n");
			printf("\nPresione 3 para finalizar el programa.\n");
			fflush(stdin);
			scanf("%d", &opcion2);
			
			switch(opcion2){
				
				case  1:
					
					system("cls");
					ecuacion();
					break;
				
				case 2:
					
					system("cls");
					menuprincipal();
					break;
				
				case 3:
					
					exit(-1);
					break;
					
				default:
				
				system("cls");
                printf("Error, elija una opcion valida\n");
                ecuacion();
                break;
				
				
			}
	
	
}


//RESIDUO DE UNA DIVISIÓN
funcionresiduo(){
	
	
	printf("Esta opcion te da el residuo de una division de dos numeros enteros.\n\n");
	printf("Ingresa el dividendo:\n");
	scanf("%d", &dividendo);
	printf("Ingresa el divisor:\n");
	scanf("%d", &divisor);
	
	if(divisor!=0){
		
		residuo=dividendo%divisor;
		printf("El residuo de la division es: %d\n\n", residuo);
		
			printf("\nPresione 1 para repetir el programa.\n");
			printf("\nPresione 2 para regresar al menu principal.\n");
			printf("\nPresione 3 para finalizar el programa.\n");
			fflush(stdin);
			scanf("%d", &opcion3);
			
			switch(opcion3){
				
				case 1:
					
					system("cls");
					funcionresiduo();
					break;
				
				case 2:
					
					system("cls");
					menuprincipal();
					break;
				
				case 3:
					
					exit(-1);
					break;
					
				default:
					
				system("cls");
                printf("Error, elija una opcion valida\n");
                funcionresiduo();
                break;
					
				
			}
		
	}
	else{
		
		system("cls");
		printf("El divisor no puede ser cero, ingresa otro numero.\n");
		funcionresiduo();
		
	}
}


int main(){
	menuprincipal();
	
}
