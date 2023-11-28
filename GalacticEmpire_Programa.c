/*
			Programa.
			
			Equipo: Galactic Empire
			
			Integrantes:
			Cardoso Gómez Edgar Martin 
			Chi Aranda Kam Nie 
			Huerta Villanueva Oscar 
			Palomares Olegario Alexis 
			Zavala Minor Leonardo 
			
			
*/



#include <stdio.h>
#include <stdlib.h>

//Eston son los salarios por tipo de empleado (sbx = salario base tipo de empleado, hex = hora extra tipo de empleado) 
int sba=30000, sbb=26000, sbc=21000, sbd=15000, sbe=8000, hea=600, heb=520, hec=420, hed=300, hee=160;
float isra=6.98, isrb=5.87, isrc=3.46, isrd=2.68, isre=1.97;
int cantid1=0, cantid9=0, cantid16=0, cantid54=0, cantid96=0, cantid3=0, cantid17=0, cantid34=0, cantid89=0, cantid5=0, cantid8=0, cantart=0;
//Esto es el catalogo de precios y su nombre 
char Vaso[]="Vaso Metalico";
char Gorra[]="Gorra";
char Sudadera[]="Sudadera";
char Lapicera[]="Lapicera";
char Mochila[]="Mochila";
char Audifonos[]="Audifonos";
char Bocina[]="Bocina";
char Abrecartas[]="Abrecartas";
char Alcancias[]="Alcancias";
char Termo[]="Termo";
char Bolsa[]="Bolsa";
char nombre[100];

char catA[]="Jefe de Sistemas";
char catB[]="Administrador de Base de Datos";
char catC[]="Programador Senior";
char catD[]="Webmaster";
char catE[]="Programador Junior";

int ID1=50,ID9=150,ID16=350,ID54=50,ID96=300,ID3=250,ID17=500,ID34=300,ID89=150,ID5=250,ID8=350;
int horas, horassueldo, categoria1, ID;
char bonoarr[];
char horaextra[];

int bonofidelidad=500;
char categoria;

int semitotal, costoart1, costoart9, costoart16, costoart54, costoart96, costoart3, costoart17, costoart34, costoart89, costoart5, costoart8, totalcostoart;
float isrquitar, totalabsoluto;


//TOTAL DE SUELDO FINAL A ENTREGAR AL TRABAJADOR Y REGRESA AL MENU PRINCIPAL.
todototal(){
	
	int opcionfin;
		
	totalabsoluto=semitotal-isrquitar-totalcostoart;

	printf("\nEl sueldo total a entregar al trabajador es: $%g", totalabsoluto);
	
	printf("\n\nPresione 1 para volver a obtener la nomina de un trabajador.");
    printf("\nPresione 2 para volver al menu principal.");
    printf("\nPresione 3 para salir del programa.\n");
    scanf("%d", &opcionfin);
    switch (opcionfin){
       	case 1:
        	system("cls");
        	nomina();
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
        	nomina();	
        	break;
	}
	
	
}

//DESGLOSE DE DESCUENTOS
dstoa(){
	
	semitotal=horassueldo+bonofidelidad+sba;
	isrquitar=(semitotal*isra)/100;
	costoart1=cantid1*ID1;
	costoart9=cantid9*ID9;
	costoart16=cantid16*ID16;
	costoart54=cantid54*ID54;
	costoart96=cantid96*ID96;
	costoart3=cantid3*ID3;
	costoart17=cantid17*ID17;
	costoart34=cantid34*ID34;
	costoart89=cantid89*ID89;
	costoart5=cantid5*ID5;
	costoart8=cantid8*ID8;
	totalcostoart=costoart1+costoart9+costoart16+costoart54+costoart96+costoart3+costoart17+costoart34+costoart89+costoart5+costoart8;
	
	printf("\nEl desglose de descuentos es el siguiente:\n\n");
	printf("El total de ISR a quitar es: $%g\n\n", isrquitar);
	
	
	if(0<totalcostoart){
		
		printf("La descripcion de los articulos adquiridos es la siguiente:\n\n");	
			
		if(0<costoart1){
		
			printf("%s, Es un producto de alta calidad a un costo muy bajo, de diferentes tama%cos y colores.\n", Vaso,164);
		
		}
		if(0<costoart9){
		
			printf("%s, Es un producto muy usado en dias soleados a un excelente precio con amplia variedad de  tama%cos y colores.\n", Gorra,164);
		
		}
		if(0<costoart16){
		
			printf("%s, Es un producto muy usado en dias nublados o llovioso a un excelente precio con amplia variedad de  tama%cos y colores.\n", Sudadera,164);
		
		}
		if(0<costoart54){
			
			printf("%s, Es un producto de muy buena calidad a un excelente precio con amplia variedad de  tama%cos y colores.\n", Lapicera,164);
			
		}
		if(0<costoart96){
			
			printf("%s, Es un producto con excelente capacidad y resistencia de colores llamativos.\n", Mochila);
			
		}
		if(0<costoart3){
			
			printf("%s, Es un producto de excelente calidad y durabilidad en una gran variedad de colores.\n", Audifonos);
			
		}
		if(0<costoart17){
			
			printf("%s, Es un producto de excelente calidad y de gran resolucion ademas de ser bluetooth.\n", Bocina);
			
		}
		if(0<costoart34){
			
			printf("%s, Es un producto de excelente calidad de forma en cuchillo, de diferentes tama%cos.\n", Abrecartas,164);
			
		}
		if(0<costoart89){
			
			printf("%s, Es un producto muy detallado de buena calidad y gran variedad de colores.\n", Alcancias);
			
		}
		if(0<costoart5){
			
			printf("%s, Es un producto de gran calidad excelente para los dias nublados y frios.\n", Termo);
			
		}
		if(0<costoart8){
			
			printf("%s, Es un producto de gran calidad, con muy buen estilo con una gran variedad de colores y tama%Cos.\n", Bolsa,164);
			
		}
		printf("\nEl costo total del o de los productos comprados es: $%d\n", totalcostoart);
		todototal();
		
	}
	else{
		
		printf("No hay articulos comprados.\n\n");
		todototal();
		
	}
}

dstob(){

	semitotal=horassueldo+bonofidelidad+sbb;
	isrquitar=(semitotal*isrb)/100;
	costoart1=cantid1*ID1;
	costoart9=cantid9*ID9;
	costoart16=cantid16*ID16;
	costoart54=cantid54*ID54;
	costoart96=cantid96*ID96;
	costoart3=cantid3*ID3;
	costoart17=cantid17*ID17;
	costoart34=cantid34*ID34;
	costoart89=cantid89*ID89;
	costoart5=cantid5*ID5;
	costoart8=cantid8*ID8;
	totalcostoart=costoart1+costoart9+costoart16+costoart54+costoart96+costoart3+costoart17+costoart34+costoart89+costoart5+costoart8;
	
	printf("\nEl desglose de descuentos es el siguiente:\n\n");
	printf("El total de ISR a quitar es: $%g\n\n", isrquitar);
	
	
	if(0<totalcostoart){
		
		printf("La descripcion de los articulos adquiridos es la siguiente:\n\n");	
			
		if(0<costoart1){
		
			printf("%s, Es un producto de alta calidad a un costo muy bajo, de diferentes tama%cos y colores.\n", Vaso,164);
		
		}
		if(0<costoart9){
		
			printf("%s, Es un producto muy usado en dias soleados a un excelente precio con amplia variedad de tama%cos y colores.\n", Gorra,164);
		
		}
		if(0<costoart16){
		
			printf("%s, Es un producto muy usado en dias nublados o llovioso a un exelente precio con amplia variedad de tama%cos y colores.\n", Sudadera,164);
		
		}
		if(0<costoart54){
			
			printf("%s, Es un producto de muy buena calidad a un excelente precio con amplia variedad de  tama%cos y colores.\n", Lapicera,164);
			
		}
		if(0<costoart96){
			
			printf("%s, Es un producto con excelente capacidad y resistencia de colores llamativos.\n", Mochila);
			
		}
		if(0<costoart3){
			
			printf("%s, Es un producto de excelente calidad y durabilidad en una gran variedad de colores.\n", Audifonos);
			
		}
		if(0<costoart17){
			
			printf("%s, Es un producto de excelente calidad y de gran resolucion ademas de ser bluetooth.\n", Bocina);
			
		}
		if(0<costoart34){
			
			printf("%s, Es un producto de excelente calidad de forma en cuchillo, de diferentes tama%cos.\n", Abrecartas,164);
			
		}
		if(0<costoart89){
			
			printf("%s, Es un producto muy detallado de buena calidad y gran variedad de colores.\n", Alcancias);
			
		}
		if(0<costoart5){
			
			printf("%s, Es un producto de gran calidad exelente para los dias nublados y frios.\n", Termo);
			
		}
		if(0<costoart8){
			
			printf("%s, Es un producto de gran calidad, con muy buen estilo con una gran variedad de colores y tama%cos.\n", Bolsa,164);
			
		}
		printf("\nEl costo total del o de los productos comprados es: $%d\n", totalcostoart);
		todototal();
		
	}
	else{
		
		printf("No hay articulos comprados.\n\n");
		todototal();
		
	}
}

dstoc(){

	semitotal=horassueldo+bonofidelidad+sbc;
	isrquitar=(semitotal*isrc)/100;
	costoart1=cantid1*ID1;
	costoart9=cantid9*ID9;
	costoart16=cantid16*ID16;
	costoart54=cantid54*ID54;
	costoart96=cantid96*ID96;
	costoart3=cantid3*ID3;
	costoart17=cantid17*ID17;
	costoart34=cantid34*ID34;
	costoart89=cantid89*ID89;
	costoart5=cantid5*ID5;
	costoart8=cantid8*ID8;
	totalcostoart=costoart1+costoart9+costoart16+costoart54+costoart96+costoart3+costoart17+costoart34+costoart89+costoart5+costoart8;
	
	printf("\nEl desglose de descuentos es el siguiente:\n\n");
	printf("El total de ISR a quitar es: $%g\n\n", isrquitar);
	
	
	if(0<totalcostoart){
		
		printf("La descripcion de los articulos adquiridos es la siguiente:\n\n");	
			
		if(0<costoart1){
		
			printf("%s, Es un producto de alta calidad a un costo muy bajo, de diferentes tama%cos y colores.\n", Vaso,164);
		
		}
		if(0<costoart9){
		
			printf("%s, Es un producto muy usado en dias soleados a un excelente precio con amplia variedad de  tama%cos y colores.\n", Gorra,164);
		
		}
		if(0<costoart16){
		
			printf("%s, Es un producto muy usado en dias nublados o llovioso a un exelente precio con amplia variedad de  tama%cos y colores.\n", Sudadera,164);
		
		}
		if(0<costoart54){
			
			printf("%s, Es un producto de muy buena calidad a un excelente precio con amplia variedad de  tama%cos y colores.\n", Lapicera,164);
			
		}
		if(0<costoart96){
			
			printf("%s, Es un producto con excelente capacidad y resistencia de colores llamativos.\n", Mochila);
			
		}
		if(0<costoart3){
			
			printf("%s, Es un producto de excelente calidad y durabilidad en una gran variedad de colores.\n", Audifonos);
			
		}
		if(0<costoart17){
			
			printf("%s, Es un producto de excelente calidad y de gran resolucion ademas de ser bluetooth.\n", Bocina);
			
		}
		if(0<costoart34){
			
			printf("%s, Es un producto de excelente calidad de forma en cuchillo, de diferentes tama%cos.\n", Abrecartas,164);
			
		}
		if(0<costoart89){
			
			printf("%s, Es un producto muy detallado de buena calidad y gran variedad de colores.\n", Alcancias);
			
		}
		if(0<costoart5){
			
			printf("%s, Es un producto de gran calidad exelente para los dias nublados y frios.\n", Termo);
			
		}
		if(0<costoart8){
			
			printf("%s, Es un producto de gran calidad, con muy buen estilo con una gran variedad de colores y tama%cos.\n", Bolsa,164);
			
		}
		printf("\nEl costo total del o de los productos comprados es: $%d\n", totalcostoart);
		todototal();
		
	}
	else{
		
		printf("No hay articulos comprados.\n\n");
		todototal();
		
	}
}

dstod(){

	semitotal=horassueldo+bonofidelidad+sbd;
	isrquitar=(semitotal*isrd)/100;
	costoart1=cantid1*ID1;
	costoart9=cantid9*ID9;
	costoart16=cantid16*ID16;
	costoart54=cantid54*ID54;
	costoart96=cantid96*ID96;
	costoart3=cantid3*ID3;
	costoart17=cantid17*ID17;
	costoart34=cantid34*ID34;
	costoart89=cantid89*ID89;
	costoart5=cantid5*ID5;
	costoart8=cantid8*ID8;
	totalcostoart=costoart1+costoart9+costoart16+costoart54+costoart96+costoart3+costoart17+costoart34+costoart89+costoart5+costoart8;
	
	printf("\nEl desglose de descuentos es el siguiente:\n\n");
	printf("El total de ISR a quitar es: $%g\n\n", isrquitar);
	
	
	if(0<totalcostoart){
		
		printf("La descripcion de los articulos adquiridos es la siguiente:\n\n");	
			
		if(0<costoart1){
		
			printf("%s, Es un producto de alta calidad a un costo muy bajo, de diferentes tama%cos y colores.\n", Vaso,164);
		
		}
		if(0<costoart9){
		
			printf("%s, Es un producto muy usado en dias soleados a un excelente precio con amplia variedad de  tama%cos y colores.\n", Gorra,164);
		
		}
		if(0<costoart16){
		
			printf("%s, Es un producto muy usado en dias nublados o llovioso a un excelente precio con amplia variedad de  tama%cos y colores.\n", Sudadera,164);
		
		}
		if(0<costoart54){
			
			printf("%s, Es un producto de muy buena calidad a un exelente precio con amplia variedad de  tama%cos y colores.\n", Lapicera,164);
			
		}
		if(0<costoart96){
			
			printf("%s, Es un producto con excelente capacidad y resistencia de colores llamativos.\n", Mochila);
			
		}
		if(0<costoart3){
			
			printf("%s, Es un producto de excelente calidad y durabilidad en una gran variedad de colores.\n", Audifonos);
			
		}
		if(0<costoart17){
			
			printf("%s, Es un producto de excelente calidad y de gran resolucion ademas de ser bluetooth.\n", Bocina);
			
		}
		if(0<costoart34){
			
			printf("%s, Es un producto de excelente calidad de forma en cuchillo, de diferentes tama%cos.\n", Abrecartas,164);
			
		}
		if(0<costoart89){
			
			printf("%s, Es un producto muy detallado de buena calidad y gran variedad de colores.\n", Alcancias);
			
		}
		if(0<costoart5){
			
			printf("%s, Es un producto de gran calidad exelente para los dias nublados y frios.\n", Termo);
			
		}
		if(0<costoart8){
			
			printf("%s, Es un producto de gran calidad, con muy buen estilo con una gran variedad de colores y tama%cos.\n", Bolsa,164);
			
		}
		printf("\nEl costo total del o de los productos comprados es: $%d\n", totalcostoart);
		todototal();
		
	}
	else{
		
		printf("No hay articulos comprados.\n\n");
		todototal();
		
	}
}

dstoe(){

	semitotal=horassueldo+bonofidelidad+sbe;
	isrquitar=(semitotal*isre)/100;
	costoart1=cantid1*ID1;
	costoart9=cantid9*ID9;
	costoart16=cantid16*ID16;
	costoart54=cantid54*ID54;
	costoart96=cantid96*ID96;
	costoart3=cantid3*ID3;
	costoart17=cantid17*ID17;
	costoart34=cantid34*ID34;
	costoart89=cantid89*ID89;
	costoart5=cantid5*ID5;
	costoart8=cantid8*ID8;
	totalcostoart=costoart1+costoart9+costoart16+costoart54+costoart96+costoart3+costoart17+costoart34+costoart89+costoart5+costoart8;
	
	printf("\nEl desglose de descuentos es el siguiente:\n\n");
	printf("El total de ISR a quitar es: $%g\n\n", isrquitar);
	
	
	if(0<totalcostoart){
		
		printf("La descripcion de los articulos adquiridos es la siguiente:\n\n");	
			
		if(0<costoart1){
		
			printf("%s, Es un producto de alta calidad a un costo muy bajo, de diferentes tama%cos y colores.\n", Vaso,164);
		
		}
		if(0<costoart9){
		
			printf("%s, Es un producto muy usado en dias soleados a un excelente precio con amplia variedad de  tama%cos y colores.\n", Gorra,164);
		
		}
		if(0<costoart16){
		
			printf("%s, Es un producto muy usado en dias nublados o llovioso a un excelente precio con amplia variedad de  tama%cos y colores.\n", Sudadera,164);
		
		}
		if(0<costoart54){
			
			printf("%s, Es un producto de muy buena calidad a un excelente precio con amplia variedad de  tama%cos y colores.\n", Lapicera,164);
			
		}
		if(0<costoart96){
			
			printf("%s, Es un producto con excelente capacidad y resistencia con de colores llamativos.\n", Mochila);
			
		}
		if(0<costoart3){
			
			printf("%s, Es un producto de excelente calidad y durabilidad en una gran variedad de colores.\n", Audifonos);
			
		}
		if(0<costoart17){
			
			printf("%s, Es un producto de excelente calidad y de gran resolucion ademas de ser bluetooth.\n", Bocina);
			
		}
		if(0<costoart34){
			
			printf("%s, Es un producto de excelente calidad de forma en cuchillo, de diferentes tama%cos.\n", Abrecartas,164);
			
		}
		if(0<costoart89){
			
			printf("%s, Es un producto muy detallado de buena calidad y gran variedad de colores.\n", Alcancias);
			
		}
		if(0<costoart5){
			
			printf("%s, Es un producto de gran calidad excelente para los dias nublados y frios.\n", Termo);
			
		}
		if(0<costoart8){
			
			printf("%s, Es un producto de gran calidad, con muy buen estilo con una gran variedad de colores y tama%cos.\n",Bolsa,164);
			
		}
		printf("\nEl costo total del o de los productos comprados es: $%d\n", totalcostoart);
		todototal();
		
	}
	else{
		
		printf("No hay articulos comprados.\n\n");
		todototal();
		
	}
}

//CATEGORIAS DEL TRABAJADOR (Desglose de sueldo extra:)
categoriaA(){
	
	printf("El nombre del trabajador es: %s\n\n", nombre);
	printf("Categoria A:\n\n%s, es el encargado de planear, organizar, dirigir y controlar, el funcionamiento del area de sistemas.\n", catA);
	printf("Su sueldo base es: $%d\n", sba);
	printf("Las horas extras que ha trabajado: %d\n\n", horas);
	printf("El desglose del sueldo extra es el siguiente:\n\n");
	
	//DESGLOSE SUELDO EXTRA
	if(5<horas && horas<11){
	
	char bonoarr[]="Obtuviste el bono de fidelidad:";
	char horaextra[]="No obtuviste la hora extra.";
	
	bonofidelidad=500;
	
	horassueldo=hea*horas;
	printf("%s\n", horaextra);
	printf("El total de horas extra es: %d\n", horas);
	printf("El total en pesos por las horas extras trabajadas es: $%d\n", horassueldo);
	printf("%s $%d\n", bonoarr, bonofidelidad);
	}
	else if(10<horas){
		
		char bonoarr[]="Obtuviste el bono de fidelidad:";
		char horaextra[]="Obtuviste la hora extra.";
		horas++;
		bonofidelidad=500;
	
	horassueldo=hea*horas;
	printf("%s\n", horaextra);
	printf("El total de horas extra es: %d\n", horas);
	printf("El total en pesos por las horas extras trabajadas es: $%d\n", horassueldo);
	printf("%s $%d\n", bonoarr, bonofidelidad);
		
	}
	else{
	
	char bonoarr[]="No obtuviste el bono de fidelidad:";
	char horaextra[]="No obtuviste la hora extra.";	
	bonofidelidad=0;
	
	horassueldo=hea*horas;
	printf("%s\n", horaextra);
	printf("El total de horas extra es: %d\n", horas);
	printf("El total en pesos por las horas extras trabajadas es: $%d\n", horassueldo);
	printf("%s $%d\n", bonoarr, bonofidelidad);
		
		
	}
	
	dstoa();

}

categoriaB(){
	
	printf("El nombre del trabajador es: %s\n\n", nombre);
	printf("Categoria B:\n\n%s, es el encargado de ser la persona responsable de instalar el software de la base de datos.\n", catB);
	printf("Su sueldo base es: $%d\n", sbb);
	printf("Las horas extras que ha trabajado: %d\n\n", horas);
	printf("El desglose del sueldo extra es el siguiente:\n");
	
	//DESGLOSE SUELDO EXTRA
	if(5<horas && horas<10){
	
	char bonoarr[]="Obtuviste el bono de fidelidad:";
	char horaextra[]="No obtuviste la hora extra.";
	bonofidelidad=500;
	
	horassueldo=heb*horas;
	printf("%s\n", horaextra);
	printf("El total de horas extra es: %d\n", horas);
	printf("El total en pesos por las horas extras trabajadas es: $%d\n", horassueldo);
	printf("%s $%d\n", bonoarr, bonofidelidad);
	}
	else if(9<horas){
		
		char bonoarr[]="Obtuviste el bono de fidelidad:";
		char horaextra[]="Obtuviste la hora extra.";
		horas++;
		bonofidelidad=500;
	
	horassueldo=heb*horas;
	printf("%s\n", horaextra);
	printf("El total de horas extra es: %d\n", horas);
	printf("El total en pesos por las horas extras trabajadas es: $%d\n", horassueldo);
	printf("%s $%d\n", bonoarr, bonofidelidad);
		
	}
	else{
	
	char bonoarr[]="No obtuviste el bono de fidelidad:";
	char horaextra[]="No obtuviste la hora extra.";	
	bonofidelidad=0;
	
	horassueldo=heb*horas;
	printf("%s\n", horaextra);
	printf("El total de horas extra es: %d\n", horas);
	printf("El total en pesos por las horas extras trabajadas es: $%d\n", horassueldo);
	printf("%s $%d\n", bonoarr, bonofidelidad);
		
		
	}
	
	dstob();
	
}

categoriaC(){
	
	printf("El nombre del trabajador es: %s\n\n", nombre);
	printf("Categoria C:\n\n%s, es el encargado de dar confianza al equipo, de solucionar problemas de forma proactiva, y de llevar la calidad del software a un nivel superior.\n", catC);
	printf("Su sueldo base es: $%d\n", sbc);
	printf("Las horas extras que ha trabajado: %d\n\n", horas);
	printf("El desglose del sueldo extra es el siguiente:\n");
	
	//DESGLOSE SUELDO EXTRA
if(5<horas && horas<9){
	
	char bonoarr[]="Obtuviste el bono de fidelidad:";
	char horaextra[]="No obtuviste la hora extra.";
	bonofidelidad=500;
	
	horassueldo=hec*horas;
	printf("%s\n", horaextra);
	printf("El total de horas extra es: %d\n", horas);
	printf("El total en pesos por las horas extras trabajadas es: $%d\n", horassueldo);
	printf("%s $%d\n", bonoarr, bonofidelidad);
	}
	else if(8<horas){
		
		char bonoarr[]="Obtuviste el bono de fidelidad:";
		char horaextra[]="Obtuviste la hora extra.";
		horas++;
		bonofidelidad=500;
	
	horassueldo=hec*horas;
	printf("%s\n", horaextra);
	printf("El total de horas extra es: %d\n", horas);
	printf("El total en pesos por las horas extras trabajadas es: $%d\n", horassueldo);
	printf("%s $%d\n", bonoarr, bonofidelidad);
		
	}
	else{
	
	char bonoarr[]="No obtuviste el bono de fidelidad:";
	char horaextra[]="No obtuviste la hora extra.";	
	bonofidelidad=0;
	
	horassueldo=hec*horas;
	printf("%s\n", horaextra);
	printf("El total de horas extra es: %d\n", horas);
	printf("El total en pesos por las horas extras trabajadas es: $%d\n", horassueldo);
	printf("%s $%d\n", bonoarr, bonofidelidad);
		
		
	}
	
	dstoc();
	
}

categoriaD(){
	
	printf("El nombre del trabajador es: %s\n\n", nombre);
	printf("Categoria D:\n\n%s, es el encargado de ser la persona responsable del mantenimiento o programacion de un sitio web.\n", catD);
	printf("Su sueldo base es: $%d\n", sbd);
	printf("Las horas extras que ha trabajado: %d\n\n", horas);
	printf("El desglose del sueldo extra es el siguiente:\n");
	
	//DESGLOSE SUELDO EXTRA
if(5<horas && horas<8){
	
	char bonoarr[]="Obtuviste el bono de fidelidad:";
	char horaextra[]="No obtuviste la hora extra.";
	bonofidelidad=500;
	
	horassueldo=hed*horas;
	printf("%s\n", horaextra);
	printf("El total de horas extra es: %d\n", horas);
	printf("El total en pesos por las horas extras trabajadas es: $%d\n", horassueldo);
	printf("%s $%d\n", bonoarr, bonofidelidad);
	}
	else if(7<horas){
		
		char bonoarr[]="Obtuviste el bono de fidelidad:";
		char horaextra[]="Obtuviste la hora extra.";
		horas++;
		bonofidelidad=500;
	
	horassueldo=hed*horas;
	printf("%s\n", horaextra);
	printf("El total de horas extra es: %d\n", horas);
	printf("El total en pesos por las horas extras trabajadas es: $%d\n", horassueldo);
	printf("%s $%d\n", bonoarr, bonofidelidad);
		
	}
	else{
	
	char bonoarr[]="No obtuviste el bono de fidelidad:";
	char horaextra[]="No obtuviste la hora extra.";	
	bonofidelidad=0;
	
	horassueldo=hed*horas;
	printf("%s\n", horaextra);
	printf("El total de horas extra es: %d\n", horas);
	printf("El total en pesos por las horas extras trabajadas es: $%d\n", horassueldo);
	printf("%s $%d\n", bonoarr, bonofidelidad);
		
		
	}
	
	dstod();
	
}

categoriaE(){
	
	printf("El nombre del trabajador es: %s\n\n", nombre);
	printf("Categoria E:\n\n%s, es el encargado de trabajar en un equipo de desarrollo escribiendo y manteniendo codigo para aplicaciones informaticas.\n", catE);
	printf("Su sueldo base es: $%d\n", sbe);
	printf("Las horas extras que ha trabajado: %d\n\n", horas);
	printf("El desglose del sueldo extra es el siguiente:\n");
	
	//DESGLOSE SUELDO EXTRA
if(5<horas && horas<7){
	
	char bonoarr[]="Obtuviste el bono de fidelidad:";
	char horaextra[]="No obtuviste la hora extra.";
	bonofidelidad=500;
	
	horassueldo=hee*horas;
	printf("%s\n", horaextra);
	printf("El total de horas extra es: %d\n", horas);
	printf("El total en pesos por las horas extras trabajadas es: $%d\n", horassueldo);
	printf("%s $%d\n", bonoarr, bonofidelidad);
	}
	else if(6<horas){
		
		char bonoarr[]="Obtuviste el bono de fidelidad:";
		char horaextra[]="Obtuviste la hora extra.";
		horas++;
		bonofidelidad=500;
	
	horassueldo=hee*horas;
	printf("%s\n", horaextra);
	printf("El total de horas extra es: %d\n", horas);
	printf("El total en pesos por las horas extras trabajadas es: $%d\n", horassueldo);
	printf("%s $%d\n", bonoarr, bonofidelidad);
		
	}
	else{
	
	char bonoarr[]="No obtuviste el bono de fidelidad:";
	char horaextra[]="No obtuviste la hora extra.";	
	bonofidelidad=0;
	
	horassueldo=hee*horas;
	printf("%s\n", horaextra);
	printf("El total de horas extra es: %d\n", horas);
	printf("El total en pesos por las horas extras trabajadas es: $%d\n", horassueldo);
	printf("%s $%d\n", bonoarr, bonofidelidad);
		
		
	}
	
	dstoe();
	
}



//PROCESO PARA OBTENER LA NÓMINA DE UN EMPLEADO
nomina(){
	
	printf("\nOpcion 2: Generar nomina de un trabajador.\n");
	
	printf("\nIngresa el nombre completo del trabajador:\n");
	fflush(stdin);
	gets(nombre);
	system("cls");

	printf("\nIntroduce las horas extras realizadas:\n");
	fflush(stdin);
	scanf("%d", &horas);
	system("cls");

	if(0<=horas){
	
		printf ("\nIntroduce la categoria:\n");
		fflush(stdin);
		scanf("%c", &categoria);
		system("cls");

		categoria1=categoria;
		
		printf("Numero de articulos a ingresar:\n");
		fflush(stdin);
		scanf("%d", &cantart);
	
		while(0<cantart){
			system("cls");	
		
			printf("\nIngresa el identificador del %d%c articulo comprado\n", cantart, 167);
			scanf("%d", &ID);
			system("cls");
		
			if(ID==1){
		
				cantid1++;
				cantart--;
		
			}
			else if(9==ID){
			
				cantid9++;
				cantart--;
		
			}
			else if(16==ID){
			
				cantid16++;
				cantart--;
		
			}
			else if(54==ID){
		
				cantid54++;
				cantart--;
		
		
			}
			else if(96==ID){
			
				cantid96++;
				cantart--;			
			
			}
			else if(3==ID){
				
				cantid3++;
				cantart--;
			
			}
			else if(ID==17){
			
				cantid17++;
				cantart--;
			
			}
			else if(34==ID){
			
				cantid34++;
				cantart--;
			
			}
			else if(89==ID){
			
				cantid89++;
				cantart--;
			
			}
			else if(5==ID){
			
				cantid5++;
				cantart--;
			
			}
			else if(8==ID){
			
				cantid8++;
				cantart--;
			
			}
			else{
			
			system("cls");
			printf("\aError, ingresa un identificador valido\n");
			nomina();
			
			}

		
		}
		

		
		switch(categoria1){
		
		
		case 65:
			
			categoriaA();
			break;
		
		case 66:
			
			categoriaB();
			break;
			
		case 67:
		
			categoriaC();
			break;	
			
		case 68:
			
			categoriaD();
			break;
			
		case 69:
			
			categoriaE();
			break;
	
		default:
			
			system("cls");
			printf("\aError, ingresa una categoria valida.\n");
			nomina();
			break;
			
		}
		

	
	}

	else{
	
		system("cls");
		printf("\aError, ingresa un numero valido de horas\n");
		nomina();
	
	}
	
}



//MENU PRODUCTOS
menutiendita(){
int opcionmenutiendita;
printf("\nID 1  Producto: %s \tPrecio: $%d\n",Vaso,ID1);
printf("ID 9  Producto: %s \t\tPrecio: $%d\n",Gorra,ID9);
printf("ID 16 Producto: %s \tPrecio: $%d\n",Sudadera,ID16);
printf("ID 54 Producto: %s \tPrecio: $%d\n",Lapicera,ID54);
printf("ID 96 Producto: %s \tPrecio: $%d\n",Mochila,ID96);
printf("ID 3  Producto: %s \tPrecio: $%d\n",Audifonos,ID3);
printf("ID 17 Producto: %s \t\tPrecio: $%d\n",Bocina,ID17);
printf("ID 34 Producto: %s \tPrecio: $%d\n",Abrecartas,ID34);
printf("ID 89 Producto: %s \tPrecio: $%d\n",Alcancias,ID89);
printf("ID 5  Producto: %s \t\tPrecio: $%d\n",Termo,ID5);
printf("ID 8  Producto: %s \t\tPrecio: $%d\n\n",Bolsa,ID8);
printf("\n\nPresione 1 para volver  al menu anterior.");
        printf("\nPresione 2 para volver al menu principal.");
        printf("\nPresione 3 para salir del programa.\n");
        scanf("%d", &opcionmenutiendita);
        switch (opcionmenutiendita){
            case 1:
                system("cls");
                menusecundario();
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
                menutiendita();
                break;}

}



//MENU ISR
	funcionisr(){
	int opcionfuncionisr;
	printf("\nCategoria A: Su sueldo base es: $%d y su porcentaje de ISR es: %g%c", sba, isra, 37);
	printf("\nCategoria B: Su sueldo base es: $%d y su porcentaje de ISR es: %g%c", sbb, isrb, 37);
	printf("\nCategoria C: Su sueldo base es: $%d y su porcentaje de ISR es: %g%c", sbc, isrc, 37);
	printf("\nCategoria D: Su sueldo base es: $%d y su porcentaje de ISR es: %g%c", sbd, isrd, 37);
	printf("\nCategoria E: Su sueldo base es: $%d y su porcentaje de ISR es: %g%c", sbe, isre, 37);
	printf("\nPresione enter para volver al menu anterior.");
	printf("\n\nPresione 1 para volver  al menu anterior.");
        printf("\nPresione 2 para volver al menu principal.");
        printf("\nPresione 3 para salir del programa.\n");
        scanf("%d", &opcionfuncionisr);
        switch (opcionfuncionisr){
        	case 1:
        		system("cls");
        		menusecundario();
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
        		funcionisr();	
        		break;
		}
	}
	
	

//MENU DE SUELDOS
	menusueldos(){
		int opcionmenusueldos;
		printf("\nCategoria A: Su sueldo base es $%d y $%d por hora extra", sba, hea);
    	printf("\nCategoria B: Su sueldo base es $%d y $%d por hora extra", sbb, heb);
        printf("\nCategoria C: Su sueldo base es $%d y $%d por hora extra", sbc, hec);
        printf("\nCategoria D: Su sueldo base es $%d y $%d por hora extra", sbd, hed);
        printf("\nCategoria E: Su sueldo base es $%d y $%d por hora extra", sbe, hee);
        printf("\n\nPresione 1 para volver  al menu anterior.");
        printf("\nPresione 2 para volver al menu principal.");
        printf("\nPresione 3 para salir del programa.\n");
        scanf("%d", &opcionmenusueldos);
        switch (opcionmenusueldos){
        	case 1:
        		system("cls");
        		menusecundario();
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
        		menusueldos();	
        		break;
		}
        
 
	}



//MENU SECUNDARIO
	menusecundario(){
        
        int opcioncatalogo;
        printf("\n1 - Mostrar catalogo de sueldo.");
        printf("\n2 - Mostrar catalogo de ISR.");
        printf("\n3 - Mostrar catalogo de tiendita.");
        printf("\n4 - Menu anterior.");
        printf("\nElija una opcion: ");
        fflush(stdin);
        scanf("%d", &opcioncatalogo);
		
		switch(opcioncatalogo){
		case 1:
			system("cls");
			menusueldos();	
			break;
		case 2:
			system("cls");
			funcionisr();
			break;
		case 3:
			system("cls");
			menutiendita();
			break;
		case 4:
			system("cls");
			menuprincipal();
			break;
		default:
			system("cls");
			printf("\aError, elija una opcion valida");
			menusecundario();
			
		
		}
		
		}



//MENU PRINCIPAL
	menuprincipal(){
		int opcion;
		
	
		printf("\n1 - Mostrar catalogos.");
		printf("\n2 - Generar nomina.");
		printf("\n3 - salir.");
		printf("\nElija la opcion deseada: ");
		scanf("%d", &opcion);
		switch (opcion){
			case 1:
				system("cls");
				menusecundario();
				break;
			case 2:
				system("cls");
				nomina();
				break;
			case 3:
				exit(-1);
				break;
				
			default:
				system("cls");
				printf("\aError, elija una opcion valida");
				menuprincipal();
				break;
		}
		
	}
	

int main(){

	menuprincipal();

}

