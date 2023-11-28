#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <cmath>
#include <time.h>

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
    int gol; //goles por equipo (para hacerlo más fácil, puede ser una posibilidad)
    //
    

}equipo;

int portada();
int menuinicio(int a, equipo *eq);
int registrom(int b, equipo *eq1);
int registroa(int b, equipo *eq1);
int arrA(int c, int *arr);
int menu2(int *arr1, equipo *eq2);
int registrot(int *arr2, equipo *eq3);

int main(){
	
	int r=1, logtam;
	float logtame;
	int tam; //tamaño del arreglo
	equipo *equipos; //areglo estructura de equipo
    int *aleatorio;
    system("color 2");  
    portada();
    
    while(r){
    	system("cls");
    	printf("\n\t\tIngresa la cantidad de equipos que van a participar:  ");
 	   	scanf("%d", &tam);
 	    logtam = log2f(tam);
 	    logtame = logtam;
			
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
    aleatorio = (int*)malloc(tam * sizeof(int));
    arrA(tam, aleatorio);
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
		
		eq1[i].gol=0;
		
		for(j=0;j<=11;j++){
			
			printf("Ingresa el nombre del %d%c jugador:\n", j+1, 167);
			fflush(stdin);
			gets(eq1[i].ju[j].nom);
			fputs(eq1[i].ju[j].nom, archivo);
			
			printf("Ingresa el numero del %d%c jugador:\n", j+1, 167);
			fflush(stdin);
			scanf("%d", &eq1[i].ju[j].n);
			fprintf(archivo, "\n%d\n", eq1[i].ju[j].n);
			
			eq1[i].ju[j].g = 0;
			
		}
		
	}
	
	fclose(archivo);
	
	
}

int registroa(int b, equipo *eq1){
	
	FILE *archivo;
	
	archivo = fopen("JUGADORES.txt", "w");
	
		for(i=0; i<b; i++){
		
			fgets(eq1[i].name, 20, archivo);
			eq1[i].gol=0;
		
		for(j=0;j<=11;j++){
			
			fgets(eq1[i].ju[j].nom, 20, archivo);
			fscanf(archivo, "%d", &eq1[i].ju[j].n);
			eq1[i].ju[j].g = 0;
		}
		
	}
	
	fclose(archivo);
	
	
}


int arrA(int c, int *arr){
        // lista de 15 numeros aleatorios de 0 a 7 sin repetirse
    bool elegidos[c-1]; // ¿ya salio ese numero? (del 0 al 7)
    int posibles=c;
    int contador,posicion;
    int i,j;
    srand(time(NULL));

    for (i=0; i<c; i++){
	
	 elegidos[i]=false;
	 } // Empieza que no se ha elegido ningun numero
	 
    for (i=0; i<c; i++) {
        posicion=rand()%posibles+1;  // elige al azar una posicion entre los no elegidos (de 1 a 21)
        j=0;
        contador=0; // cuenta los numeros no elegidos que encuenta.
        while (contador<posicion) {         // Cuenta las posiciones no elegidas
            if (!elegidos[j++])contador++;  // Si el numero ya fue elegido se ignora
        }
        j--; // Cuando encuentra la posicion hace un j++ de mas.
        elegidos[j]=true;   // se marca la posicion como elegida
        posibles--;         // hay una posicion "no elegida" menos
        arr[i]=j;         // La posicion dentro la lista de elegidos es el numero a guardar
        //cout << "ArregloA["<<i<<"]= "<< j << "\n";
    }
}

int menu2(int *arr1, equipo *eq2, int cant){
	
	
	int opcion2;
	
	
	system("cls");
	printf("\n\t\t1 - Registrar los resultados del siguiente partido:\n");
	printf("\n\t\t2 - Resultados actuales.\n");
	printf("\n\t\t3 - Proximo partido.\n");
	scanf("%d", &opcion2);
	switch(opcion2){
		case 1:
			system("cls");
			registrot(arr1, eq2); //registro torneo
			break;
			
		case 2:
			system("cls");
		//	resultados(a, eq); //resultados de los partidos
			break;
			
		case 3:
			system("cls");
		//	partido(a, eq); //Proximo partido
			break;
			
		default:
			
			break;
		
	}



/*	OBTENER LOS DATOS PARA LAS VARIABLES DESDE EL ARCHIVO

	1. Registrar goles por equipo
	2. Resultados actuales
	3.Proximo partido
	
	(Repetir esta función hasta acabar con el torneo).
	Si un partido queda en empate, registrar hasta el desempate*/
	

}

int registrot(int *arr2, equipo *eq3){
	
	
	printf("Ingresa el número de goles del %d%c: %s", arr);
	
	
}


/*funcionfinal(){

	1. Ve los resultados ganadores/perdedores por semana. goles por equipo
	2. Equipo ganador del torneo,  goles del goleador.
	3.Finalizar el torneo. (borrar datos)


}*/
