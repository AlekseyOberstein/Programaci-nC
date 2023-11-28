#include<stdio.h>
#include<stdlib.h>

int main(){

char c;
char *pc;

pc=&c;

for(c='A'; c<='z'; c++){
	
	printf("%c", *pc);
	
}

printf("\n\n");

for(c='A'; c<='z'; c++){
	
	printf("%c", c);
	
}

printf("\n\n");
	
system("pause");
return 0;

}
