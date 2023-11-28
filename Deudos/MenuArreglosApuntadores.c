/*Este es programa un programa modular
Es un menú que suma, resta y múltiplica por un escalar un arreglo*/



#include <stdio.h>
#include <stdlib.h>

int i;

finalfuncion(){
	
	int final;
	
    printf("\nPresione 1 para volver al menu principal.");
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


escribir(int *a){
	
	for(i=0; i<=5;i++){
		
		fflush(stdin);
		scanf("%d", &a[i]);
		
	}
	
}

imprimir(int *a){
	
	for(i=0;i<=5;i++){
		
		printf("%d\t", *(a+i));
		
	}
	
	printf("\n");
	system("pause");
}

sumar(int *a, int *b, int *c){
	

	for(i=0;i<=5;i++){
		
		a[i]=b[i]+c[i];
		
	}
	
}
restar(int *a, int *b, int *c){
	
	for(i=0; i<=5;i++){
		
		a[i]=b[i]-c[i];
		
	}
	
	
}
multiplicar(int *a, int b){
	
	
	for(i=0;i<=5;i++){
		
		a[i]=a[i]*b;
		
	}
	
	
}


suma(){
	
	int v1[5];
	int *av1;
	
	int v2[5];
	int *av2;
	
	int v3[5];
	int *av3;
	
	av1=v1;
	av2=v2;
	av3=v3;
	
	printf("Ingresa los valores del primer vector:\n");
	escribir(av1);
	printf("Ingresa los valores del segundo vector:\n");
	escribir(av2);
	system("cls");
	printf("Los valores del primer vector son:\n");
	imprimir(av1);
	system("cls");
	printf("Los valores del segundo vector son:\n");
	imprimir(av2);
	system("cls");
	printf("La suma de los dos vectores es: \n");
	sumar(av3, av2, av1);
	imprimir(av3);
	system("cls");
	finalfuncion();
	
	
}


resta(){

	int v1[5];
	int *av1;
	
	int v2[5];
	int *av2;
	
	int v3[5];
	int *av3;
	
	av1=v1;
	av2=v2;
	av3=v3;	
	
	printf("Ingresa los valores del primer vector:\n");
	escribir(av1);
	printf("Ingresa los valores del segundo vector:\n");
	escribir(av2);
	system("cls");
	printf("Los valores del primer vector son:\n");
	imprimir(av1);
	system("cls");
	printf("Los valores del segundo vector son:\n");
	imprimir(av2);
	system("cls");
	printf("La resta de los dos vectores es: \n");
	restar(av3, av1, av2);
	imprimir(av3);
	system("cls");
	finalfuncion();
	
}

mult(){
	
	int v1[5];
	int *av1;
	
	av1=v1;
	
	int escalar;
	
	printf("Ingresa el vector:\n");
	escribir(av1);
	printf("Ingresa el valor del escalar:\n");
	fflush(stdin);
	scanf("%d", &escalar);
	system("cls");
	printf("El valor del escalar es:\n %d\n", escalar);
	printf("El valor del vector es:\n");
	imprimir(av1);
	system("cls");
	multiplicar(av1, escalar);
	printf("El valor del producto del vector por un escalar es:\n");
	imprimir(av1);
	system("cls");
	finalfuncion();
	

	
	
}

menuprincipal(){
	
	int opcion;
	
	printf("1 - Suma de dos vectores\n");
	printf("2 - Resta de dos vectores\n", 130);
	printf("3 - Multiplica por un escalar\n");
	printf("4 - Salir - Termina el programa\n");
	printf("Elige una opcion: ");
	fflush(stdin);
	scanf("%d", &opcion);
	
	switch(opcion){

		case 1:
			system("cls");
			suma();
			break;

		case 2:
			system("cls");
			resta();
			break;

		case 3:
			system("cls");
			mult();
			break;

		case 4:
			exit(0);
			break;
			
		default:
			system("cls");
			printf("Error, elija una opcion valida\n");
			menuprincipal();
			break;

	}
	
	
}

int main(){

	menuprincipal();
	
}
