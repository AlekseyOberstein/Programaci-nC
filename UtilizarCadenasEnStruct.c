#include<stdio.h>  //UNO
// variables globales que no usamos
// funciones prototipo 
// tipos de datos derivados
//DOS
 struct alumnos
{
	int numCta;
	char nombre[10];
	int edad;
	
	};
	
int promedioEdad( struct alumnos [50]);
//void imprimirLista( struct alumnos);
 // alumnos  leerDatos( );       1. es usar return si funciona  
 //  leerDatos(alumnos)          2. PASO POR VALOR  no funciona me da basura
 
  void  leerDatos( struct alumnos [50]);    //3. PASO POR REFERENCIA
	//TRES
int main()
{
	alumnos  alumno[50];
		int resultado;
	
	 leerDatos( alumno); // arreglo contiguas
	  
    for (int i=0; i<50; i++) 
         printf( "%d, %s, %d \n", alumno[i].numCta, alumno[i].nombre, alumno[i].edad);
	 	
	
	resultado = promedioEdad(alumno);
	 printf("El promedio de edad de las tres personas  es :%d \n",resultado);
	  
 return 0;
}//main cierra aqui

//CUATRO

int promedioEdad( struct alumnos al[50])
{
	int res=0;     // acumular todas las edades   res=res+edad
	
	for (int i=0; i<50; i++){
	
	    res= res+al[i].edad;
	    
}

	return(res/50);
	
}

 void leerDatos(struct alumnos alumnoNuevo[50] )
{

for (int i=0; i<50; i++){

    printf("dame numero de cuenta nombre y edad \n");
	scanf( "%d", &alumnoNuevo[i].numCta);
	scanf( "%s", &alumnoNuevo[i].nombre);
	scanf( "%d", &alumnoNuevo[i].edad);}

}

