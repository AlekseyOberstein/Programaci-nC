/*Este programa asigna el tamaño de una matriz con memoria dinámica (malloc), luego la muestra:
Posteriormente te deja elegir entre:
1.Saca la transpuesta de la matriz
2.Multiplicarla por una columna
*/

#include<stdio.h>
#include<stdlib.h>

int i, j;

finalfuncion(){
	
	int final;
	
    printf("\nPresione 1 para volver a repetir el programa.\n");
    printf("\nPresione 2 para salir del programa.\n");
    fflush(stdin);
    scanf("%d", &final);
    
    switch (final){
    case 1:
    	system("cls");
       	menuprincipal();
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

escribirc(int *a, int *b, int c){
	
	for(i=0;i<c;i++){
		
		printf("Ingresa el valor %d%c: ", i+1, 167);
		fflush(stdin);
		scanf("%d", &a[i]);
		b[i]=0;
		
	}
	
}

imprimirc(int *a, int b){
	
	for(i=0;i<b;i++){
		
		printf("El valor de %d es: %d\n", i+1, a[i]);
		
	}
	
}

transpuesta(int **a, int **b, int c, int d){
	
	for(i=0;i<c;i++){
		for(j=0;j<d;j++){
			
			b[j][i]=a[i][j];		
			
		}
	}
}

multiplicarc(int **a, int *b, int *c, int d, int e){
	
	for(i=0;i<d;i++){
		for(j=0;j<e;j++){
			
			c[j] = a[i][j]*b[j]+c[j];
			
		}
	}
	
	
}

menuprincipal(){
	
	int **matrizA;
	int **matrizB;
	int fil, col;
	int *columna;
	int *columna2;
	
	printf("Ingresa la cantidad de filas de la matriz:\n");
	scanf("%d", &fil);
	printf("Ingresa la cantidad de columnas de la matriz:\n");
	scanf("%d", &col);	
	
	matrizA=(int**)malloc(fil * sizeof(int));
	
	for(i=0;i<fil;i++){
		
		matrizA[i]=(int*)malloc(col * sizeof(int));
		
	}
	matrizB=(int**)malloc(col * sizeof(int));
	
	for(i=0;i<col;i++){
		
		matrizB[i]=	(int*)malloc(fil * sizeof(int));
		
	}
	columna=(int*)malloc(col * sizeof(int));
	columna2=(int*)malloc(col * sizeof(int));
	
	printf("Ingresa los valores de la matriz:\n");
	escribir(matrizA, fil, col);
	printf("Ingresa los valores de la columna:\n");
	escribirc(columna, columna2, col);
	system("cls");
	printf("Los valores de la matriz son:\n");
	imprimir(matrizA, fil, col);
	printf("Los valores de la columna son:\n");
	imprimirc(columna, col);
	system("pause");
	system("cls");

	printf("\nLa transpuesta de la matriz es:\n");
	transpuesta(matrizA, matrizB, fil, col);
	imprimir(matrizB, col, fil);
	system("pause");
	system("cls");
	printf("El producto de la matriz por la columna es:\n");
	multiplicarc(matrizA, columna, columna2, fil, col);
	imprimirc(columna2, col);

	finalfuncion();
	
	
	
}

int main(){
	

	menuprincipal();
	
	system("pause");
	return 0;
	
	
	
}
