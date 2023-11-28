#include <stdlib.h>
#include <stdio.h>
int j, k;
int *ptr;
int main (void)
{
j = 1;
k = 2;
ptr = &k;
printf("\n");
printf("j tiene el valor: %d y esta alojado en: %p\n", j, (void *)&j);
printf("k tiene el valor: %d y esta alojado en: %p\n", k, (void *)&k);
printf("ptr tiene el valor: %p y esta alojado en: %p\n", ptr, (void *)&ptr);
printf("El valor del entero al que apunta ptr es: %d\n", *ptr);
return 0;
}
