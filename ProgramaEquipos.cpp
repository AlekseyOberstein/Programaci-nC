/*programa para introducir la información y llevar los resultados  de los equipos de 
básquetbol y de futbol de una comunidad.*/
#include<stdio.h>
#include<stdlib.h>
#define T 50/*Tamaño máximo de los arreglos*/
/*Redifinición del nombre de las variables tipo datos, basquetbol y futbol*/
typedef struct DATOS Datos;
typedef struct BASQUETBOL Basquetbol;
typedef struct FUTBOL Futbol;
/*Definición de variable tipo Datos, para almacenar los nombres de los equipos
el número de victorias y el número de derrotas*/
struct DATOS{
	char Nombre[T];
	int Numero_Victorias;
	int Numero_Derrotas;
};
/*Definición de la variable Basquetbol, para almacenar los datos propios a un equipo de
basquetbol*/
struct BASQUETBOL{
	Datos Datos_Registro;
	int numero_de_perdidas_de_balon;
	int numero_de_rebotes_recuperados;
	int numero_del_mejor_anotador_de_triples;
	int numero_de_triples_del_mejor_anotador;
};
/*Definición de la variable Furbol, la cual almacenará los datos de los equipos de futbol*/
struct FUTBOL{
	Datos Datos_Registro;
	int numero_de_empates;
	int numero_de_goles_a_favor;
	int numero_de_goles_en_contra;
	char nombre_del_goleador_de_equipo[T];
	int numero_de_goles_del_goleador;
};
/*Declaración de funciones prototipo, para la inserción y el despliegue de la información*/
void InsertarBasquetBol(Basquetbol*,int*);
void InsertarFutbol(Futbol*,int*);
void MostrarBasquetbol(Basquetbol*,int);
void MostrarFutbol(Futbol*,int);
/*Función para desplegar el menú*/
int Menu();
main(){
	int contFut = 0;/*Numero de equipos de futbol registrados*/
	int contBas = 0;/*Numero de equipos de basquetbol registrados*/
	int opc=0;
	int opc2=0;
	/*Arreglos para almacenar los equipos, con una capacidad de 50 elementos*/
	Basquetbol basquetbol[T];
	Futbol futbol[T];
	do{
	opc= Menu();
		/*Sentencia switch para llamar a la función solicitada por el usuario*/
		switch(opc){
			case 1:
				InsertarFutbol(futbol,&contFut);
				break;
			case 2:
				InsertarBasquetBol(basquetbol,&contBas);
				break;
			case 3:
				MostrarFutbol(futbol,contFut);
				break;
			case 4:
				MostrarBasquetbol(basquetbol,contBas);
				break;
			case 5:
				printf("Adios UnU");
				exit(1);
			default:
				printf("Por favor selecciona una opcion valida\n");
		}
		printf("Desea seleccionar otra opcion\?\n\n");
		printf("Si[1]\t\tNo[2]\n");
		scanf("%d",&opc2);
	}while(opc2!=2);
}
/*Definición de la función Menú, la cual regresará un entero, que es la opción seleccionada
por el usuario*/
int Menu(){
	system("cls");/*Limpiar la pantalla*/
	int opc;
	printf("Bienvenido al registro de equipos de Futbol y Basquetbol\n\n");
	printf("Elige una opcion\n\n");
	printf("Ingresar datos en un equipo de Futbol.................1 |\n");
	printf("Ingresar datos en un equipo de Basquetbol.............2 |\n");
	printf("Mostrar registro de todos los equipos de furbol.......3 |\n");
	printf("Mostrar resistro de todos los equipos de basquetbol...4 |\n");
	printf("Salir.................................................5 |\n");
	printf("---------------------------------------------------------\n");
	scanf("%d",&opc);
	return opc;
}
/*Definición de función para insertar equipos de Basquetbol*/
void InsertarBasquetBol(Basquetbol* a,int* cont){
	system("cls");
	fflush(stdin);
	printf("Nombre del equipo:\n");
	fgets(a[*cont].Datos_Registro.Nombre,T,stdin);
	printf("Numero de victorias:\n");
	scanf("%d",&a[*cont].Datos_Registro.Numero_Victorias);
	printf("Numero de derrotas:\n");
	scanf("%d",&a[*cont].Datos_Registro.Numero_Derrotas);
	printf("Numero de perdidas de balon:\n");
	scanf("%d",&a[*cont].numero_de_perdidas_de_balon);
	printf("Numero de rebotes recuperados:\n");
	scanf("%d",&a[*cont].numero_de_rebotes_recuperados);
	printf("Numero del mejor anotador de triples:\n");
	scanf("%d",&a[*cont].numero_del_mejor_anotador_de_triples);
	printf("Numero de triples del mejor anotador:\n");
	scanf("%d",&a[*cont].numero_de_triples_del_mejor_anotador);
	(*cont)++;
	printf("Registro guardado exitosamente!\n\n");
}
/*Definición de función para ingresar equipos de Futbol*/
void InsertarFutbol(Futbol* a,int* cont){
	system("cls");/*Limpiar la pantalla*/
	fflush(stdin);
	printf("Nombre del equipo:\n");
	fgets(a[*cont].Datos_Registro.Nombre,T,stdin);
	printf("Numero de victorias:\n");
	scanf("%d",&a[*cont].Datos_Registro.Numero_Victorias);
	printf("Numero de derrotas:\n");
	scanf("%d",&a[*cont].Datos_Registro.Numero_Derrotas);
	printf("Numero de empates:\n");
	scanf("%d",&a[*cont].numero_de_empates);
	printf("Numero de goles a favor:\n");
	scanf("%d",&a[*cont].numero_de_goles_a_favor);	
	printf("Numero de goles en contra:\n");
	scanf("%d",&a[*cont].numero_de_goles_en_contra);
	fflush(stdin);
	printf("Nombre del goleador del equipo:\n");
	fgets(a[*cont].nombre_del_goleador_de_equipo,T,stdin);
	printf("Numero de goles del goleador:\n");
	scanf("%d",&a[*cont].numero_de_goles_del_goleador);
	printf("Registro guardado exitosamente!\n\n");
	(*cont)++;
}
/*Definición de función para mostrar los registros de todos loe equipos de basquetbol*/
void MostrarBasquetbol(Basquetbol* a,int cont){
	system("cls");
	if(cont==0){
		printf("No hay registros\n\n");
	}
	else{
	for(int i=0;i<cont;i++){
		printf("Nombre del equipo:....................%s",a[i].Datos_Registro.Nombre);
		printf("Numero de victorias:..................%d\n",a[i].Datos_Registro.Numero_Victorias);
		printf("Nuemero de derrotas:..................%d\n",a[i].Datos_Registro.Numero_Derrotas);
		printf("Numero de perdidas de balon:..........%d\n",a[i].numero_de_perdidas_de_balon);
		printf("Numero de rebotes recuperados:........%d\n",a[i].numero_de_rebotes_recuperados);
		printf("Numero del mejor anotador de triples:.%d\n",a[i].numero_del_mejor_anotador_de_triples);
		printf("Numero de triples del mejor anotador:.%d\n",a[i].numero_de_triples_del_mejor_anotador);
		printf("\n\n");
		}
	}
}
/*Definición de función para mostrar los registros de todos loe equipos de futbol*/
void MostrarFutbol(Futbol *a,int cont){
	system("cls");
	if(cont==0){
		printf("No hay registros\n\n");
	}
	else{
	for(int i=0;i<cont;i++){
		printf("Nombre del equipo: %s",a[i].Datos_Registro.Nombre);
		printf("Numero de victorias: %d\n",a[i].Datos_Registro.Numero_Victorias);
		printf("Numero de derrotas: %d\n",a[i].Datos_Registro.Numero_Derrotas);
		printf("Numero de empates: %d\n",a[i].numero_de_empates);
		printf("Numero de goles a favor: %d\n",a[i].numero_de_goles_a_favor);
		printf("Numero de goles en contra: %d\n",a[i].numero_de_goles_en_contra);
		printf("Nombre del goleador del equipo: %s",a[i].nombre_del_goleador_de_equipo);
		printf("Numero de goles del goleador: %d\n",a[i].numero_de_goles_del_goleador);
		}
	}
}
