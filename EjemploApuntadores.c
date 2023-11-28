#include<stdio.h>

int main () 
{ char c;
char *pc;

pc=&c;

for( c='A'; c<='z'; c++)
printf("%c ", *pc); }


