#include<stdio.h>
#include<ctype.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#define CADENA 1000


//matriz
getmatrix(){
	int arr1[10][10],i,j,n;
  int det=0;
  
  
       printf("\n\nSe calculara el determinante de una matriz 3x3 :\n\n"); 

       for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
	           printf("Ingrese el elemento [%d],[%d] : ",i,j);
	           scanf("%d",&arr1[i][j]);
            }
        }  
	 printf("La matriz es la siguiente: :\n");
	 for(i=0;i<3;i++)
	 {
	   for(j=0;j<3 ;j++)
	     printf("% 4d",arr1[i][j]);
	    printf("\n");
	 }

  for(i=0;i<3;i++)
      det = det + (arr1[0][i]*(arr1[1][(i+1)%3]*arr1[2][(i+2)%3] - arr1[1][(i+2)%3]*arr1[2][(i+1)%3]));

  printf("\nEl determinante es: %d\n\n",det);
  fflush(stdin);
  repetir();
}
//Esta estructura permite validar caracteres numericos
int ValidarFlotante(char *cadena) {
    int longitud = strlen(cadena);
    while (longitud > 0 && isspace(cadena[longitud - 1]))
        longitud--;
    if (longitud <= 0) return 0;
    int i;
    int haEncontradoElPunto = 0;
    for (i = 0; i < longitud; ++i) {
        if (cadena[i] == '-' && i > 0) {
            return 0;
        }
        if (cadena[i] == '.') {
            if (haEncontradoElPunto) {
                return 0;
            } else {

                haEncontradoElPunto = 1;
            }
        }
        if (!isdigit(cadena[i]) && cadena[i] != '-' && cadena[i] != '.') {
            return 0;
        }
    }
    return 1;
}
//palindromo
esPalindromo(char str[]){ 
    int l = 0; 
    int x = strlen(str) - 1; 
    while (x > l) 
    { 
        if (str[l++] != str[x--]) 
        { 
            printf("\n\a%s NO ES UN PALINDROMO", str); 
            return; 
        } 
    } 
    printf("\n\a%s ES UN PALINDROMO", str); 
} 
//Esta estructura permite repetir una accion
repetir(){
	char respuestaValid[CADENA];
	printf("\n\n1 - Menu Principal\n0 - Salir\nElija una opcion:");
	fgets(respuestaValid, sizeof(respuestaValid), stdin);
	if(!ValidarFlotante(respuestaValid)){
	system("cls");
		printf("ELIJA UNA OPCION VALIDA\a");
		repetir();
	}
	int respuesta = strtof(respuestaValid, NULL);
	switch(respuesta){
		case 1:
			system("cls");
			main();
			break;
		case 0:
			exit(-1);
		default:
			system("cls");
			printf("ELIJA UNA OPCION VALIDA\a");
			repetir();
	}
}
//Aqui estan los datos :p
datos(){
	printf("\nDATOS DEL ALUMNO\n\nAlumno: Cardoso G%cmez Edgar Martin", 162);
	printf("\nNo. de cuenta: 31102832-4\nE-mail: 311028324%cpcpuma.acatlan.unam.mx", 64);
	repetir();
}
//Validar altura
alturavalid(){

	char alturaValid[CADENA];
	printf("\n\nIngrese su altura en centimetros: ");
	fgets(alturaValid, sizeof(alturaValid), stdin);
	if(!ValidarFlotante(alturaValid)){
		system("cls");
		printf("RESPUESTA INVALIDA\a");
		fflush(stdin);
		alturavalid();
	}
	float altura = strtof(alturaValid, NULL);

	
	if(altura<=0){
		system("cls");
		printf("RESPUESTA INVALIDA, LA ALTURA DEBE SER MAYOR QUE CERO\a");
		fflush(stdin);
		alturavalid();	
	}
		if(altura>250){
		system("cls");
		printf("RESPUESTA INVALIDA, CONTACTE A GUINESS WORLD RECORDS\a");
		fflush(stdin);
		alturavalid();	
	}
	else{
	system("cls");
		return altura;
	}

}
//Validar Mes
mesvalido(){

	char mesvalid[CADENA];
	printf("\n\nIngrese Mes de nacimiento(FORMATO MM): ");
	fgets(mesvalid, sizeof(mesvalid), stdin);
	if(!ValidarFlotante(mesvalid)){
		system("cls");
		printf("RESPUESTA INVALIDA\a");
		fflush(stdin);
		mesvalido();
	}
	float mes = strtof(mesvalid, NULL);
	
	if(mes!=(int)mes) {
	system("cls");
    printf("\aLOS MESES NO SON NUMEROS FLOTANTES :P !");
    fflush(stdin);
	mesvalido();
}
	
	if(mes<1){
		system("cls");
		printf("RESPUESTA INVALIDA, NO EXITE UN MES DE ESE TIPO\a");
		fflush(stdin);
		mesvalido();	
	}
		if(mes>12){
		system("cls");
		printf("RESPUESTA INVALIDA, CONTACTE A GUINESS WORLD RECORDS\a");
		fflush(stdin);
		mesvalido();	
	}
	else{
	system("cls");
		return mes;
	}
}
//Validar año
anovalido(){

	char anovalid[CADENA];
	printf("\n\nIngrese a%co de nacimiento(FORMATO AAAA): ", 164);
	fgets(anovalid, sizeof(anovalid), stdin);
	if(!ValidarFlotante(anovalid)){
		system("cls");
		printf("RESPUESTA INVALIDA\a");
		fflush(stdin);
		anovalido();
	}
	float ano = strtof(anovalid, NULL);
	
	if(ano!=(int)ano) {
	system("cls");
    printf("\aLOS a%cos NO SON NUMEROS FLOTANTES :P !", 164);
    fflush(stdin);
	anovalido();
}
	
	if(ano<1900){
		system("cls");
		printf("RESPUESTA INVALIDA, CONTACTE A GUINESS");
		fflush(stdin);
		anovalido();	
	}
		if(ano>2020){
		system("cls");
		printf("RESPUESTA INVALIDA, ESTA ESCALA NO SIRVE EN RECIEN NACIDOS NI EN NINOS NO NACIDOS AUN\a");
		fflush(stdin);
		anovalido();	
	}
	else{
	system("cls");
		return ano;
	}
}
//validar dia
diavalido(){

	char diavalid[CADENA];
	printf("\n\nIngrese dia de nacimiento(FORMATO DD): ");
	fgets(diavalid, sizeof(diavalid), stdin);
	if(!ValidarFlotante(diavalid)){
		system("cls");
		printf("RESPUESTA INVALIDA\a");
		fflush(stdin);
		diavalido();
	}
	float dia = strtof(diavalid, NULL);
	
	if(dia!=(int)dia) {
	system("cls");
    printf("\aLOS DIAS NO SON NUMEROS FLOTANTES :P !");
    fflush(stdin);
	diavalido();
}
	
	if(dia<1){
		system("cls");
		printf("RESPUESTA INVALIDA, NO EXISTE UN DIA DE ESE TIPO\a");
		fflush(stdin);
		diavalido();	
	}
		if(dia>31){
		system("cls");
		printf("RESPUESTA INVALIDA, DIA MAXIMO 31");
		fflush(stdin);
		diavalido();	
	}
	else{
	system("cls");
		return dia;
	}
}
//Servicio Medico
servicio(){
	char name[CADENA];
	printf("Ingrese nombre completo: ");
	fgets(name, sizeof(name), stdin);
	float altura=alturavalid();
	float mes=mesvalido();
	float ano=anovalido();
	float dia=diavalido();
	float edad;
	if(mes==1&&dia>=25){
		edad=2021-ano;
	}
	else{
		edad=2020-ano;
	}
	printf("\nSu nombre es %s", name);
	printf("\nSu edad es %g, usted mide %g cm.", edad, altura);
	printf("\nSu peso recomendado es %g KG", ((altura)-(100+(edad*0.1)))*0.9);
	fflush(stdin);
	repetir();
}
//Palindromo
palindromo(){
		char hola[100];
	printf("\nEscriba una frase sin usar espacios: ");
	scanf("%s", &hola);
    esPalindromo(hola);
    fflush(stdin);
    repetir();
}
//Main Incluira el menu principal y dirigira a las opciones de examen
int main(){
	//Nota, en cada funcion donde ocupemos ValidarFlotante hay que definir la cadena, al llamar las funciones recordar usar () :p
	char RespuestaMenuPrincipal[CADENA];
	
	printf("\n\nMENU PRINCIPAL\n\n1 - Datos del alumno.\n2 - Obtener determinante 3x3.\n3 - Servicio Medico.\n4 - Palindromo\n5 - Salir.\n\nElija una opcion: ");
	fgets(RespuestaMenuPrincipal, sizeof(RespuestaMenuPrincipal), stdin);
	if(!ValidarFlotante(RespuestaMenuPrincipal)){
		system("cls");
		printf("RESPUESTA INVALIDA\a");
		fflush(stdin);
		main();
	}
	else{
		int RespuestaMenuPrincipalValidada = strtof (RespuestaMenuPrincipal, NULL);
		switch(RespuestaMenuPrincipalValidada){
			case 1:
				system("cls");
				fflush;
				datos();
			case 2:
				system("cls");
				fflush;
				getmatrix();
			case 3:
				system("cls");
				fflush;
				servicio();	
			case 4:
				system("cls");
				fflush;
				palindromo();			
			case 5:
				exit(-1);
			default:
				system("cls");
				printf("RESPUESTA INVALIDA\a");
				fflush(stdin);
				main();
				
		}
		}
	
	
}
