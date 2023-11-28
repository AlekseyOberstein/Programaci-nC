//Este es un programa modular para sumar dos vectores
#include <stdio.h>
#include <stdlib.h>

int i;

escribir(int *a){

    for(i=0;i<=5;i++){

        fflush(stdin);
        scanf("%d", &a[i]);

    }

}

imprimir(int *a){

    for(i=0;i<=5;i++){

        printf("%d", *(a+i));


    }

	printf("\n");

}

sumar(int *a, int *b, int *c){

	for(i=0;i<=5;i++){
			
		a[i]=b[i]+c[i];
		
	}

}


int main(){
    int v1[5];
    int *av1;
    int v2[5];
    int *av2;
    
    int v3[5];
    int *av3;

    av1=v1;
    av2=v2;
    
    av3=v3;

	printf("Este programa suma dos vectores de R^6\n");
    printf("Ingresa los valores del primer vector:\n");
    escribir(av1);
    printf("Ingresa los valores del segundo vector:\n");
    escribir(av2);
    printf("Los valores del primer vector son:\n");
    imprimir(av1);
    printf("Los valores del segundo vector son:\n");
    imprimir(av2);
    sumar(av3, av1, av2);
    printf("El resultado de sumar el arreglo 1 y el arreglo 2 es:\n");
	imprimir(av3);



}
