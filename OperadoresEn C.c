#include <stdio.h>
#include <stdlib.h>

int main(){
	int a, b, c, d, e, g, h, i;
	
	
	//Operadores aritméticos
	a=50+60;
	b=100-50;
	c=5*10;
	d=80/6;
	e=93%5;
	
	printf("La suma es:%d \n\nLa resta es:%d \n\nLa multiplicacion es; %d \n\nLa division es: %d \n\n", a, b, c, d);
	printf("El residuo es:%d \n\n", e);
	
	//Operadores incrementales
	
	a=a++;
	printf("El valor de a++ es:%d \n", a);
	
	a=++a;
	printf("El valor de ++a es:%d \n", a);
	
	a=++a;
	printf("El valor de a++ es:%d \n", a);
	
	b=b--;
	printf("El valor de b-- es:%d \n", b);
	
	b=--b;
	printf("El valor de --b es:%d \n", b);
	
	b=--b;
	printf("El valor de --b es:%d \n", b);
	
	//Operadores relacionales(<, >, <=, =>, ==, =!)
	
	g='A'=='A';
	printf("A==A : %d\n", g);
	
	h=6!=5;
	printf("6!=5 : %d\n", h);
	
	//Operadores lógicos; ||, &&, !, !=
	
	i=(3<=5)||0;
	printf("(3<=5)||0 : %d\n", i);
	
	system("pause");
	return 0;
	
	
}
