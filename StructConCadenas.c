#include <stdio.h>
#include <stdlib.h>
//En este programa ingresas 6 artículos y el precio de estos, y al final te da el promedio.

struct papeleria{
	
	char articulo[15];
	int precio;
	
	
};

int promedioart(struct papeleria [50]);
void leer(struct papeleria [50]);

int main(){
	struct papeleria objeto[5];
	int resultado;
	
	printf("En este programa ingresas el articulo y el precio de este, y al final se devuelve le promedio.");
	
	leer(objeto);

	
	printf("\n\nEl precio del articulo %s es: %d", objeto[0].articulo, objeto[0].precio);
	printf("\n\nEl precio del articulo %s es: %d", objeto[1].articulo, objeto[1].precio);
	printf("\n\nEl precio del articulo %s es: %d", objeto[2].articulo, objeto[2].precio);
	printf("\n\nEl precio del articulo %s es: %d", objeto[3].articulo, objeto[3].precio);
	printf("\n\nEl precio del articulo %s es: %d", objeto[4].articulo, objeto[4].precio);
	printf("\n\nEl precio del articulo %s es: %d", objeto[5].articulo, objeto[5].precio);
	resultado=promedioart(objeto);
	 
	 printf("\n\nEl resultado del promedio de los articulos es: %d\n", resultado); 
	
	system("pause");
	return 0;
	
}

int promedioart(struct papeleria obj[5]){
	
	int res=0;
	for(int i=0;i<=5;i++){
		
		res=res+obj[i].precio;
	
}
	return(res/6);	
}

void leer(struct papeleria objNuevo[5]){
	
	for(int i=0;i<=5;i++){
	printf("\nIngresa el nombre del articulo y el precio del articulo:\n");
	scanf( "%s", &objNuevo[i].articulo);
	scanf("%d", &objNuevo[i].precio);
	}
	
}
