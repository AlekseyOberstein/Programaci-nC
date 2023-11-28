/*Este programa asigna el tamaño de una matriz con memoria dinámica (malloc), 
Luego la rellena, después la muestra
*/

#include <stdlib.h>
#include<stdio.h>
int i, j;

escribir(int **a, int b, int c){
	
	for(i=0; i<b;i++){
		for(j=0;j<c;j++){
			
			printf("Ingresa el valor [%d][%d]:\n", i+1, j+1 );
			scanf("%d", &a[i][j]);
			
		}	
	}	
}

imprimir(int **a, int b, int c){
	
	for(i=0;i<b;i++){
		for(j=0;j<c;j++){
			
			printf("El valor de [%d][%d] es: %d\n", i+1, j+1, a[i][j]);
			
		}	
	}
	
}


int main(){
	
	int fil, col;
	int **matrizA;
	char respuesta='s';
	
	while(respuesta=='s' || respuesta=='S'){
	
	system("cls");
	
	printf("Ingresa la cantidad de filas de la matriz:\n");
	fflush(stdin);
	scanf("%d", &fil);
	printf("Ingresa la cantidad de columnas de la matriz:\n");
	scanf("%d", &col);
	
	matrizA=(int**)malloc(fil * sizeof(int));
	
	for (i=0; i<fil; ++i){
		
 		matrizA[i]=(int*)malloc(col * sizeof(int));
 		
	}
	
	escribir(matrizA, fil, col);
	imprimir(matrizA, fil, col);
	
	free(matrizA);
	printf("%cDeseas repetir el programa?(s o n)\n", 168);
	fflush(stdin);
	scanf("%c", &respuesta);
	
	}
	
	system("pause");
	return 0;
}
 


