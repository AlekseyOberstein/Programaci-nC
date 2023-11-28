#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

int opcion, li, i;
int pptc;
char ppt1[7], ppt2[7], piedra[6]="piedra", papel[5]="papel", tijeras[7]="tijeras";
int cppt1, cppt2;
computadora();
char respuesta;

final1(){
	
	if(cppt1==1){
		
		if(cppt2==1){
			
			printf("\n\t\tEl primer jugador escogio PIEDRA.\n");
			printf("\n\t\tEl segundo jugador escogio PIEDRA.\n\n");
			printf("\t\t\t%cEMPATE!", 173);
			
		}
		else if(cppt2==2){
			
			printf("\n\t\tEl primer jugador escogio PIEDRA.\n");
			printf("\n\t\tEl segundo jugador escogio PAPEL.\n\n");
			printf("\t\t\t%cEL SEGUNDO JUGADOR GANA!", 173);
			
			
		}
		else if(cppt2==3){
			
			printf("\n\t\tEl primer jugador escogio PIEDRA.\n");
			printf("\n\t\tEl segundo jugador escogio TIJERAS.\n\n");
			printf("\t\t\t%cEL PRIMER JUGADOR GANA!", 173);
		}
		
	}
	else if(cppt1==2){
		
		if(cppt2==1){
		
			printf("\n\t\tEl primer jugador escogio PAPEL.\n");
			printf("\n\t\tEl segundo jugador escogio PIEDRA.\n\n");
			printf("\t\t\t%cEL PRIMER JUGADOR GANA!", 173);
			
			
		}
		else if(cppt2==2){
			
			printf("\n\t\tEl primer jugador escogio PAPEL.\n");
			printf("\n\t\tEl segundo jugador escogio PAPEL.\n\n");
			printf("\t\t\t%cEMPATE!", 173);
			
		}
		else if(cppt2==3){
			
			printf("\n\t\tEl primer jugador escogio PAPEL.\n");
			printf("\n\t\tEl segundo jugador escogio TIJERAS.\n\n");
			printf("\t\t\t%cEL SEGUNDO JUGADOR GANA!", 173);
			
		}		
	}
	else if(cppt1==3){
		
		if(cppt2==1){
			
			printf("\n\t\tEl primer jugador escogio TIJERAS.\n");
			printf("\n\t\tEl segundo jugador escogio PIEDRA.\n\n");
			printf("\t\t\t%cEL SEGUNDO JUGADOR GANA!", 173);
	
		}
		else if(cppt2==2){
			
			printf("\n\t\tEl primer jugador escogio TIJERAS.\n");
			printf("\n\t\tEl segundo jugador escogio PAPEL.\n\n");
			printf("\t\t\t%cEL PRIMER JUGADOR GANA!", 173);
			
		}
		else if(cppt2==3){
			
			printf("\n\t\tEl primer jugador escogio TIJERAS.\n");
			printf("\n\t\tEl segundo jugador escogio TIJERAS.\n\n");
			printf("\t\t\t%cEMPATE!", 173);
			
				
		}
	}
	
	printf("\n\n");
	printf("\t%cDeseas volver a repetir el programa?(escribe s o n)", 168);
	fflush(stdin);
	printf("\n");
	scanf("%c", &respuesta);
	if('s'==respuesta || 'S'==respuesta){
		
		system("cls");
		principal();
		
	}
	else{
		
		exit(0);
		
	}
	
}

posibilidades2(){
	
	li=0;
	for(i=0;i<=5;i++){
		if(ppt2[i]==piedra[i]){
			li++;
			if(li==6){
				
				cppt2=1;
				final1();
				
				
			}
				
		}
		
	}
	
	li=0;
	for(i=0;i<=4;i++){
		
		if(ppt2[i]==papel[i]){
			li++;
			if(li==5){
				
				cppt2=2;
				final1();
				
				
			}
			
		}
		
	}
	
	li=0;
	for(i=0;i<=6;i++){
		
		if(ppt2[i]==tijeras[i]){
			li++;
			if(li==6){
				
				cppt2=3;
				final1();
				
				
			}
				
		}
		
	}
	
	if(0<=li){
	
		printf("El segundo jugador no ingreso una opcion valida.\n");
		jugadores();
	
	}
	
	
	
}




posibilidades1(){
	
	for(i=0;i<=6;i++){
		
		ppt1[i]=tolower(ppt1[i]);
		ppt2[i]=tolower(ppt2[i]);
		
	}
	li=0;
	for(i=0;i<=5;i++){
		if(ppt1[i]==piedra[i]){
			li++;
			if(li==6){
				
				cppt1=1;
				posibilidades2();
				
			}
				
		}
		
	}
	
	li=0;
	for(i=0;i<=4;i++){
		
		if(ppt1[i]==papel[i]){
			li++;
			if(li==5){
				
				cppt1=2;
				posibilidades2();
				
			}
			
		}
		
	}
	
	li=0;
	for(i=0;i<=6;i++){
		
		if(ppt1[i]==tijeras[i]){
			li++;
			if(li==6){
				
				cppt1=3;
				posibilidades2();
				
			}
				
		}
		
	}
	
	if(0<=li){
	
	printf("El primer jugador no ingreso una opcion valida.\n");
	jugadores();
	
	}
}


jugadores(){
	
	printf("Jugador 1, escribe piedra, papel o tijeras:\n");
	fflush(stdin);
	gets(ppt1);
	system("cls");
	printf("Jugador 2, escribe piedra, papel o tijeras:\n");
	fflush(stdin);
	gets(ppt2);
	system("cls");
	posibilidades1();
	
	
}

final(){
	
	char respuesta='s';
	
	if(cppt1==1){
		
		
		if(cppt2==1){
			
			printf("\n\t\tEl primer jugador escogio PIEDRA.\n");
			printf("\n\t\tLa computadora escogio PIEDRA.\n\n");
			printf("\t\t\t%cEMPATE!", 173);
			
		}
		else if(cppt2==2){
			
			printf("\n\t\tEl primer jugador escogio PIEDRA.\n");
			printf("\n\t\tLa computadora escogio PAPEL.\n\n");
			printf("\t\t\t%cLA COMPUTADORA GANA!", 173);
			
			
		}
		else if(cppt2==3){
			
			printf("\n\t\tEl primer jugador escogio PIEDRA.\n");
			printf("\n\t\tLa computadora escogio TIJERAS.\n\n");
			printf("\t\t\t%cEL PRIMER JUGADOR GANA!", 173);
		}
		
	}
	else if(cppt1==2){
		
		if(cppt2==1){
		
			printf("\n\t\tEl primer jugador escogio PAPEL.\n");
			printf("\n\t\tLa computadora escogio PIEDRA.\n\n");
			printf("\t\t\t%cEL PRIMER JUGADOR GANA!", 173);
			
			
		}
		else if(cppt2==2){
			
			printf("\n\t\tEl primer jugador escogio PAPEL.\n");
			printf("\n\t\tLa computadora escogio PAPEL.\n\n");
			printf("\t\t\t%cEMPATE!", 173);
			
		}
		else if(cppt2==3){
			
			printf("\n\t\tEl primer jugador escogio PAPEL.\n");
			printf("\n\t\tLa computadora escogio TIJERAS.\n\n");
			printf("\t\t\t%cLA COMPUTADORA GANA!", 173);
			
		}		
	}
	else if(cppt1==3){
		
		if(cppt2==1){
			
			printf("\n\t\tEl primer jugador escogio TIJERAS.\n");
			printf("\n\t\tLa computadora escogio PIEDRA.\n\n");
			printf("\t\t\t%cLA COMPUTADORA GANA!", 173);
	
		}
		else if(cppt2==2){
			
			printf("\n\t\tEl primer jugador escogio TIJERAS.\n");
			printf("\n\t\tLa computadora escogio PAPEL.\n\n");
			printf("\t\t\t%cEL PRIMER JUGADOR GANA!", 173);
			
		}
		else if(cppt2==3){
			
			printf("\n\t\tEl primer jugador escogio TIJERAS.\n");
			printf("\n\t\tLa computadora escogio TIJERAS.\n\n");
			printf("\t\t\t%cEMPATE!", 173);
			
				
		}
	}
	
	printf("\n\n");
	printf("\t%cDeseas volver a repetir el programa?(escribe s o n)", 168);
	fflush(stdin);
	printf("\n");
	scanf("%c", &respuesta);
	if('s'==respuesta || 'S'==respuesta){
		
		system("cls");
		principal();
		
	}
	else{
		
		exit(0);
		
	}
	
}



eleccionc(){
	
	pptc=0;
	srand(time(NULL));
	
	pptc=rand()%4;
	
	if(pptc==1){
		
		cppt2=1;
		final();
		
	}
	else if(pptc==2){
		
		cppt2=2;
		final();
		
	}
	else if(pptc==3){
		
		cppt2=3;
		final();
		
		
	}
	else{
		
		eleccionc();
		
	}
	
}


igualar(){
	
	for(i=0;i<=6;i++){
		
		ppt1[i]=tolower(ppt1[i]);
		
		
	}
	
	li=0;
	for(i=0;i<=5;i++){
		if(ppt1[i]==piedra[i]){
			li++;
			if(li==6){
				
				cppt1=1;
				eleccionc();
				
			}
				
		}
		
	}
	
	li=0;
	for(i=0;i<=4;i++){
		
		if(ppt1[i]==papel[i]){
			li++;
			if(li==5){
				
				cppt1=2;
				eleccionc();
				
			}
			
		}
		
	}
	
	li=0;
	for(i=0;i<=6;i++){
		
		if(ppt1[i]==tijeras[i]){
			li++;
			if(li==6){
				
				cppt1=3;
				eleccionc();
				
			}
				
		}
		
	}
	
	if(0<=li){
	
		printf("El primer jugador no ingreso una opcion valida.\n");
		computadora();
	}
	
}


computadora(){
	
	printf("Jugador 1, escribe piedra, papel o tijeras:\n");
	fflush(stdin);
	gets(ppt1);
	system("cls");
	
	igualar();
	
	
	
}


principal(){
	
	printf("\t\t*******************************\n\t\t*                             *\n\t\t*   Piedra, Papel y tijeras   *\n\t\t*                             *\n\t\t*******************************\n");
	
	printf("\n\n\t\t1. Jugador VS Computadora\n\n");
	printf("\t\t2. Jugador VS Jugador\n\n");
	printf("Selecciona una opcion:");
	fflush(stdin);
	scanf("%d", &opcion);
	
	switch(opcion){
		
		case 1:
			
			system("cls");
			computadora();
			
			break;
		
		case 2:
			
			system("cls");
			jugadores();
			break;
		
		default:
			
			system("cls");
			printf("Ingresa una opcion valida\n\n");
			principal();
			break;		
		
		
		
	}
	
	
	
}



int main(){
	
	principal();
	

}
