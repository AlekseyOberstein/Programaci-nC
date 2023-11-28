#include<stdio.h>
#include<stdlib.h>
/*Se puede escribir únicamente el main sin el int, y no se agrega el return 0 al final*/
int main(){
	int edad;
	printf("Ingresa la edad: ");
	scang("%d", &edad);
	
	if(edad>00 && edad<=17){
		printf("La edad que ingresaste es %d y te toca pagar 40\n", edad);
				
}
	else if(edad>=18 && edad<=59){
		printf("La edad que ingresaste es %d y te toca pagar 50\n", edad);
		
}
	else if(edad >=60){
		prinf("La edad que ingresaste es %d y te toca pagar 35\n", edad);
		
	}
	
	else{
	printf("La edad que ingresaste no existe\n");
	}
	
	system ("pause");
	return 0;
}
