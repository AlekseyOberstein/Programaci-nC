//En este programa se utiliza la función fscanf y la función fgets. 

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
	
	archivo= fopen("archivoC.txt", "r");
	
	if(archivo == NULL){
	
		printf("\nError al abrir el archivo.\n");
	}
	
	
	printf("Vamos a provar archivo\n");

	fflush(stdin);
	fgets(alumno1.nombre, 20, archivo);
	fscanf(archivo, "%d", &alumno1.edad);
	fscanf(archivo, "%f", &alumno1.calificacion);
	

	printf("Nombre: %s", alumno1.nombre);
	printf("Edad: %d\n", alumno1.edad);
	printf("Calificacion: %g\n", alumno1.calificacion);

	
	fclose(archivo);
	
	system("pause");
	return 0;
	
}
