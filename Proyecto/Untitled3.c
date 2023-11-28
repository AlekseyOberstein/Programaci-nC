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

//definir funciones
int portada();
int menu();
int resgistro();

int main(){
    
    system("color 01");
    
    portada();
    menu();
    
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



int menu(){
	
	
    int owo;
    cout<<"\n\t=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#\n\n";
    printf("\n\t Seleccione una opcion: \n");
    printf("\n\t  1- Registro de Equipo.");
    printf("\n\t  2- Registro de Proceso. ");
    printf("\n\t  3- Resultados Finales");
    printf("\n\t  4- Salir");
    scanf("%d",& owo);
    system("pause");
    system("cls");
    cout<< "\n";
    switch(owo) {
        
        case 1: 
        
            break;
            
        case 2:
            break;
            
        case 3: 
             break;
    }
    
}


