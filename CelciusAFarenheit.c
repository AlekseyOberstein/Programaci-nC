//Alexis Palomares Olegario
//Práctica #5
/*Se convierte de Grados Celsius a Grados Fahrenheit*/

#include <stdio.h>
int main(){
	
	float c, f;
	char respuesta='s';
	
	while(respuesta=='s' || 'S'==respuesta)
	{
		
		system("cls");
		
		printf("Se convierte de Grados Celsius a Grados Fahrenheit\n");
		printf("Escribe los Grados Celsius\n");
		fflush(stdin);
		scanf("%f", &c);
		
		f=c*1.8+32;
		
		printf("El resultado en Fahrenheit es:\n %g\n", f);
		
		system("pause");
	
		printf("\n%cDeseas convertir otra cantidad?(Escribe s o n)\n", 168);
		fflush(stdin);
		scanf("%c", &respuesta);
}
	system("pause");	
	return 0;	
}
