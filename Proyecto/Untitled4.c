#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

typedef struct jugado{
    
    char nom[20]; //nombre del jugador
    int n; //numero del jugador
    int g;// goles del jugador
    
}jugador;

typedef struct equip{

    char nome[20]; //nombre equipo 
    jugador je[12]; //jugadores equipo

}equipo;

int portada();

int main(){
	
	int tam; //tamaño del arreglo
	equipo *equipos;
    
    system("color 01");
    
    portada();
    printf("Ingresa la cantidad de equipos que van a participar:\n");
    scanf("%d", &tam);
    e1=(equip*)malloc(can*sizeof(int));
	registro(equipos, tam);
    
}

int portada(){
    
    cout << "\n\t########################################################";
    cout << "\n\t\t Universidad Nacional Autonoma de Mexico ";
    cout << "\n\t\t Facultad de Estudios Superiores Acatlan";
    cout << "\n\t\t Matematicas Aplicadas y Computacion";
    cout << "\n\t\t Programación II";   
    cout << "\n\t\t Lopez Blanco Alma";
    cout << "\n\t\t Ahumada Leon Masiel Asuan";
    cout << "\n\t\t Palomares Olegario Alexis"; 
    cout << "\n\t########################################################\n";
    system("pause");
    system("cls");
    return 0;
}

int registro(equipo *e1, int can){
    
    for(i=0;i<can){
    	printf("Ingresa el nombre del primer equipo");
    	
    	
    	
	}
    
    
    
}
