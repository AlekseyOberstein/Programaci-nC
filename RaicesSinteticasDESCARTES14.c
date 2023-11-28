/*************************************************************************************
*  Este programa te muestra algunas o todas las raices de un polinomio               *
*  Utilizando la división sintética y los divisores de P(x) y Q(x)  tal que P(x)/Q(x)*
*                                                                                    * 
*************************************************************************************/
#include<stdio.h>
#include <stdlib.h>
int gr, gr1, a, b, i, j, k, pcp, pcp1, pti, pti1, r, positivo, ppq, ppq1, cpolinomio[20], repetir, signos[1000], ps, cpolinomio3[1000], raiz;
float divp[1000], divp1[1000], divti[1000], divti1[1000], divpq[1000], divpq1[1000], sumas[1000], multiplicaciones[1000], cpolinomio2[20], multrp, sumarp;
char respuesta;

/*
gr=grado 
cpolinomio= coeficientes del polinomio 
pcp= posición coeficiente principal
pti= término independiente
a,b,i,j, k= variables
divp= divisores del coeficiente principal
divti= divisores del término independiente
r= residuo
divpq= divisores de la forma p/q
ppq= posición de p/q
sumarp=suma del residuo polinomio
multrp=multiplicación del residuo polinomio
*/

descartes1(){
	
	ps=-1;
	
	for(i=0;i<=gr;i++){
		
		if(0<cpolinomio3[i]){
			
		ps++;
		signos[ps]=1;
			
			
		}
		if(cpolinomio3[i]<0){
			
			ps++;
			signos[ps]=0;
			
			
			
		}
		
		
	}
	a=0;
	raiz=0;
	
	while(a<ps){
		
		if(signos[a]!=signos[a+1]){
			
			raiz++;
			
		}
		
		a++;
		
	}
	
}

descartes(){
	
	ps=-1;
	
	for(i=0;i<=gr;i++){
		
		if(0<cpolinomio[i]){
			
		ps++;
		signos[ps]=1;
			
			
		}
		if(cpolinomio[i]<0){
			
			ps++;
			signos[ps]=0;
									
		}
		
	}
	a=0;
	raiz=0;
	
	while(a<ps){
		
		if(signos[a]!=signos[a+1]){
			
			raiz++;
			
		}
		
		a++;
		
		
	}
	
}

pnegativo(){
	
	for(i=0;i<gr;i++){
		
		cpolinomio3[i]=cpolinomio[i]*-1;
	
	}
	
	cpolinomio3[gr]=cpolinomio[gr];
	
	printf("\nLos coeficientes del Polinomio evaluados en P(-x) son:\n");
	for(i=0;i<=gr;i++){
		
		printf("\t%d", cpolinomio3[i]);
		
	}
	
	descartes1();
	printf ("\n\nA lo mas hay %d raices negativas.\n", raiz);
	
	
	
	
}

raices(){
	
	for(i=0;i<=ppq1;i++){
		multrp=0;
		sumarp=0;
		for(j=0;j<=gr1;j++){
				
			multrp=divpq1[i]*sumarp;
			sumarp=multrp+cpolinomio2[j];
			multiplicaciones[j]=multrp;
			sumas[j]=sumarp;
				
			
		}
		if(sumarp==0){
			
			
			printf("\nUna ra%cz es: \a%f\n", 161, divpq1[i]);
			
			for(a=0;a<=gr1;a++){
			
				printf("\t%g", cpolinomio2[a]);
			
			}
			printf("\n");
			for(a=0;a<=gr1;a++){
			
				printf("\t%g", multiplicaciones[a]);
			
			}
			
			printf("\n-------------------------------------------------------------------------------------------\n");
			
			for(a=0;a<=gr1;a++){
			
				printf("\t%g", sumas[a]);
			
			}
			printf("\n");

			printf("===========================================================================================\n\n");
			
			gr1--;
			
			for(i=0;i<=gr1;i++){
				
				cpolinomio2[i]=sumas[i];
				
				
			}
			
		}	
		
	}
	
/*	if(1==repetir){
		
		raices();
		repetir--;
		
	}*/
	
	
	
}

igualar(){
	gr1=gr;
	for(i=0;i<=gr1;i++){
		
		cpolinomio2[i]=cpolinomio[i];		
		
	}	
	
}

/*reduccionpq(){
	
	for(i=0;i<=ppq;i++){
		for(j=1;j<=ppq;j++){
			
			if(divpq[i]==divpq[j]){
				
				for(k=j;k+1<ppq;k++){
					
					divpq[k]=divpq[k+1];
					
					
				}
				
				ppq--;
				
				
			}
			
			
			
		}
		
		
	}

	printf("\nLas posibles raices del polinomio son:\n");
	for(i=0;i<=ppq;i++){
		
		printf("%g\t", divpq[i]);
		
	}
	
}*/

reduccionpq2(){
	
	for(i=0;i<ppq;i++){
		j=i+1;
		
		while(j<ppq){
			
			if(divpq[i]==divpq[j]){
				
				for(k=j;k+1<ppq;k++){
					
					divpq[k]=divpq[k+1];
						
				}
				
				ppq--;
			
			}
			else{
				
				j++;
				
			}
			
			
			
		}
		
		
	}
	
	
}

divisorespq(){
	
	ppq=0;
	
	for(i=0;i<=pti1;i++){
		for(j=0;j<=pcp1;j++){
			
			divpq[ppq]=divti1[i]/divp1[j];
			ppq++;

		}
		
		
	}
	
	ppq--;
	reduccionpq2();
	
	ppq1=0;
	
	for(i=0;i<=ppq;i++){
		
		divpq1[ppq1]=divpq[i];
		ppq1++;
		divpq1[ppq1]=divpq[i]*-1;
		ppq1++;
		
	}
	
	ppq1--;
	
	
	printf("\nLas posibles raices (p/q) del polinomio son:\n");
	for(i=0;i<=ppq1;i++){
		
		printf("%g\t", divpq1[i]);
		
	}
	
}


divisoresti(){
	pti=0;
	pti1=0;

	if(cpolinomio[gr]<0){
	
		positivo=cpolinomio[gr]*-1;
		
		for(i=1;i<=positivo;i++){
		
		r=positivo%i;
		if(r==0){
			
			divti1[pti1]=i;
			pti1++;
			divti[pti]=i;
			pti++;	
			divti[pti]=-1*i;
			pti++;
			
			}
			
		}
		
		pti1--;
		pti--;
	
		printf("\nLos divisores del t%crmino independiente son:\n\n", 130);
		for(a=0;a<=pti;a++){
		
			printf("\t%g", divti[a]);
		
		}
		
	}
	else{
		
		for(i=1;i<=cpolinomio[gr];i++){
		
			r=cpolinomio[gr]%i;
			if(r==0){
		
				divti1[pti1]=i;
				pti1++;
				divti[pti]=i;
				pti++;	
				divti[pti]=-1*i;
				pti++;
			}
			
		}
		
		pti1--;
		pti--;
	
		printf("\nLos divisores del t%crmino independiente (p) son:\n\n", 130);
		for(a=0;a<=pti;a++){
		
			printf("\t%g", divti[a]);
		
		}
		
	}

		
}

divisorescp(){
	
	pcp=0;
	pcp1=0;
	
	if(cpolinomio[0]<0){
		
		positivo=cpolinomio[0]*-1;
		
		for(i=1;i<=positivo;i++){
		
			r=positivo%i;
		
			if(r==0){
			
			divp1[pcp1]=i;
			pcp1++;
			divp[pcp]=i;
			pcp++;	
			divp[pcp]=i*-1;
			pcp++;
			}
			
		}
		pcp1--;
		pcp--;
	
		printf("\nLos divisores del coeficiente principal son:\n\n");
		for(a=0;a<=pcp;a++){
		
			printf("\t%g", divp[a]);
		
		}
		
	}
	else{
		
		for(i=1;i<=cpolinomio[0];i++){
		
			r=cpolinomio[0]%i;
		
			if(r==0){
			
			divp1[pcp1]=i;
			pcp1++;
			divp[pcp]=i;
			pcp++;	
			divp[pcp]=i*-1;
			pcp++;
				
			}
			
		}
		
		pcp1--;
		pcp--;
	
		printf("\nLos divisores del coeficiente principal (q) son:\n\n");
		for(a=0;a<=pcp;a++){
		
			printf("\t%g", divp[a]);
		
		}
		
	}
	
	
}
coeficientes(){
	
	
	printf("\nIngresa el grado del polinomio: ");
	fflush(stdin);
	scanf("%d", &gr);
	if(0<gr){
		
		for(a=1;a<=gr+1;a++){
	
			printf("Ingresa el %d%c cociente del polinomio: ", a, 167);
			fflush(stdin);
			scanf("%d", &cpolinomio[a-1]);
		
		}
	
		printf("\nLos coeficientes del polinomio son:\n\n");
		
		for(a=0;a<=gr;a++){
			
			printf("\t%d", cpolinomio[a]);
			
		}		
		
	}
	else{
		
		system("cls");
		printf("\aError, escribe un numero positivo\n");
		coeficientes();
		
	}

	
	
}

int main(){
	
	respuesta='s';
	while(respuesta=='s' || 'S'==respuesta){
		
		coeficientes();
	
		printf("\n\n");
		system("pause");
		system("cls");
		
		divisoresti();
	
		printf("\n\n");
		system("pause");
		system("cls");
	
		divisorescp();
	
		printf("\n\n");
		system("pause");
		system("cls");
	
		divisorespq();
		//reduccionpq();
		printf("\n\n");
		system("pause");
		system("cls");
		igualar();
		raices();
		
		repetir=gr1;
		
		while(0<repetir){
		
		raices();
		repetir--;
		
		}
		printf("\n\n* * * * * * * * * * * * * * * Regla de descartes * * * * * * * * * * * * * * *\n\n");
		descartes();
		printf("\nA lo mas hay %d raices positivas.\n", raiz);
		pnegativo();
		
	/*	for(i=0;i<=gr;i++){
			
			printf("\t%d", cpolinomio[i]);
			
		}*/
		
		printf("\n");	
		printf("\n");
		
		printf("%cDeseas repetir el programa?(Escribe s o n)\n", 168);
		fflush(stdin);
		scanf("%c", &respuesta);
		system("cls");

		
	}
	
	system("pause");
	return 0;
	
	

}
