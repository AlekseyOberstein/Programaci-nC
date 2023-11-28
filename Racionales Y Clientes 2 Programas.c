#include<stdlib.h>
#include<stdio.h>
int opcion, opcion1, final1, final2, i, total, diferencia;

struct racional{
	
	int a;
	int b;
	
};
struct registro{
	
	char nombre[15];
	int unidades;
	int pagado;
	
};
struct racional racional1, racional2, racional3;
struct registro clientes[1];

finalfuncion1(){
	
	printf("\n\nPresione 1 para volver a hacer la facturacion");
    printf("\nPresione 2 para volver al menu principal.");
    printf("\nPresione 3 para salir del programa.\n");
    fflush(stdin);
    scanf("%d", &final1);
    
    switch (final1){
    case 1:
    	system("cls");
        cliente();
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

void leer(struct registro clienteN[1]){
	
	for(i=0;i<=1;i++){
	printf("\nIngresa el nombre del cliente y el numero de unidades y el total pagado:\n");
	scanf("%s", &clienteN[i].nombre);
	scanf("%d", &clienteN[i].unidades);
	scanf("%d", &clienteN[i].pagado);
	}
	
}
void imprimir(struct registro clienteNN[1]){
	system("cls");
	for(i=0;i<=1;i++){
	printf("El nombre del cliente es:\n");
	printf("%s\n", clienteNN[i].nombre);
	printf("El numero de unidades solicitadas es:\n");
	printf("%d\n", clienteNN[i].unidades);
	printf("El total por las unidades es:\n");
	total=10*clienteNN[i].unidades;
	printf("%d\n", total);
	printf("Su estado es: \n");
	diferencia=total-clienteNN[i].pagado;
	if(diferencia==0){
		
		printf("Pagado\n");
		
	}
	if(diferencia>1000){
		
		
		printf("Moroso\n");
		
	}
	if(diferencia<=1000 && diferencia>0){	
		
		printf("Atrasado\n");
		
	}
	if(diferencia<0){
		
		printf("Sobrepago\n");
		
	}
	printf("\n\n");
	
	}
	
}

cliente(){
	
	printf("Este programa obtiene el nombre de clientes, unidades pedidas, total pagado de las unidades, te dice sus estado.\n");
	printf("Exiten 4 tipos de estado, moroso, atrasado, pagado, sobrepagado.\n");
	printf("Cada Unidad cuesta 10.\n");
	printf("El estado moroso es si tiene mas de 1000 de adeudo.\n");
	printf("El estado atrasado es si tiene menos de 1000 de adeudo.\n");
	printf("El estado pagado es si ya pago.\n");
	printf("El estado sobrepagado es si nosotros le debemos.\n");
	printf("Hay seis clientes.\n");
	leer(clientes);
	imprimir(clientes);
	finalfuncion1();
	
	
}

finalfuncion2(){
	
	printf("\n\nPresione 1 para al menu de operacion de numeros racionales");
    printf("\nPresione 2 para volver al menu principal.");
    printf("\nPresione 3 para salir del programa.\n");
    fflush(stdin);
    scanf("%d", &final2);
    
    switch (final2){
    case 1:
    	system("cls");
        numero();
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

divi(){
	
	printf("Ingresa el primer numero racional:\n");
	scanf("%d", &racional1.a );
	printf("---\n");
	scanf("%d", &racional1.b);
	if(racional1.b==0){
		
		system("cls");
		printf("\nError,No se puede dividir entre cero\n");
		numero();
		
		
	}
	
	printf("Ingresa el segundo numero racional:\n");
	scanf("%d", &racional2.a );
	printf("---\n");
	scanf("%d", &racional2.b);
	if(racional2.b==0){
		
		system("cls");
		printf("\nError,No se puede dividir entre cero\n");
		numero();
		
		
	}
	
	racional3.a=racional1.a*racional2.b;
	racional3.b=racional1.b*racional2.a;
	printf("El resultado de la division es:\n");
	printf("%d\n", racional3.a);
	printf("---\n");
	printf("%d", racional3.b);
	finalfuncion2();
	
	
}

mult(){
	
	printf("Ingresa el primer numero racional:\n");
	scanf("%d", &racional1.a );
	printf("---\n");
	scanf("%d", &racional1.b);
	if(racional1.b==0){
		
		system("cls");
		printf("\nError,No se puede dividir entre cero\n");
		numero();
		
		
	}
	
	printf("Ingresa el segundo numero racional:\n");
	scanf("%d", &racional2.a );
	printf("---\n");
	scanf("%d", &racional2.b);
	if(racional2.b==0){
		
		system("cls");
		printf("\nError,No se puede dividir entre cero\n");
		numero();
		
		
	}
	
	racional3.a=racional1.a*racional2.a;
	racional3.b=racional1.b*racional2.b;
	printf("El resultado de la multiplicacion es:\n");
	printf("%d\n", racional3.a);
	printf("---\n");
	printf("%d", racional3.b);
	finalfuncion2();
	
	
}

resta(){

	printf("Ingresa el primer numero racional:\n");
	scanf("%d", &racional1.a );
	printf("---\n");
	scanf("%d", &racional1.b);
	if(racional1.b==0){
		
		system("cls");
		printf("\nError,No se puede dividir entre cero\n");
		numero();
		
		
	}
	
	printf("Ingresa el segundo numero racional:\n");
	scanf("%d", &racional2.a );
	printf("---\n");
	scanf("%d", &racional2.b);
	if(racional2.b==0){
		
		system("cls");
		printf("\nError,No se puede dividir entre cero\n");
		numero();
		
		
	}
	
	racional3.a=racional1.a*racional2.b-(racional1.b*racional2.a);
	racional3.b=racional1.b*racional2.b;
	
	printf("El resultado de la resta es:\n");
	printf("%d\n", racional3.a);
	printf("---\n");
	printf("%d", racional3.b);
	finalfuncion2();	
	
	
	
}
suma(){
	
	printf("Ingresa el primer numero racional:\n");
	scanf("%d", &racional1.a );
	printf("---\n");
	scanf("%d", &racional1.b);
	if(racional1.b==0){
		
		system("cls");
		printf("\nError,No se puede dividir entre cero\n");
		numero();
		
		
	}
	
	printf("Ingresa el segundo numero racional:\n");
	scanf("%d", &racional2.a );
	printf("---\n");
	scanf("%d", &racional2.b);
	if(racional2.b==0){
		
		system("cls");
		printf("\nError,No se puede dividir entre cero\n");
		numero();
		
		
	}
	
	racional3.a=racional1.a*racional2.b+racional1.b*racional2.a;
	racional3.b=racional1.b*racional2.b;
	printf("El resultado de la suma es:\n");
	printf("%d\n", racional3.a);
	printf("---\n");
	printf("%d", racional3.b);
	finalfuncion2();
	
}

numero(){

	printf("1 - Suma\n");
	printf("2 - Resta\n");
	printf("3 - Multiplicacion\n");
	printf("4 - Division\n");
	printf("5 - Salir\n");
	printf("Escribe la operacion que deseas realizar:\n");
	scanf("%d", &opcion1);
		
	switch(opcion1){

		case 1:
			system("cls");
			suma();
			break;

		case 2:
			system("cls");
			resta();
			break;
		
		case 3:
			system("cls");
			mult();
			break;
		
		case 4:
			system("cls");
			divi();
			break;
			
		case 5:
			
			system("cls"),
			menuprincipal();

		case 6:
			exit(0);
			break;

		default:
			system("cls");
			printf("Error, elija una opcion valida\n");
			numero();
			break;

	}
		
}

menuprincipal(){
	
	printf("1 - Facturacion de clientes\n");
	printf("2 - Operar numeros racionales\n", 130);
	printf("3 - Salir\n");
	printf("Elige una opcion");
	fflush(stdin);
	scanf("%d", &opcion);
	
	switch(opcion){

		case 1:
			system("cls");
			cliente();
			break;

		case 2:
			system("cls");
			numero();
			break;

		case 3:
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
