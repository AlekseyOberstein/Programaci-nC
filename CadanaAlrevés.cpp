//Alexis Palomares Olegario
//Práctica #18
//En este programa ingresas una cadena de caracteres, te dice cuántos carácteres contiene y la imprime alrevés
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	
	char cadena[1000];
	int cantidad;
	char respuesta='s';
	
	while(respuesta=='s' || respuesta=='S'){
	
		system("cls");
	
		printf("Ingresa los caracteres y presiona Enter:\n\n");
		fflush(stdin);
		gets(cadena);
	
		printf("\n");
	
		cantidad=strlen(cadena);
	
		printf("La cantidad de elementos que hay en tu cadena es: %d\n\n", cantidad);
		
		printf("Tu cadena alreves es:\n ");
	
		for(cantidad; -1<cantidad; cantidad--){
		
			printf("%c", cadena[cantidad]);
		
		}
	
			printf("\n");	
			printf("\n");
			system("pause");

			system("cls");
		
			printf("%cDeseas repetir el programa?(Escribe s o n)\n", 168);
			fflush(stdin);
			scanf("%c", &respuesta);

}

	
	system("pause");
	return 0;
	
	
}
