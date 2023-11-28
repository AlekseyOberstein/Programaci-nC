#include<stdio.h>

/*Sólo se cambia al código  tres cosas:
 1. un * al definir la función con el tipo de dato .
 2. -> "Una flechita" para pasar datos dentro de la función.
 3. & al utilizar la función con el tipo de dato.
 */
// variables globales que no usamos
// funciones prototipo 
// tipos de datos derivados

 struct alumnos
{
	int numCta;
	char nombre[10];
	int edad;
	} ;
	
int promedioEdad( struct alumnos, struct alumnos, struct alumnos);
//void imprimirLista( struct alumnos);
 // alumnos  leerDatos( );       1. es usar return si funciona  
 //  leerDatos(alumnos)          2. PASO POR VALOR  no funciona me da basura
 
  void  leerDatos( struct alumnos *);    //3. PASO POR REFERENCIA
	
int main()
{
	struct alumnos  alumno1 ={123, "Juan", 67}, alumno2, alumno3, alumno4, alumno5;  
	int resultado;
	
	 leerDatos( &alumno2);
	 leerDatos(&alumno3); 
   	 leerDatos(&alumno4);
     leerDatos(&alumno5);
       
    printf( "%d, %s, %d \n", alumno1.numCta, alumno1.nombre, alumno1.edad);
	printf( "%d, %s, %d \n", alumno2.numCta, alumno2.nombre, alumno2.edad);
	printf( "%d, %s, %d \n", alumno3.numCta, alumno3.nombre, alumno3.edad);
    printf( "%d, %s, %d \n", alumno4.numCta, alumno4.nombre, alumno4.edad);
    printf( "%d, %s, %d \n", alumno5.numCta, alumno5.nombre, alumno5.edad);	
	
	resultado = promedioEdad(alumno1, alumno2, alumno3);
	 printf("El promedio de edad de las tres personas  es :%d \n",resultado);
	  
 return 0;
}//main cierra aqui

int promedioEdad( struct alumnos alum1, struct alumnos alum2, struct alumnos alum3)
{
	return(( alum1.edad + alum2.edad + alum3.edad)/3);
	
}

 void leerDatos(struct alumnos *alumnoNuevo )
{

printf("dame numero de cuenta nombre y edad \n");
	scanf( "%d", &alumnoNuevo->numCta);
	scanf( "%s", &alumnoNuevo->nombre);
	scanf( "%d", &alumnoNuevo->edad);
}
