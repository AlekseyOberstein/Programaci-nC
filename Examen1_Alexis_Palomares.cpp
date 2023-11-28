#include<stdlib.h>
#include<stdio.h>

typedef struct alumnos{
	
	char nombre[15];
	int ncuenta;
	char grupo;
	int espa;
	int mates;
	int historia;
	
}alms;

void leer(alums *als[2]){
	
	for(int i=0; i<3;i++){
		
	printf("\nIngresa el nombre del alumno:\n");
	scanf( "%s", &als[i]->nombre);
	printf("Ingresa su número de cuenta:\n");
	scanf("%d", &als[i]->ncuenta);
	printf("Ingresa su grupo(tipo caracter):\n");	
	scanf("%c", &als[i]->grupo);
	printf("Ingresa la calificacion de Espanol\n");	
	scanf("%d", &als[i]->espa);
	if(als[i].espa<0 || 10<als[i].espa ){
		
		system("cls");
		printf("Error, introduciste una calificacion incorrecta\n");
		principal();
		
	}
	printf("Ingresa la calificacion de Matematicas\n");	
	scanf("%d", &als[i]->mates);
	if(als[i].mates<0 || 10<als[i].mates){
		
		system("cls");
		printf("Error, introduciste una calificacion incorrecta\n");
		principal();
		
	}
	printf("Ingresa la calificacion de Historia\n");	
	scanf("%d", &als[i]->historia);	
	if(als[i].historia<0 || 10<als[i].historia){
		
		system("cls");
		printf("Error, introduciste una calificacion incorrecta\n");
		principal();
		
	}	
		
	}
	

	
}

principal(){
	
	alms grupo[2];
		
	printf("Ingresa los datos de los alumnos:\n");
	leer(&grupo);
	
	
}

int main(){
	

	principal();
	
	
	
}
