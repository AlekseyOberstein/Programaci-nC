//La función fprintf guarda los valores como impresión en un archivo.

#include <stdlib.h>
#include<stdio.h>

struct alumno{
	
	char nombre[20];
	int edad;
	float calificacion; 
	
	
};

FILE *archivo;

int main(){
	
	struct alumno alumno1;
	
	archivo= fopen("archivoA.txt", "a");
	
	printf("Vamos a provar archivo\n");
	printf("Nombre:\n");
	fflush(stdin);
	gets(alumno1.nombre);
	printf("Edad:\n");
	scanf("%d", &alumno1.edad);
	printf("Calificacion:\n");
	scanf("%f", &alumno1.calificacion);
	if(archivo == NULL){
	
		printf("\nError al abrir el archivo.\n");
	}
	
	fprintf(archivo, "Nombre: %s\n", alumno1.nombre);
	fprintf(archivo, "Edad: %d\n", alumno1.edad);
	fprintf(archivo, "Calificacion: %f\n", alumno1.calificacion);
	
	fclose(archivo);
	
}
