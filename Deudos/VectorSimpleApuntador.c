#include <stdio.h>
#include <stdlib.h>
int i;

ejemplo(){

    int arreglo[51];
    int *apuntador;

    for(i=0; i<51;i++){

        arreglo[i]=i;

    }

    apuntador=&arreglo[0];

    for(i=0;i<51;i++){

        printf("%d\t", arreglo[i]);

    }


    	 printf("\n---------------------------------------------------\n");
    apuntador=arreglo;

    for(i=0; i<51;i++){

          printf("%d\t", arreglo[i]);

    }

}

int main(){

    char respuesta='s';

    while(respuesta=='s' || respuesta=='S'){

        ejemplo();
        printf("\n%cDeseas repetir?\n", 168);
        fflush(stdin);
        scanf("%c", &respuesta);

    }

    system("pause");
    return 0;
}
