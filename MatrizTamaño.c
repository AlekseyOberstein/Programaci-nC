//Alexis Palomares Olegario
//Práctica #19
/*En este programa eliges el tamaño de la matriz, cantidad de filas, cantidad de columnas, la rellenas e imprimes*/

#include <stdio.h>
#include <stdlib.h>

char respuesta='s';
int i, j, a=0, b=0;
int matriz[1000][1000];

imprimir(){
	
	
	printf("La matriz es:\n\n");
	for(a=1;a<=i;a++){
		for(b=1;b<=j;b++){
			printf("\t%d\t",matriz[a][b]);
			
			
			
		}
		
		printf("\n");
		
	}
	
	
	
}


rellenar(){
	
	for(a=1;a<=i;a++){
		for(b=1;b<=j;b++){
			printf("Ingresa el numero de la posicion: [%d][%d]\n", a, b);
			scanf("%d", &matriz[a][b]);
			
			
			
		}
		
	
		
	}
	
	
	
}

tamano(){
	
	printf("\nIngresa la cantidad de filas que va a tener la matriz:\n");
	fflush(stdin);
	scanf("%d", &i);
	printf("\nIngresa la cantidad de columnas que va a tener la matriz\n");
	fflush(stdin);
	scanf("%d", &j);
	system("cls");
	if(0<i && 0<j){
	}
	else{
		system("cls");
		printf("\aError, ingresa un numero positivo.\n");
		tamano();
		
	}
}


int main(){
	
	while(respuesta=='s' || respuesta=='S'){
		
		system("cls");
		
	tamano();
	rellenar();
	imprimir();
		
		printf("\n");	
		printf("\n");
		system("pause");

		system("cls");
		
		printf("%cDeseas repetir el programa?(Escribe s o n)\n", 168);
		fflush(stdin);
		scanf("%c", &respuesta);
	
		
	}
	
	system("pause");
	return 0;
	
	
}
