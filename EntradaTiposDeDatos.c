#include <stdio.h>
#include <stdlib.h>

int main(){
	int a;
	char respuesta;
	float b;
	
	printf("Ingresa un numero entero:");
	fflush(stdin);
	scanf("%d",&a);
	
	printf("\nIngresa un numero real:");
	fflush(stdin);
	scanf("%f", &b);
	
	printf("\nIngresa un caracter:");
	fflush(stdin);
	scanf("%c", &respuesta);
	
	printf("\nEl entero que ingreso es:%d", a);
	printf("\nEl real que ingreso es:%f", b);
	printf("\nEl caracter que ingreso es:%c\n", respuesta);
	
	system("pause");
	return 0;
	
}
