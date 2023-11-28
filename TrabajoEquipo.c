#include <stdio.h>
#include <stdlib.h>
int opcion;

datos(){
printf("Los nombres de los integrantes son:\n\n");
printf("Bermeo Barr%cn Abril Itzel\n",162);
printf("Palomares Olegario Alexis\n");
printf("Zavala Minor Leonardo\n");
}
area(){
int opcionA;
float p, a, pe, ap, D, d;
printf("1 - El %crea de un pent%cgono\n",160, 160);
printf("2 - El %crea de un hex%cgono\n",160);
printf("3 - El %crea de un rombo\n");
printf("Elige una opcion");
scanf("%d", &opcionA);
switch(opcionA){

case 1:
    system("cls");
    printf("Ingresa el per%cmetro del pent%cgono\n",161,160);
    scanf("%f", &p);
    printf("Ingresa el apot%cma del pent%cgono\n",130,161);
    scanf("%f", &a);
    printf("El %crea del pent%cgono es: %.2f\n",160,(p*a)/2);
    break;
case 2:
    system("cls");
    printf("Ingresa el per%cmetro del hex%cgono\n",161,160);
    scanf("%f", &pe);
    printf("Ingresa el apot%cma del hex%cgono\n",130,161);
    scanf("%f", &ap);
    printf("El %crea del hex%cgono es: %.2f\n",160,(pe*ap)/2);
    break;
case 3:
    system("cls");
    printf("Ingresa la diagonal mayor\n");
    scanf("%f", &D);
    printf("Ingresa la diagonal menor\n");
    scanf("%f", &d);
    printf("El %crea del rombo es: %.2f\n", 160, (D*d)/2);
    break;
default:
printf("Opci%cn inv%clida, reintente nuevamente",162,160);

}
}


perimetro(){

int opcionP;
float l, perimetro1;

printf("1 - Obtiene el perimetro de un pentogono\n");
printf("2 - Obtiene el perimetro de un hexagonoe\n");
printf("3 - Obtiene el perimetro de un rombo\n");
//printf("5 - Deseas ingresar otros dator\n");
//printf("6 - Salir\n");
printf("Escoge el perimetro que deseas calcular:\n");
scanf("%d", &opcionP );

    switch(opcionP){
    case 1:
            system("cls");
            printf("Ingresa el valor de uno de sus lados del pentagono:\n "); 
            scanf("%f", &l); 
            
            if(l>0){
                perimetro1=(l*5);
                printf("El perimetro del pentagono%g\n, perimetro");
                system("pause");
            }
            else{
                printf("Escribe un numero valido\n");
                system("pause");
            }
            break;
        case 2:
             system("cls");
            printf("Ingresa el valor de uno de sus lados del hexagono:\n "); 
            scanf("%f, &l"); 
            
            if(l>0){
                perimetro1=(l*6);
                printf("El perimetro del hexagono%g\n, perimetro");
                system("pause");
            }
            else{
                printf("Escribe un numero valido\n");
                system("pause");
            }
            break;
        case 3:
            system("cls");
            printf("Ingresa el valor de uno de sus lados de un rombo:\n "); 
            scanf("%f, &l"); 
            
            if(l>0){
                perimetro1=(l*4);
                printf("El perimetro de un rombo%g\n, perimetro");
                system("pause");
            }
            else{
                printf("Escribe un numero valido\n");
                system("pause");
            }
            break;
        default:
            system("cls");
            printf("Error, elija una opcion valida");
        

    }
}
calculadora(){

float k, l, final;
int opcionC;

printf("1 - Sumar dos numeros\n");
printf("2 - Restar dos numeros\n");
printf("3 - Multiplicar dos numeros\n");
printf("4 - Dividir dos numeros\n");
printf("5 - Potencia de dos numeros\n");
printf("Escoga una opcion a realizar\n");
scanf("%d", &opcionC);
switch(opcionC){

case 1:

printf("Ingresa el primer sumando\n");
scanf("%f", &k);
printf("Ingresa el segundo sumando\n");
scanf("%f", &l);
final=l+k;

printf("El resultado de la esuma es: %g", final);

break;

case 2:

printf("Ingresa el minuendo\n");
scanf("%f", &k);
printf("Ingresa el sustraendo\n");
scanf("%f", &l);
final=k-l;

printf("El resultado de la resta es: %g", final);

break;

case 3:

printf("Ingresa el primer factor\n");
scanf("%f", &k);
printf("Ingresa el segundo factor\n");
scanf("%f", &l);
final=l*k;

printf("El resultado de la multiplicacion es: %g", final);

break;

case 4:

printf("Ingresa el dividendo\n");
scanf("%f", &k);
printf("Ingresa el divisor\n");
scanf("%f", &l);


if(l!=0){

final=k/l;

printf("El resultado de la division es: %g", final);

}
else{

system("cls");
printf("No se puede dividir entre cero");
calculadora();
break;

}

default: 

system("cls");
printf("Error, elija una opcion valida");
calculadora();
break;
}




}

menuprincipal(){

printf("1 - Datos Muestra el nombre de los 5 integrantes del equipo\n");
printf("2 - Calculadora - Sumar, Restar, Multiplicacion, Division, y potencia\n");
printf("3 -  Areas - Obtiene las areas de un pentagono, hexagono y de un rombo\n");
printf("4 - Perimetro - Obtiene el perimetro de un pentagono, hexagono, y de un rombo\n");
printf("5 - Salir - Termina el programa\n");
printf("Elige una opcion");
scanf("%d", &opcion);
switch(opcion){

case 1:

system("cls");
datos();
break;

case 2:

system("cls");
calculadora();
break;


case 3:

system("cls");
area();
break;


case 4:

system("cls");
perimetro();
break;


case 5:

exit(0);
break;

default:

system("cls");
printf("Error, elija una opcion valida");
menuprincipal();
break;


}
}

int main(){
	
	menuprincipal();
	
}
