#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <cmath>
using namespace std;

int i, j;

typedef struct jugado{
    
    char nom[20]; //nombre del jugador
    int n; //numero del jugador
    int g; //goles por jugador
    
}jugador;

typedef struct equip{

    char name[20]; //nombre equipo 
    jugador ju[12]; //jugadores equipo
    //int g; goles por equipo (para hacerlo más fácil, puede ser una posibilidad)
    //
    

}equipo;

int portada();
int menuinicio(int a, equipo *eq);
int registrom(int b, equipo *eq1);
int registroa(int b, equipo *eq1);

int main(){
	
	int r=1, d;
	float c;
	int tam; //tamaño del arreglo
	equipo *equipos; //areglo estructura de equipo
    
    system("color 2");  
    portada();
    
    while(r){
    	system("cls");
    	printf("\n\t\tIngresa la cantidad de equipos que van a participar:  ");
 	   	scanf("%d", &tam);
 	    c = log2f(tam);
 	    d = c;
			
 		if(d==c){
 		
 			r--;
 		}
	   
	 	else{
	 		
	 		printf("\n\t\tIngresa una potencia de dos.\n\n\t\t");	
	 		system("pause");
		 }
	}
	
	//pow(a,b)=a^b
	
    equipos=(equipo*)malloc(tam * sizeof(int));
    menuinicio(tam, equipos);
    //una vez que se hace el registro, se procede a la función de registro del proceso
    //menu2();
    //funcionfinal(); // resultados finales
    

    
}

int portada(){
    
    cout << "\n\t########################################################";
    cout << "\n\t#\t Universidad Nacional Autonoma de Mexico       #";
    cout << "\n\t#\t Facultad de Estudios Superiores Acatlan       #";
    cout << "\n\t#\t Matematicas Aplicadas y Computacion           #";
    cout << "\n\t#\t Programacion II                               #";   
    cout << "\n\t#\t Lopez Blanco Alma                             #";
    cout << "\n\t#\t Ahumada Leon Masiel Asuan                     #";
    cout << "\n\t#\t Palomares Olegario Alexis                     #"; 
    cout << "\n\t########################################################\n";
    system("pause");
    system("cls");
    return 0;
}


int menuinicio(int a, equipo *eq){
	
	int opcion;
	system("cls");
	printf("\n\t\t1 - Hacer un registro de los equipos manualmente:\n");
	printf("\n\t\t2 - Ingresar los datos de equipo a traves de un archivo(.txt):\n");
	scanf("%d", &opcion);
	switch(opcion){
		case 1:
			system("cls");
			registrom(a, eq); //registro manualmente
			break;
			
		case 2:
			system("cls");
			registroa(a, eq); //registro archivo
			break;
			
		default:
			
			break;
		
	}
	
	
	
}

int registrom(int b, equipo *eq1){
	
	FILE *archivo;
	
	archivo = fopen("JUGADORES.txt", "w");
	
	if(archivo == NULL){
	
		printf("\nError al abrir el archivo.\n");
	}
	
	
	for(i=0; i<b; i++){
		
		system("cls");
		printf("Ingresa los datos del %d%c equipo:\n", i+1, 167);
		printf("Ingresa el nombre del %d%c equipo:\n", i+1, 167);
		fflush(stdin);
		gets(eq1[i].name);
		fputs(eq1[i].name, archivo);
		fprintf(archivo, "\n");
		
		for(j=0;j<=11;j++){
			
			printf("Ingresa el nombre del %d%c jugador:\n", j+1, 167);
			fflush(stdin);
			gets(eq1[i].ju[j].nom);
			fputs(eq1[i].ju[j].nom, archivo);
			
			printf("Ingresa el numero del %d%c jugador:\n", j+1, 167);
			fflush(stdin);
			scanf("%d", &eq1[i].ju[j].n);
			fprintf(archivo, "\n%d\n", eq1[i].ju[j].n);
			
		}
		
	}
	
	fclose(archivo);
	
	
}

int registroa(int b, equipo *eq1){
	
	FILE *archivo;
	
	archivo = fopen("JUGADORES.txt", "w");
	
		for(i=0; i<b; i++){
		
			fgets(eq1[i].name, 20, archivo);

		
		for(j=0;j<=11;j++){
			
			fgets(eq1[i].ju[j].nom, 20, archivo);
			fscanf(archivo, "%d", &eq1[i].ju[j].n);
			
		}
		
	}
	
	fclose(archivo);
	
	
}

menu2(){
	
	

/*	OBTENER LOS DATOS PARA LAS VARIABLES DESDE EL ARCHIVO

	1. Registrar goles por equipo
	2. Resultados actuales
	3.Proximo partido
	
	(Repetir esta función hasta acabar con el torneo).
	Si un partido queda en empate, registrar hasta el desempate*/
	

}


/*funcionfinal(){

	1. Ve los resultados ganadores/perdedores por semana. goles por equipo
	2. Equipo ganador del torneo,  goles del goleador.
	3.Finalizar el torneo. (borrar datos)


}*/
