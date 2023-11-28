//fputs sólo guarda cadenas de carácteres, y fputc guarda cracteres


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
	
	archivo= fopen("archivoC.txt", "a");
	
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
	
	fputs(alumno1.nombre, archivo);//Sólo en esta parte usamos fputs
	fprintf(archivo, "\n%d\n", alumno1.edad);
	fprintf(archivo, "%f\n", alumno1.calificacion);
	
	fclose(archivo);
	
	return 0;
	
}
