#include <stdio.h>
#include <stdlib.h>

struct fecha{
	
	int anne;
	int mes; 
	int dia;
	
};


struct fecha leer(){
	
	struct fecha fecha0;
	
	printf("Ingresa el anne en el formato aaaa:\n");
	scanf("%d", &fecha0.anne);
	printf("Ingresa el mes en el formato mm:\n");
	scanf("%d", &fecha0.mes);
	printf("Ingresa el dia en el formato d:\n");
	scanf("%d", &fecha0.dia);
	return(fecha0);
	
}

principal(){
	
	struct fecha fecha1, fecha2;
	
	int dias1, dias2, total, ansb1, ansb2;

	printf("Este programa te dice la cantidad de dias entre dos fechas\n");
	printf("Ingresa la primer fecha cronologica.\n");
	fecha1=leer();
	if(fecha1.anne<=-1){
		
		system("cls");
		printf("\aError, ingrese un anne valido\n");
		principal();
	}
	if(fecha1.mes<=0 || 12<fecha1.mes){
		system("cls");
		printf("\aError, ingrese un mes valido\n");
		principal();
	}
	if(fecha1.dia<1 || 31<fecha1.dia){
		system("cls");
		printf("\aError, ingrese un dia valido\n");
		principal();
	}
	
	
	/*************************************/
	printf("Ingresa la segunda fecha cronologica\n");
	fecha2=leer();
	
	
	if(fecha2.anne<=-1){
		
		system("cls");
		printf("\aError, ingrese un anne valido\n");
		principal();
	}
	if(fecha2.mes<=0 || 12<fecha2.mes){
		system("cls");
		printf("\aError, ingrese un mes valido\n");
		principal();
	}
	if(fecha2.dia<1 || 31<fecha2.dia){
		system("cls");
		printf("\aError, ingrese un dia valido\n");
		principal();
	}
	
	ansb1=fecha1.anne;
	ansb2=fecha2.anne;
	dias1=fecha1.anne*365;
	dias2=fecha2.anne*365;

	while(ansb1%4!=0){
		
		ansb1--;
		
	}
	while(ansb2%4!=0){
		
		ansb2--;
		
	}
	dias1=dias1+(ansb1/4);
	dias2=dias2+(ansb2/4);
	
	if(fecha1.mes==1){
		
		dias1=dias1+fecha1.dia;
		
	}
	if(fecha1.mes==2){
		
		dias1=dias1+fecha1.dia+31;
		
	}
	if(fecha1.mes==3){
		
		dias1=dias1+fecha1.dia+59;
		
	}
	if(fecha1.mes==4){
		
		dias1=dias1+fecha1.dia+90;
		
	}
	if(fecha1.mes==5){
		
		dias1=dias1+fecha1.dia+120;
		
	}
	if(fecha1.mes==6){
		
		dias1=dias1+fecha1.dia+151;
		
	}
	if(fecha1.mes==7){
		
		dias1=dias1+fecha1.dia+181;
		
	}
	if(fecha1.mes==8){
		
		dias1=dias1+fecha1.dia+212;
		
	}
	if(fecha1.mes==9){
		
		dias1=dias1+fecha1.dia+243;
		
	}
	if(fecha1.mes==10){
		
		dias1=dias1+fecha1.dia+273;
		
	}
	if(fecha1.mes==11){
		
		dias1=dias1+fecha1.dia+304;
		
	}
	if(fecha1.mes==12){
		
		dias1=dias1+fecha1.dia+334;
		
	}
	
	
	
	
	
	
	
	if(fecha2.mes==1){
		
		dias2=dias2+fecha2.dia;
		
	}
	if(fecha2.mes==2){
		
		dias2=dias2+fecha2.dia+31;
		
	}
	if(fecha2.mes==3){
		
		dias2=dias2+fecha2.dia+59;
		
	}
	if(fecha2.mes==4){
		
		dias2=dias2+fecha2.dia+90;
		
	}
	if(fecha2.mes==5){
		
		dias2=dias2+fecha2.dia+120;
		
	}
	if(fecha2.mes==6){
		
		dias2=dias2+fecha2.dia+151;
		
	}
	if(fecha2.mes==7){
		
		dias2=dias2+fecha2.dia+181;
		
	}
	if(fecha2.mes==8){
		
		dias2=dias2+fecha2.dia+212;
		
	}
	if(fecha2.mes==9){
		
		dias2=dias2+fecha2.dia+243;
		
	}
	if(fecha2.mes==10){
		
		dias2=dias2+fecha2.dia+273;
		
	}
	if(fecha2.mes==11){
		
		dias2=dias2+fecha2.dia+304;
		
	}
	if(fecha2.mes==12){
		
		dias2=dias2+fecha2.dia+334;
		
	}
	
	
	total=dias2-dias1;
	if(total<0){
		system("cls");
		printf("Escribiste una segunda fecha menor a la primer fecha\n");
		principal();
		
	}
	else{

	printf("La cantidad de dias entre las dos fechas es: %d\n", total);

	}	/**/	
	
}



int main(){
	
	principal();

	system("pause");
	return 0;

}
