#include <stdio.h>
#include <stdlib.h>

int main(){
	
	/*Uso de la funcion sizeof*/
	
	printf("Numero de bytes en el tipo de dato flotante %d \n", sizeof(float));
	printf("Numero de bytes en el tipo de dato long long %d \n", sizeof(long long));
	printf("Numero de bytes en el tipo de dato de float mas long %d \n", sizeof(float)+sizeof(long));
	printf("Numero de bytes en el tipo de dato de float mas long long %d \n", sizeof(float)+sizeof(long long));
	system("pause");
	
	/* Ingresar datos en C*/
	
	int a;
	char b;
	float c;
	double d;
	
	printf("Ingresa un valor para la variable de tipo Caracter: \n");
	scanf("%c" ,&b);
	printf("Ingresa un valor para la variable de tipo Entero: \n");
	scanf("%d",&a);
	
	system("pause"); 
	
	int e, f, resultado;
	
	printf("Ingresa el primer valor para la Suma: \n");
	scanf("%d", &e);
	printf("Ingresa el segundo valor para la Suma: \n");
	scanf("%d", &f);
	resultado=e+f;
	printf("La Suma de %d mas %d es %d: \n",e,f,resultado);
	
	system("pause");
	return 0;
	
}
