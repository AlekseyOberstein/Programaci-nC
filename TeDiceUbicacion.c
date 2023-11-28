#include <stdio.h>
#include <stdlib.h>

main (int argc, char*argv[])
{
	
	if(argc<0 || argc>2){
		
		printf("Faltan o sobran nombres en la linea de comandos");
		exit(0);
		
	}
	
	printf("\n Numero de elementos en la linea de comandos %d", argc);
	printf("\n Nombre del primer comando en linea %s", argv[0]);
	printf("\n Nombre del segundo comando %s \n\n", argv[1]);
	return 0;
	
}
