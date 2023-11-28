#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <cmath>
#include <time.h>

using namespace std;

typedef struct jugado{
    
    char nom[20]; //nombre del jugador
    int n; //numero del jugador
    int g; //goles por jugador
    
}jugador;
int i, j;

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
int arrA(int c, int **arr, int c1);
int menu2(int **arr1, equipo *eq2, int rond, int cont);
int menu2(int **arr1, equipo *eq2, int rond, int cont, int de, int *ganadore, int *perdedore, int contpg1);
int registrot(int **arr2, equipo *eq3, int ro, int co, int d2, int *ganador, int *perdedor, int contpg2);
int numerojugador(int **arr3, equipo *eq4, int r, int c, int nuj1, int i1);
int resultadosa(int **arr3, equipo *eq4, int r, int c, int d3, int *ganado, int *perdedo, int contpg3);
int partido(int **arr4, equipo *eq5, int r1, int c1, int d4, int *ganad, int *perded, int contpg4);
int funcionfinal(int **arr5, equipo *eq6, int r2, int c2, int d5, int *gana, int *perde, int contpg5);
int eganador(int **arr6, equipo *eq7, int r3, int c3, int d6, int *gan, int *perd, int contpg6);

int main(){
	
	int r=1, logtam;
	float logtame;
	int tam, rondas; //tamaño del arreglo
	equipo *equipos; //areglo estructura de equipo
    int **aleatorio;
    int contador=-1;
    int *ganadores;
	int *perdedores;
	int contpg=-1;
	int de2;
    
    system("color 2");  
    portada();
    
    while(r){
    	system("cls");
    	printf("\n\t\tIngresa la cantidad de equipos que van a participar:  ");
 	   	scanf("%d", &tam);
 	    logtam = log2f(tam);
 	    logtame = logtam;
			
 		if(logtam==logtame){
 		
 			r--;
 		}
	   
	 	else{
	 		
	 		printf("\n\t\tIngresa una potencia de dos.\n\n\t\t");	
	 		system("pause");
		 }
	}
	
	//pow(a,b)=a^b
	
	
	rondas = logtame;
	de2=pow(2,logtame);
	ganadores=(int*)malloc(de2-1*sizeof(int));
	perdedores=(int*)malloc(de2-1*sizeof(int));
	
    equipos=(equipo*)malloc(tam * sizeof(int));
    menuinicio(tam, equipos);
    aleatorio = (int**)malloc(logtame * sizeof(int));

	for(i=logtame;i>=0;i--){
		
		aleatorio[i]=(int*)malloc(pow(2,i) * sizeof(int));
		
	}
	
	
    
    arrA(tam, aleatorio, rondas);
    //una vez que se hace el registro, se procede a la función de registro del proceso



    menu2(aleatorio, equipos, rondas, contador, de2, ganadores, perdedores, contpg);
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
			system("cls");
			printf("\n\t\tIngresa una opcion valida.\n");
			menuinicio( a, eq);
			break;
		
	}
	
	
	
}

int registrom(int b, equipo *eq1){
	
	FILE *archivo;
	
	archivo = fopen("JUGADORES.txt", "w");
	
	if(archivo == NULL){
	
		printf("\n\t\tError al abrir el archivo.\n");
	}
	
	
	for(i=0; i<b; i++){
		
		system("cls");
		printf("\n\t\tIngresa los datos del %d%c equipo:\n", i+1, 167);
		printf("\n\t\tIngresa el nombre del %d%c equipo:\n", i+1, 167);
		fflush(stdin);
		gets(eq1[i].name);
		fputs(eq1[i].name, archivo);
		fprintf(archivo, "\n");
		
		eq1[i].gol=0;
		
		for(j=0;j<=11;j++){
			
			printf("\n\t\tIngresa el nombre del %d%c jugador:\n", j+1, 167);
			fflush(stdin);
			gets(eq1[i].ju[j].nom);
			fputs(eq1[i].ju[j].nom, archivo);
			
			printf("\n\t\tIngresa el numero del %d%c jugador:\n", j+1, 167);
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


int arrA(int c, int **arr, int c1){
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
        arr[c1][i]=j;         // La posicion dentro la lista de elegidos es el numero a guardar
        //cout << "ArregloA["<<i<<"]= "<< j << "\n";
    }
}

int menu2(int **arr1, equipo *eq2, int rond, int cont, int de, int *ganadore, int *perdedore, int contpg1){
	
	
	int opcion2;

	system("cls");
	printf("\n\t\t1 - Registrar los resultados del siguiente partido:\n");
	printf("\n\t\t2 - Resultados actuales.\n");
	printf("\n\t\t3 - Proximo partido.\n");
	scanf("%d", &opcion2);
	switch(opcion2){
		case 1:
			system("cls");
			registrot(arr1, eq2, rond, cont, de, ganadore, perdedore, contpg1); //registro torneo
			break;
			
		case 2:
		
			system("cls");
			resultadosa(arr1, eq2, rond, cont, de, ganadore, perdedore, contpg1); //resultados de los partidos
			break;
			
		case 3:
			system("cls");
			partido(arr1, eq2, rond, cont, de, ganadore, perdedore, contpg1); //Proximo partido
			break;
			
		default:
			system("cls");
			printf("\n\t\tIngresa una opcion valida.\n");
			menu2(arr1, eq2, rond, cont, de, ganadore, perdedore, contpg1);
			break;
		
	}



/*	OBTENER LOS DATOS PARA LAS VARIABLES DESDE EL ARCHIVO

	1. Registrar goles por equipo
	2. Resultados actuales
	3.Proximo partido
	
	(Repetir esta función hasta acabar con el torneo).
	Si un partido queda en empate, registrar hasta el desempate*/
	

}

int registrot(int **arr2, equipo *eq3, int ro, int co, int d2, int *ganador, int *perdedor, int contpg2){
	
	int goles;
	int nuj;
	
	co = co +1;
	printf("\n\t\tIngresa el numero de goles del %d%c equipo: %s\n", arr2[ro][co]+1, eq3[arr2[ro][co]].name);
	scanf("%d", &goles);
	eq3[arr2[ro][co]].gol=eq3[arr2[ro][co]].gol+goles;
	for(i=0;0<goles;i--){
		
		numerojugador(arr2, eq3, ro, co, nuj, i);
		
	}
	
	system("cls");
	
	co = co +1;
	printf("\n\t\tIngresa el numero de goles del %d%c equipo: %s\n", arr2[ro][co]+1, eq3[arr2[ro][co]].name);
	scanf("%d", &goles);
	eq3[arr2[ro][co]].gol=eq3[arr2[ro][co]].gol+goles;
	for(i=0;0<goles;i--){
		
		numerojugador(arr2, eq3, ro, co, nuj, i);
		
	}
	
	if(eq3[arr2[ro][co]].gol < eq3[arr2[ro][co-1]].gol){
		system("cls");
		contpg2++;
		arr2[ro-1][((co+1)/2)-1]=arr2[ro][co-1];
		ganador[contpg2]=arr2[ro][co-1];
		perdedor[contpg2]=arr2[ro][co];
		
		if(co==d2-1){
			co=0;
			ro-1;
			d2=pow(2, ro);
			
			if(ro==0){
				
				funcionfinal(arr2, eq3, ro, co, d2, ganador, perdedor, contpg2);
				
			}
			
			
		}
		menu2(arr2, eq3, ro, co, d2, ganador, perdedor, contpg2);
		
	}
	
	if(eq3[arr2[ro][co]].gol>eq3[arr2[ro][co-1]].gol){
		system("cls");
		contpg2++;
		arr2[ro-1][((co+1)/2)-1]=arr2[ro][co-1];
		ganador[contpg2]=arr2[ro][co];
		perdedor[contpg2]=arr2[ro][co-1];
		if(co==d2-1){
			co=0;
			ro-1;
			d2=pow(2, ro);
			
		}
			if(ro==0){
				
				funcionfinal(arr2, eq3, ro, co, d2, ganador, perdedor, contpg2);
				
			}
		menu2(arr2, eq3, ro, co, d2, ganador, perdedor, contpg2);
	}
	
	if(eq3[arr2[ro][co]].gol==eq3[arr2[ro][co-1]].gol){
		
		system("cls");
		co=co-2;
		registrot(arr2, eq3, ro,  co,  d2, ganador, perdedor, contpg2);
		
	}
	

	
	
}

int numerojugador(int **arr3, equipo *eq4, int r, int c, int nuj1, int i1){
	
	printf("\n\t\tIngresa el numero del %d%c goleador:\n", i1+1);
	scanf("%d", &nuj1);
	
	for(j=0;j<12;j++){
			
		if(eq4[arr3[r][c]].ju[j].n==nuj1){
				
			eq4[arr3[r][c]].ju[j].g=eq4[arr3[r][c]].ju[j].g+1;	
			nuj1=0;
				
		}
		if(j==11 && nuj1!=0){
			system("cls");
			printf("\n\t\tIngresa un número de jugador existente:\n");
			numerojugador(arr3, eq4, r, c, nuj1, i1);
			
		}
			
	}
	
}


int resultadosa(int **arr3, equipo *eq4, int r, int c, int d3, int *ganado, int *perdedo, int contpg3){
	
	for(i=0; i<=contpg3;i++){
		
		
		printf("\n\t\tEl resultado del %d%c partido es:\n", i+1);
		cout<<"\n\t\tEl ganador es: "<<eq4[ganado[i]].name<<"con"<<eq4[ganado[i]].gol<<"goles\n";
		cout<<"\n\t\tEl perdedor es: "<<eq4[perdedo[i]].name<<"con"<<eq4[ganado[i]].gol<<"goles\n\n";
		system("pause");
		system("cls");
	}
	menu2(arr3, eq4, r, c, d3, ganado, perdedo, contpg3);
	
}

int partido(int **arr4, equipo *eq5, int r1, int c1, int d4, int *ganad, int *perded, int contpg4){
	
	printf("\n\t\tEl siguiente partido será entre %s y %s\n", eq5[arr4[r1][c1+1]].name, eq5[arr4[r1][c1+2]].name);
	system("pause");
	system("cls");
	menu2(arr4, eq5, r1, c1, d4, ganad, perded, contpg4);
}

funcionfinal(int **arr5, equipo *eq6, int r2, int c2, int d5, int *gana, int *perde, int contpg5){
	
		int opcion3;

	system("cls");
	printf("\n\t\t1 - Ve los resultados ganadores/perdedores por partido:\n");
	printf("\n\t\t2 - Equipo ganador del torneo.\n");
	printf("\n\t\t3 - Finalizar.\n");
	scanf("%d", &opcion3);
	switch(opcion3){
		case 1:
			system("cls");
			resultadosa(arr5, eq6, r2, c2, d5, gana, perde, contpg5); //resultados de los partidos
			break;
			
		case 2:
		
			system("cls");
			eganador(arr5, eq6, r2, c2, d5, gana, perde, contpg5);
			break;
			
		case 3:
			system("cls");
			exit(0); //Salir
			break;
			
		default:
			system("cls");
			printf("\n\t\tIngresa una opcion valida.\n");
			funcionfinal(arr5, eq6, r2, c2, d5, gana, perde, contpg5);
			break;
		
	}

/*	1. Ve los resultados ganadores/perdedores por partido. goles por equipo
	2. Equipo ganador del torneo,  goles del goleador.
	3.Finalizar el torneo. (borrar datos)*/
}

int eganador(int **arr6, equipo *eq7, int r3, int c3, int d6, int *gan, int *perd, int contpg6){
	
	printf("\n\t\tEl equipo ganador es: %s\n", eq7[gan[contpg6]].name);
	printf("\n\t\tLos goles anotados por el equipo son: %d\n", eq7[gan[contpg6]].gol);
	for(i=0;i<12;i++){
		
		if(eq7[gan[contpg6]].ju[i].g>0){
			
			printf("\n\t\tEl jugador %s anoto %d goles\n", eq7[gan[contpg6]].ju[i].nom, eq7[gan[contpg6]].ju[i].g);
			
		}
		
	}
	
	system("pause");
	system("cls");
	funcionfinal(arr6, eq7, r3, c3, d6, gan, perd, contpg6);
	
}


