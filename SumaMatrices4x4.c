//Alexis Palomares Olegario
//Pr�ctica #20
/*Este programa te permite rellenar dos matrices de 4x4, las suma, e imrpime el resultado*/
#include <stdio.h>
#include <stdlib.h>
#define t 4
//t=tama�o
int matriz1[t][t], matriz2[t][t], matriz3[t][t];

imprimir(int matriz[t][t]){
	
	int a, b;
	for(a=1;a<=t;a++){
		for(b=1;b<=t;b++){
			printf("\t%d\t", matriz[a][b]);
			
			
			
		}
		
		printf("\n");
		
	}
	
	
}

suma(){
	int a, b;
	for(a=1;a<=t;a++){
		for(b=1;b<=t;b++){
			matriz3[a][b]=matriz1[a][b]+matriz2[a][b];
			
			
		}
		
		
	}
	printf("La suma de la primera y de la segunda matriz es otra matriz y es:\n ");
	imprimir(matriz3);
	
}

rellenar(int matriz[t][t]){
	
	int a, b;
	for(a=1;a<=4;a++){
		for(b=1;b<=4;b++){
			printf("Ingresa el numero de la posicion: [%d][%d]:\n", a, b);
			fflush(stdin);
			scanf("%d", &matriz[a][b]);
			
			
			
		}
		
	
		
	}
	
	
	
}

int main(){
	char respuesta='s';
	
	while(respuesta=='s' || respuesta=='S'){
		
		system("cls");
		printf("Este programa suma dos matrices de 4x4:\n");
		printf("Ingresa los valores de la primera matriz:\n");
		rellenar(matriz1);
		system("cls");
		printf("La primer matriz es:\n");
		imprimir(matriz1);
		system("pause");
		system("cls");
		printf("Ingresa los valores de la segunda matriz:\n");
		rellenar(matriz2);
		system("cls");
		printf("La segunda matriz es:\n");
		imprimir(matriz2);
		system("pause");
		system("cls");
		suma(matriz1, matriz2);
		
		
		
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
