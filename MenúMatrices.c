//Alexis Palomares Olegario
//Práctica #24
/*Este programa Ter permite seleccionar entre las opciones, sumar dos matrices, restar dos matrices y multiplicar dos matrices.
Luego eliges el tamaño de la matriz, rellenas la matriz y finalmente te muestra el resultado de la operación elegida*/
#include<stdio.h>
#include<stdlib.h>

int w, x, y, z;
int matriz1[100][100], matriz2[100][100], matriz3[100][100];

imprimir(int matriz[100][100]){
	
	int a, b;
	for(a=1;a<=w;a++){
		for(b=1;b<=x;b++){
			printf("\t%d\t", matriz[a][b]);
			
			
			
		}
		
		printf("\n");
		
	}
	
	
}
imprimir1(int matriz[100][100]){
	
	int a, b;
	for(a=1;a<=y;a++){
		for(b=1;b<=z;b++){
			printf("\t%d\t", matriz[a][b]);
			
			
			
		}
		
		printf("\n");
		
	}
	
	
}
imprimir2(int matriz[100][100]){
	
	int a, b;
	for(a=1;a<=w;a++){
		for(b=1;b<=z;b++){
			printf("\t%d\t", matriz[a][b]);
			
			
			
		}
		
		printf("\n");
		
	}
	
	
}

multiplicarm(){
	
	int a, b, c;
	
	for(a=1;a<=w;a++){
		for(b=1;b<=z;b++){
			for(c=1;c<=x;c++)
			
			matriz3[a][b]+=matriz1[a][c]*matriz2[c][b];
			
		}
	
	}
	
	printf("El producto de las dos matrices es:\n\n ");
	imprimir2(matriz3);
	
}

resta(){
	int a, b;
	for(a=1;a<=w;a++){
		for(b=1;b<=x;b++){
			matriz3[a][b]=matriz1[a][b]-matriz2[a][b];
			
			
		}
		
		
	}
	printf("La resta de la segunda matriz a la primera es otra matriz, y es:\n ");
	imprimir(matriz3);
	
}

suma(){
	int a, b;
	for(a=1;a<=w;a++){
		for(b=1;b<=x;b++){
			matriz3[a][b]=matriz1[a][b]+matriz2[a][b];
			
			
		}
		
		
	}
	printf("La suma de la primera y de la segunda matriz es otra matriz y es:\n ");
	imprimir(matriz3);
	
}

rellenar(int matriz[100][100]){
	
	int a, b;
	for(a=1;a<=w;a++){
		for(b=1;b<=x;b++){
			printf("Ingresa el numero de la posicion: [%d][%d]:\n", a, b);
			fflush(stdin);
			scanf("%d", &matriz[a][b]);
			
			
			
		}
		
	
		
	}
	
	
	
}
rellenar1(int matriz[100][100]){
	
	int a, b;
	for(a=1;a<=y;a++){
		for(b=1;b<=z;b++){
			printf("Ingresa el numero de la posicion: [%d][%d]:\n", a, b);
			fflush(stdin);
			scanf("%d", &matriz[a][b]);
			
			
			
		}
		
	
		
	}
	
	
	
}


tamano(){
	
	printf("\nIngresa la cantidad de filas que va a tener la matriz:\n");
	fflush(stdin);
	scanf("%d", &w);
	printf("\nIngresa la cantidad de columnas que va a tener la matriz\n");
	fflush(stdin);
	scanf("%d", &x);
	system("cls");
	if(0<w && 0<x){
	}
	else{
		system("cls");
		printf("\aError, ingresa un numero positivo.\n");
		tamano();
		
	}
	
}
tamano1(){
	
	printf("\nIngresa la cantidad de filas que va a tener la matriz:\n");
	fflush(stdin);
	scanf("%d", &y);
	printf("\nIngresa la cantidad de columnas que va a tener la matriz\n");
	fflush(stdin);
	scanf("%d", &z);
	system("cls");
	if(0<y && 0<z){
	}
	else{
		system("cls");
		printf("\aError, ingresa un numero positivo.\n");
		tamano();
		
	}
}
opcionsum(){
	
	printf("Ingresa las dimensiones de las dos matrices a sumar:");
	tamano();
	printf("Ingresa los valores de la primer matriz:\n");
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
	
}
	
opcionrest(){
	printf("Ingresa las dimensiones de las dos matrices a restar:");
	tamano();
	printf("Ingresa los valores de la primer matriz:\n");
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
	resta(matriz1, matriz2);
	
	
}
	
opcionmult(){
		
	printf("Ingresa las dimensiones de la primer matriz a multiplicar:\n");
		tamano();
		printf("Ingresa las dimensiones de la primer matriz a multiplicar:\n");
		tamano1();
		if(x==y){
		
			printf("Ingresa los valores de la primer matriz:\n");
			rellenar(matriz1);
			system("cls");
			printf("La primer matriz es:\n");
			imprimir(matriz1);
			system("pause");
			system("cls");
			printf("Ingresa los valores de la segunda matriz:\n");
			rellenar1(matriz2);
			system("cls");
			printf("La segunda matriz es:\n");
			imprimir1(matriz2);
			system("pause");
			system("cls");
			multiplicarm(matriz1, matriz2);
		}
		else{
				
			system("cls");
			printf("\aEl numero de columnas de la primera matriz debe ser igual al numero de filas de la segunda.\n");
			opcionmult();
				
				
	}	
		
}
	


menuprincipal(){
	
	int opcion;
	int opcion1;
	int opcion2;
	int opcion3;
	
	printf("\nEl programa realiza una de las siguientes opciones\n\n");
	printf("1 - Sumar dos matrices\n");
	printf("2 - Restar dos matrices\n");
	printf("3 - Multiplicar dos matrices\n");
	printf("4 - Salir.\n");
	printf("Elige una de las opciones:");
	scanf("%d", &opcion);
	switch(opcion){
		case 1:
			
			system("cls");
			opcionsum();
			printf("\n\nPresione 1 para volver  a realizar otra suma.");
			printf("\nPresione 2 para volver al menu principal.");
			printf("\nPresione 3 para salir del programa.\n");
			fflush(stdin);
			scanf("%d", &opcion1);
			switch (opcion1){
        		case 1:
        			system("cls");
        			opcionsum();
        			break;
        		case 2:
        			system("cls");
        			menuprincipal();
        			break;
        		case 3:
        			exit(-1);
        			break;
        		default:
        			system("cls");
        			printf("Error, elija una opcion valida");
        			opcionsum();	
        			break;
			}
			break;
		case 2:
			
			system("cls");
			opcionrest();
			printf("\n\nPresione 1 para volver  a realizar otra resta.");
			printf("\nPresione 2 para volver al menu principal.");
			printf("\nPresione 3 para salir del programa.\n");
			fflush(stdin);
			scanf("%d", &opcion2);
			switch (opcion2){
        		case 1:
        			system("cls");
        			opcionrest();
        			break;
        		case 2:
        			system("cls");
        			menuprincipal();
        			break;
        		case 3:
        			exit(-1);
        			break;
        		default:
        			system("cls");
        			printf("Error, elija una opcion valida\n");
        			opcionrest();	
        			break;
			}
					
			break;
		case 3:
			
			system("cls");
			opcionmult();
			printf("\n\nPresione 1 para volver  a realizar otra multiplicacion.");
			printf("\nPresione 2 para volver al menu principal.");
			printf("\nPresione 3 para salir del programa.\n");
			fflush(stdin);
			scanf("%d", &opcion2);
			switch (opcion2){
        		case 1:
        			system("cls");
        			opcionmult();
        			break;
        		case 2:
        			system("cls");
        			menuprincipal();
        			break;
        		case 3:
        			exit(-1);
        			break;
        		default:
        			system("cls");
        			printf("Error, elija una opcion valida\n");
        			opcionmult();	
        			break;
			}
		
			break;	
			
		case 4:
			
			system("cls");
			exit(0);
				
		default:
			
			system("cls");
			printf("\aError, elige una opcion del menu(1-3).\n");
			menuprincipal();
		
		
	}
}


int main(){
	
	menuprincipal();
}
