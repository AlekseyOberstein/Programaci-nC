//Alexis Palomares Olegario
//Práctica #9
/*Este progrma calcula el área de:
1.Triángulo.
2.Cuadrado.
3.Circulo.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char respuesta='s';
	int n;
	float h, b, l, r, area; 
	#define PI 3.1415922654
	
	while(respuesta=='s' || 'S'==respuesta){
		
		system("cls");
		
		printf("Este programa calcula el area de las siguientes figuras:\n\n");
		printf("   1 - Triangulo\n\n");
		printf("   2 - Cuadrado\n\n");
		printf("   3 - Circulo\n\n");
		printf("Escoge alguna figura del menu:\n");
		scanf("%d", &n);
		
		if(0<n && n<4){
			
			switch(n){
				case 1:
					
					system("cls");
					
					printf("Ingresa la altura del triangulo:\n");
					scanf("%f", &h);
					printf("Ingresa la base del triangulo:\n");
					scanf("%f", &b);
					
					if(0<h && 0<b){
						
					area=(b*h)/2;
					printf("El area del triangulo es: %g\n", area);
					system("pause");
					
					}
					else{
						
						printf("Escribe un numero positivo\n");
						system("pause");
						
					}
					
					break;
					
				case 2:
					
					system("cls");
					
					printf("Ingresa un lado del Cuadrado:\n");
					fflush(stdin);
					scanf("%f", &l);
					
					if(0<l){
						
						area=l*l;
						printf("El area del Cuadrado es: %g\n", area);
						system("pause");
						
					}
					else{
						
						printf("Escribe un numero positivo\n");
						system("pause");
						
					}
					
					break;
					
				case 3:
					
					system("cls");
					
					printf("Ingresa el radio del circulo:\n");
					scanf("%f", &r);
					
					if(0<r){
					
					area=PI*r*r;
					printf("El area del Circulo es: %g\n", area);
					system("pause");
					
					}
					else{
						
						printf("Escribe un numero valido\n");
						system("pause");
						
					}
					break;
				
			}
			
		}
		else{
			
			printf("Introduce un numero valido del menu\n");
			
		}
		
		system("cls");
		
		printf("%cDeseas volver a repetir el programa?\n", 168);
		fflush(stdin);
		scanf("%c", &respuesta);
		
	}
	
	system("pause");
	return 0;
	
}


