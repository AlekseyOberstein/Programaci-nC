//Alexis Palomares Olegario
//Práctica #14
/*Este programa te dice tu signo zodiacal*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char respuesta='s';
	int A, M, D;
	
	while(respuesta=='s' || respuesta=='S'){
		
		system("cls");
		
		A=0;
		M=0;
		D=0;
		
		
		while(A<1){
			
			printf("Escribe tu a%co de nacimiento en el formato aaaa\n", 164);
			fflush(stdin);
			scanf("%d", &A);
			system("cls");

		}
		while(M<1 || 12<M){
			
			printf("Escribe tu mes de nacimiento en el formato mm\n");
			fflush(stdin);
			scanf("%d", &M);
			system("cls");
			
		}
		while(D<1 || 31<D){
			
			printf("Escribe tu dia de nacimiento en el formato dd\n");
			fflush(stdin);
			scanf("%d", &D);
			system("cls");
			
		}
		
		if((21 <= D && M == 3) || (D <= 20 && M == 4 )){
			
			printf("\nTu signo zodiacal es: Aries");
			
		}
		
		else{
			
			if((21 <= D && M == 4 && D!=31) || (D <= 20 && M == 5)){
				
				printf("\nTu signo zodiacal es: Tauro");
				
			}
			else{
				
				if((21 <= D && M == 5) || (D <= 21 && M == 6 )){
					
					printf("\nTu signo zodiacal es: Geminis ");
					
				}
				else{
					
					if((22 <= D && M == 6 && D!=31) || (D <= 22 && M == 7 )){
						
						printf("\nTu signo zodiacal es: Cancer ");
						
					}
					else{
						
						if((23 <= D && M == 7) || (D <= 22 && M == 8 )){
							
							printf("\nTu signo zodiacal es: Leo ");
							
						}
						else{
							
							if((23 <= D && M == 8) || (D <= 22 && M == 9 )){
								
							printf("\nTu signo zodiacal es: Virgo ");	
								
							}
							else{
								
								if((23 <= D && M == 9 && D!=31) || (D <= 22 && M == 10 )){
									
									printf("\nTu signo zodiacal es: Libra ");
									
								}
								else{
									
									if((23 <= D && M == 10) || (D <= 22 && M == 11)){
										
										printf("\nTu signo zodiacal es: Escorpio ");
										
									}
									else{
										
										if((23 <= D && M == 11 && D!=31) || (D <= 21 && M == 12 )){
											
											printf("\nTu signo zodiacal es: Sagitario ");
											
										}
										else{
											
											if((22 <= D && M==12) || (D <= 20 && M == 1 )){
												
												printf("\nTu signo zodiacal es: Capricorno ");
												
											}
											else{
												
												if((21 <= D && M == 1) || (D <= 18 && M == 2 )){
													
													printf("\nTu signo zodiacal es: Acuario ");
													
												}
												else{
													
													if((19 <=D && M==2 && D!=29 && D!=30 && D!=31) || (D<=20 && M==3) || (D==29 && M==3 && (A%4 ==0))){
														
														printf("\nTu signo zodiacal es: Piscis ");
														
													}
													
												}
												
											}
											
										}
										
									}
								}
								
							}
							
						}
						
					}
					
				}
				
			}
			
			
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
