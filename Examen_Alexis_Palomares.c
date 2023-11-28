//Alexis Palomares Olegario
//Examen 3 Unidad 4
//Menú con los problemas 	 Datos del alumno, Servicio médico, Mayusculas y minusculas y Determinante de una matriz de 3x3

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define t 3
#include <string.h>
int opcion, final1, final2, final3, final4;
char nombre[100];
float diez, peso;
char frase[1000];
int tamanoc, asc, m;
int matriz1[t][t];
int altura, an, dia, mes, ans;
float determinante;

finalfuncion4(){
	
	printf("\n\nPresione 1 para volver a realizar la operacion.");
    printf("\nPresione 2 para volver al menu principal.");
    printf("\nPresione 3 para salir del programa.\n");
    fflush(stdin);
    scanf("%d", &final4);
    
    switch (final4){
    case 1:
    	system("cls");
        det();
        break;
    case 2:
       	system("cls");
       	menuprincipal();
        break;
    case 3:
       	exit(-1);
       	break;
    default:
       	system("cls");
		printf("\aError, elija una opcion valida");
        finalfuncion4();	
        break;
	}
}

finalfuncion3(){
	
	printf("\n\nPresione 1 para volver a realizar la operacion.");
    printf("\nPresione 2 para volver al menu principal.");
    printf("\nPresione 3 para salir del programa.\n");
    fflush(stdin);
    scanf("%d", &final3);
    
    switch (final3){
    case 1:
    	system("cls");
        mayuscula();
        break;
    case 2:
       	system("cls");
       	menuprincipal();
        break;
    case 3:
       	exit(-1);
       	break;
    default:
       	system("cls");
		printf("\aError, elija una opcion valida");
        finalfuncion3();	
        break;
	}
}

finalfuncion2(){
	
	printf("\n\nPresione 1 para volver a realizar la operacion.");
    printf("\nPresione 2 para volver al menu principal.");
    printf("\nPresione 3 para salir del programa.\n");
    fflush(stdin);
    scanf("%d", &final2);
    
    switch (final2){
    case 1:
    	system("cls");
        servicio();
        break;
    case 2:
       	system("cls");
       	menuprincipal();
        break;
    case 3:
       	exit(-1);
       	break;
    default:
       	system("cls");
		printf("\aError, elija una opcion valida");
        finalfuncion2();	
        break;
	}
}

finalfuncion1(){
	
	printf("\n\nPara volver a imprimir los datos del alumno");
    printf("\nPresione 2 para volver al menu principal.");
    printf("\nPresione 3 para salir del programa.\n");
    fflush(stdin);
    scanf("%d", &final1);
    
    switch (final1){
    case 1:
    	system("cls");
        datos();
        break;
    case 2:
       	system("cls");
       	menuprincipal();
        break;
    case 3:
       	exit(-1);
       	break;
    default:
       	system("cls");
		printf("\aError, elija una opcion valida");
        finalfuncion1();	
        break;
	}
        	
}

det1(int matriz[t][t]){
	
	determinante=matriz1[1][1]*(matriz1[2][2]*matriz1[3][3]-matriz1[3][2]*matriz1[2][3])-matriz1[1][2]*(matriz1[2][1]*matriz1[3][3]-matriz1[3][1]*matriz1[2][3])+matriz1[1][3]*(matriz1[2][1]*matriz1[3][2]-matriz1[3][1]*matriz1[2][2]);
	printf("%g", determinante);
}
/*det2(matriz[t][t]){
	


   
cofactor(){



}


*/


imprimir(int matriz[t][t]){
	
	int a, b;
	for(a=1;a<=t;a++){
		for(b=1;b<=t;b++){
			printf("\t%d\t", matriz[a][b]);
			
			
			
		}
		
		printf("\n");
		
	}
	
	
}


rellenar(int matriz[t][t]){
	
	int a, b;
	
	for(a=1;a<=t;a++){
		for(b=1;b<=t;b++){
			printf("Ingresa el numero de la posicion: [%d][%d]:\n", a, b);
			fflush(stdin);
			scanf("%d", &matriz[a][b]);
			
			
			
		}
		
	
		
	}
	
	
	
}

det(){


	printf("Ingresa los valores de la matriz:\n");
	rellenar(matriz1);
	system("cls");
	printf("La matriz es:\n");
	imprimir(matriz1);
	printf("\n\nEl determinante de la matriz es:\n");
	det1(matriz1);
	finalfuncion4();
			
}

mayuscula(){
	
	printf("Ingresa la frase:\n");
	fflush(stdin);
	gets(frase);
	
	tamanoc=strlen(frase);
	
	for(m=0; m<=tamanoc;m++){
		
		frase[m]=tolower(frase[m]);
			
	}
	
	frase[0]=toupper(frase[0]);
	
	for(m=0;m<tamanoc;m++){
		 
		asc=frase[m];
		if(32==asc){
			
			frase[m+1]=toupper(frase[m+1]);
			
		}
	
	}

	printf("Tu frase es: %s", frase);
		
	
	finalfuncion3();
		
}
	
servicio(){
	
	printf("Ingresa tu nombre completo\n");
	fflush(stdin);
	gets(nombre);
	printf("Ingresa tu altura en centimetros\n");
	fflush(stdin);
	scanf("%d", &altura);
	if(altura<=20){
	
		system("cls");
		printf("\aError, ingrese una altura valida\n");
		servicio();
}
	printf("Ingresa tu a%co de nacimiento en el formato dddd\n", 164);
	fflush(stdin);
	scanf("%d", &an);
	if(an<=1880 || 2022<=an){
		system("cls");
		printf("\aError, ingrese una año valido\n");
		servicio();
	}
	printf("Ingresa tu mes de nacimiento en el formato mm:\n");
	fflush(stdin);
	scanf("%d", &mes);
	if(mes<=0 || 12<mes){
		system("cls");
		printf("\aError, ingrese una mes valido\n");
		servicio();
	}
	printf("Ingresa tu dia de nacimiento en el formato dd:\n");
	fflush(stdin);
	scanf("%d", &dia);
	if(dia<1 || 31<dia){
		system("cls");
		printf("\aError, ingrese un dia valido\n");
		servicio();
	}
	if(25<dia){
		
		if(1<=mes){
			
			if(2021<=an){
				
				system("cls");
				printf("\aIngresa, una fecha valida\n");
				servicio();
				
				
			}
			
			
		}
		
	}
	ans=2020-an;
	if(an==2020){
	
		if(dia<25){
		
			ans=ans+1;
		
		}
	}
	
	diez=0.1*ans;
	peso=(altura-100+diez)*0.9;
	
	printf("Su nombre completo es: %s\n", nombre);
	printf("Su edad es: %d\n", ans);
	printf("Su altura es: %d\n", altura);
	printf("Su peso recomendado es: %g\n", peso);
	
	
	
	finalfuncion2();
	
	
}

datos(){
	
	printf("Nombre completo: Palomares Olegario Alexis\n");
	printf("No. de cuenta: 420035969\n");
	printf("Correo: 420035969@pcpuma.acatlan.unam.mx\n");
	finalfuncion1();

	
}

menuprincipal(){
	
	
	printf("1 - Datos del alumno\n");
	printf("2 - Servicio m%cdico\n", 130);
	printf("3 - Mayusculas y minusculas\n");
	printf("4 - Determinante de una matriz de 3x3\n");
	printf("5 - Salir - Termina el programa\n");
	printf("Elige una opcion");
	fflush(stdin);
	scanf("%d", &opcion);
	
	switch(opcion){

		case 1:
			system("cls");
			datos();
			break;

		case 2:
			system("cls");
			servicio();
			break;

		case 3:
			system("cls");
			mayuscula();
			break;

		case 4:
			system("cls");
			det();
			break;

		case 5:
			exit(0);
			break;

		default:
			system("cls");
			printf("Error, elija una opcion valida\n");
			menuprincipal();
			break;

	}
	
	
}

int main(){

	menuprincipal();
	
}
