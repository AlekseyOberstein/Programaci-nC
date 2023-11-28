#include <stdlib.h>
#include<stdio.h>

//Write guarda memoria en el buffer, y en bites

struct alumno{
	
	char nombre[20];
	int edad;
	float calificacion; 
	
	
};

FILE *archivo;

int main(){
	
	struct alumno alumno1;
	
	archivo= fopen("archivoB.txt", "a");
	
	printf("Vamos a provar archivo\n");
	printf("Nombre:\n");
	fflush(stdin);
	gets(alumno1.nombre);
	printf("Edad:\n");
	fflush(stdin);
	scanf("%d", &alumno1.edad);
	printf("Calificacion:\n");
	fflush(stdin);
	scanf("%f", &alumno1.calificacion);
	if(archivo == NULL){
	
		printf("\nError al abrir el archivo.\n");
	}
	
	fwrite(&alumno1.nombre, sizeof(char), sizeof(alumno1.nombre), archivo);
	fwrite(&alumno1.edad, sizeof(int), 1, archivo);
	fwrite(&alumno1.calificacion, sizeof(float), 1, archivo);
	
	fclose(archivo);
	
	return 0;
	
}
