//Alexis Palomares Olegario
//Práctica #8
/*Este programa calcula el perimetro de un rectángulo y de un cuadrado*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char respuesta='s';
	int n;
	float a, b, perimetro;
	
	while(respuesta=='s' || 'S'==respuesta){
		
		system("cls");
		
		printf("Este programa calcula el perimetro de un rectangulo y de un cuadrado\n\n");
		printf("1 - Cuadrado\n");
		printf("2 - Rectangulo\n\n");
		printf("Elige la figura de la cual vas a calcular el perimetro:\n");
		fflush(stdin);
		scanf("%d", &n);
		
		if(0<n && n<3){
			
			switch(n){
				
				case 1:
					
					system("cls");
					
					printf("Ingresa un lado del Cuadrado:\n");
					fflush(stdin);
					scanf("%f", &a);
					
					if(0<a){
					
					perimetro=a*4;
					
					printf("El perimetro del Cuadrado es: %g", perimetro);
					
					}
					else{
						
						printf("Escribe un numero valido");
						
					}
				
					break;
					
				case 2:
					
					system("cls");
					
					printf("Ingresa la base del rectangulo:\n");
					fflush(stdin);
					scanf("%f", &a);
					
					printf("Ingresa un lado del rectangulo:\n");
					fflush(stdin);
					scanf("%f", &b);
					
					if(0<a && 0<b){
					
					perimetro=(2*a)+(2*b);
					printf("El perimetro del rectangulo es: %g", perimetro);
					
					}
					else{
						
						printf("Escribe un numero valido");
						
					}
					break;
			}
			
		}
		
		else{
			
			printf("Escribe un numero valido");
		}
		
		
		printf("\n\n%cDeseas repetir el programa?(escribe s o n)\n", 168);
		fflush(stdin);
		scanf("%c", &respuesta);
		
	}
	
	
	return 0;
	system("pause");
	
}
