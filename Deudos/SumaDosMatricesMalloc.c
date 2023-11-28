/*Este programa te deja definir el tamaño de tus matrices, 
llena las matrices, 
suma las dos matrices*/

#include <stdio.h>
#include <stdlib.h>
int i, j;

escribir(int **a, int b, int c){
	
	for(i=0;i<b;i++){
		for(j=0;j<c;j++){
			
			printf("Ingresa [%d][%d]: ", i+1, j+1);
			fflush(stdin);
			scanf("%d", &a[i][j]);
			
		}
	}
}

imprimir(int **a, int b, int c){
	
	
	for(i=0;i<b;i++){
		for(j=0;j<c;j++){
			
			printf("El valor de [%d][%d]: %d\n", i+1, j+1, a[i][j]);
			
		}		
	}
	
}

sumar(int **a, int **b, int **c, int d, int e){
	
	for(i=0;i<d;i++){
		for(j=0;j<e;j++){
			
			c[i][j]=a[i][j]+b[i][j];
			
		}
	}
	
}

finalfuncion(){
	
	int final;
	
    printf("\nPresione 1 para volver a repetir el programa.\n");
    printf("\nPresione 2 para salir del programa.\n");
    fflush(stdin);
    scanf("%d", &final);
    
    switch (final){
    case 1:
    	system("cls");
       	principal();
        break;
    case 2:
       	exit(-1);
       	break;
    default:
       	system("cls");
		printf("\aError, elija una opcion valida");
        finalfuncion();	
        break;
	}
}

principal(){
	
	int fil, col;
	int **matrizA;
	int **matrizB;
	int **matrizC;
	system("cls");
	printf("Ingresa el tama%co de las filas:\n", 164);
	scanf("%d", &fil);
	printf("Ingresa el tama%co de las columnas:\n", 164);
	scanf("%d", &col);	
	
	matrizA=(int**)malloc(fil * sizeof(int));
	matrizB=(int**)malloc(fil * sizeof(int));
	matrizC=(int**)malloc(fil * sizeof(int));
	
	for(i=0;i<fil;i++){
		
		matrizA[i]=(int*)malloc(col * sizeof(int));
		matrizB[i]=(int*)malloc(col * sizeof(int));
		matrizC[i]=(int*)malloc(col * sizeof(int));
		
	}
	
	printf("Ingresa los valores de la primer matriz:\n");
	escribir(matrizA, fil, col);
	printf("Ingresa los valores de la segunda matriz:\n");
	escribir(matrizB, fil, col);
	system("cls");
	
	
	
	printf("Los valores de la primer matriz son:\n");
	imprimir(matrizA, fil, col);	
	printf("Los valores de la segunda matriz son:\n");
	imprimir(matrizB, fil, col);	
	system("pause");
	system("cls");
	
	printf("La suma de las dos matrices es:\n");
	sumar(matrizA, matrizB, matrizC, fil, col);
	imprimir(matrizC, fil, col);
	system("pause");
	system("cls");
	free(matrizA);
	free(matrizB);
	free(matrizC);
	finalfuncion();	
	
}


int main(){
	
	
	principal();
	return 0;
	
}
