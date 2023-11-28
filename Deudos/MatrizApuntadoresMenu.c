/* Este programa genera una matriz de 4x4, con arreglos y apuntadores, luego la muestra:
Posteriormente te deja elegir entre:
1.Saca la transpuesta de la matriz
2.Multiplicarla por una columna*/
#include<stdio.h>
#include<stdlib.h>
int i, j;

escribir(int **a){

	for(i=0;i<=3;i++){
		for(j=0;j<=3;j++){


			printf("Ingresa [%d][%d]\n", i+1,j+1);
			scanf("%d", &a[i][j]);

		}
	}


}

imprimir(int **a){

	for(i=0;i<=3;i++){
		for(j=0;j<=3;j++){

			printf("[%d][%d] = %d", i+1, j+1, a[i][j]);

		}
	}


}

menu2(){



}

menuprincipal(){

	int matrizA[3][3];
	int **aptA;


	aptA=&matrizA[0][0];


	printf("Ingresa los valores de la matriz\n");
	escribir(aptA);
	printf("Los valores de la matriz son:\n");
	imprimir(aptA);




}

int main(){

	menuprincipal();

}
