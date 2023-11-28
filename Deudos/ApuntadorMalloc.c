/*Este programa genera el tamaño de un arreglo a partir de apuntadores y memoria dinámica*/

#include <stdio.h>
#include <stdlib.h>
int i=0;

escribir(int *a, int b){
	
	for(i=0; i<b;i++){
		
		printf("Ingresa [%d]:\n", i+1);
		scanf("%d", &a[i]);
		
	}
	
}

imprimir(int *a, int b){
	
	for(i=0;i<b;i++){
		
		printf("El valor de [%d] es: %d\n", i+1, a[i]);
		
	}
	
}


int main(){
	
	int *v1;
	int tam;
	
	char respuesta='s';
	
	while(respuesta=='s' || respuesta=='S'){
	
	system("cls");
	printf("Ingresa el tama%co del vector:\n", 164);
	scanf("%d", &tam);
	v1=(int *) malloc(tam * sizeof(int));
	printf("Ingresa los valores del vector:\n");
	escribir(v1, tam);
	system("cls");
	printf("Los valores del vector son:\n");
	imprimir(v1, tam);
	free(v1);
	printf("%cDeseas repetir el programa?(escribe s o n)\n ", 168);
	scanf("%s", &respuesta);
	
}
	
	system("pause");
	return 0;
	
}


