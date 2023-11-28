//Programa modular con arreglos no universales

#include <stdio.h>
#include <stdlib.h>
int i;


escribir(int *a){

    printf("Escribe los valores del vector:\n");

    for(i=0;i<=5;i++){

        scanf("%d", &a[i]);

    }
    printf("\n");


}



imprimir(int *a){

    printf("Los valores del arreglo son:\n");

    for(i=0;i<=5;i++){

        printf("%d\t", a[i]);

    }

	printf("\n");

}



int main(){


    //Se declara el arreglo con su respectivo apuntador
    //  Un arreglo por apuntador es condici�n necesaria para pasar el contenido entre funciones
    int arreglo[5];
    int *apuntador;

    //Se le otorga el tama�o al apuntador de acuerdo al tama�o del arreglo
    apuntador=arreglo;
    
    //Tambi�n puedes utilizar  apuntador=&arreglo[0];

    //Se pasa el apuntador entre las distintas funciones
	escribir(apuntador);
    imprimir(apuntador);

    system("pause");
    return 0;


}
