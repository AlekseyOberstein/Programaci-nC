#include <stdio.h>
//En este programa ingresas 6 art�culos y el precio de estos, y al final te da el promedio.

struct papeleria{
	
	char articulo[15];
	int precio;
	
	
};

int promedioart(struct papeleria obj1, struct papeleria obj2, struct papeleria obj3, struct papeleria obj4, struct papeleria obj5, struct papeleria obj6);
struct papeleria leer( );

int main(){
	struct papeleria objeto, objeto1, objeto2, objeto3, objeto4, objeto5;
	float resultado;
	
	printf("En este programa ingresas el articulo y el precio de este, y al final se devuelve le promedio.");
	
	objeto=leer();
	objeto1=leer(  );
	objeto2=leer(  );
	objeto3=leer(  );
	objeto4=leer(  );
	objeto5=leer(  );
	
	printf("\n\nEl precio del articulo %s es: %d", objeto.articulo, objeto.precio);
	printf("\n\nEl precio del articulo %s es: %d", objeto1.articulo, objeto1.precio);
	printf("\n\nEl precio del articulo %s es: %d", objeto2.articulo, objeto2.precio);
	printf("\n\nEl precio del articulo %s es: %d", objeto3.articulo, objeto3.precio);
	printf("\n\nEl precio del articulo %s es: %d", objeto4.articulo, objeto4.precio);
	printf("\n\nEl precio del articulo %s es: %d", objeto5.articulo, objeto5.precio);
	resultado=promedioart(objeto, objeto1, objeto2, objeto3, objeto4, objeto5);
	resultado=resultado/6;
	 printf("\n\nEl resultado del promedio de los articulos es: %g\n", resultado); 
	
	system("pause");
	return 0;
	
}

int promedioart(struct papeleria obj1, struct papeleria obj2, struct papeleria obj3, struct papeleria obj4, struct papeleria obj5, struct papeleria obj6){
	
	
	return((obj1.precio+ obj2.precio+obj3.precio+obj4.precio+obj5.precio+obj6.precio));
	
	
}

struct papeleria leer(){
	
	struct papeleria objeto0;
	
	printf("\nIngresa el nombre del articulo:\n");
	scanf( "%s", &objeto0.articulo);
	printf("Ingresa el precio:\n");
	scanf("%d", &objeto0.precio);
	
	return(objeto0);
	
}