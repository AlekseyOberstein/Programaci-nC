/*Programa de facturación de clientes*/
#include<stdio.h>
#include<stdlib.h>
#define  T 50/*Tamaño máximo de elementos de todos los arreglos*/
typedef struct Factura_Clientes Factura;
/*Declaracion de la variable factura_clientes*/
struct  Factura_Clientes{
	char nombre[T];
	int num_unidades_solicitadas;
	float precio_unidad;
	char estado_del_cliente[T];
};
int Menu();/*mostrar menú*/
void Insertar(Factura*,int*);/*Ingresar clientes*/
void Desplegar(Factura*,int);/*Mostrar todos los registros*/
main(){
	Factura Clientes[T];/*Arreglo para almacenar máximo 50 clientes*/
	int opc=0,opc2=0,pos=0;
	do{
	/*Bucle para llamar a funciones segun lo que elija el usuario*/
		opc=Menu();
		switch(opc){
			case 1:
				Insertar(Clientes,&pos);
				break;
			case 2:
				Desplegar(Clientes,pos);
				break;
			case 3:
				exit(1);
		}
		printf("Desea seleccionar otra opcion\?\n\n");
		printf("Si[1]\t\tNo[2]\n");
		scanf("%d",&opc2);
	}while(opc2!=3);
}
/*Muestra el menú*/
int Menu(){
	system("cls");
	int opc=0;
	printf("Ingrese una opcion\n\n");
	printf("Ingresar cliente...............1\n");
	printf("Desplegar todos los clientes...2\n");
	printf("Salir..........................3\n");
	scanf("%d",&opc);
	return opc;
}
/*Ingresa clientes*/
void Insertar(Factura* a,int* pos){
	system("cls");
	fflush(stdin);
	printf("Ingrese el nombre.\n");
	fgets(a[*pos].nombre,T,stdin);
	printf("Ingrese el número de unidades solicitadas:\n");
	scanf("%d",&a[*pos].num_unidades_solicitadas);
	printf("Ingrese el precio de las unidades:\n");
	scanf("%f",&a[*pos].precio_unidad);
	fflush(stdin);
	printf("Ingrese el estado del cliente:\n");
	fgets(a[*pos].estado_del_cliente,T,stdin);
	(*pos)++;
}
/*Muestra todos los registros*/
void Desplegar(Factura* a,int pos){
	system("cls");
	for(int i=0;i<pos;i++){
		printf("Nombre(s): %s",a[i].nombre);
		printf("Numero de unidades solicitadas: %d\n",a[i].num_unidades_solicitadas);
		printf("precio total de las unidades: %.2f\n",a[i].precio_unidad*a[i].num_unidades_solicitadas);
		printf("Estado del cliente: %s\n",a[i].estado_del_cliente);
	}
}











